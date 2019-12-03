#! /usr/bin/env ruby

require 'tempfile'
require 'fileutils'

if ARGV.size < 1
  puts "Usage: \n\t./test.rb ./mission\n\n"
  exit(1)
end

cmd = ARGV[0]

ht_all = Hash.new

ht_mpr = Hash.new
ht_debris = Hash.new
ht_num = Hash.new
ht_rows = Hash.new
ht_cols = Hash.new

def append(ht, k, v)
  if ht[k] == nil
    ht[k] = [v]
  else
    ht[k] << v
  end
end

[0.0, 0.0002, 0.005, 0.02, 0.4].each{|mpr|
  [0.2, 0.5, 0.8].each{|debris|
    [2, 5, 15, 30].each{|num|
      [15, 35].each{|rows|
        [15, 35].each{|cols|
          seed = rand(10000000)
            
          tmp_file = Tempfile.new('mcc-tmpfile')

          full_cmd = "#{cmd} #{rows} #{cols} #{num} #{debris} #{mpr} #{seed} fast #{tmp_file.path}"
          `#{full_cmd}`
          res = IO.read(tmp_file.path).split
          tmp_file.unlink
          
          succ = false 
          if res[0] == "success"
            succ = true
          end

          time = res[1].to_i
          palced = res[2].to_i
          collected = res[2].to_i
          remains = res[3].to_i

          rate = collected.to_f / (time.to_f * num.to_f)
          
          append(ht_all, 'all', rate)

          append(ht_mpr, mpr, rate)
          append(ht_debris, debris, rate)
          append(ht_num, num, rate)
          append(ht_rows, rows, rate)
          append(ht_cols, cols, rate)

          # puts "#{rate} \t #{full_cmd}"
        }
      }
    }
  }
}

def stats(ht, name, print_score) 
  puts "#{name}:"
  ht.each{|k,v|
    mean = v.map{|x| x.to_f}.reduce(:+) / v.size.to_f
  
    x = mean * 100000
    rate = [(x - 250.0)*2.7, 0].max

    score = 0.085 * rate

    score_report = if print_score then "\t -> \t(Score #{score.round(1)})" else '' end

    puts "\t#{k}\t %5d #{score_report}" % rate
  }
end

puts

stats(ht_all, "Average collection rate", true)
stats(ht_mpr, "mpr", false)
stats(ht_debris, "debris", false)
stats(ht_num, "num", false)
stats(ht_rows, "rows", false)
stats(ht_cols, "cols", false)
