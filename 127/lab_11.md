---
layout: myDefault 
title: LAB 11  
---  
<style>  
table {
    border-collapse: collapse;
}
table, td, th {
    text-align: left;
    padding: 8px;
    padding-bottom: 6px;
    border: 1px solid #dee1e4;
}
tr:nth-child(even) {background-color: #fafafa;}
tr:nth-child(odd) {background-color: #ffffff;}
hr.style-six {
    border: 0;
    height: 0;
    border-top: 1px solid rgba(0, 0, 0, 0.1);
    border-bottom: 1px solid rgba(255, 255, 255, 0.3);
}
a:link {
    text-decoration: none;
}
a:visited {
    text-decoration: none;
    color: blue;
}
a:hover {
    text-decoration: none;
}
a:active {
    text-decoration: none;
}
</style>  
  
## LAB 11  
---  

Today's lab will introduce a simplified machine language.

Software tools needed: web browser and a graphical editor, such as gEdit.

References:

*   [WeMIPS Emulator](http://rivoire.cs.sonoma.edu/cs351/wemips/)
*   [U Idaho reference sheet](http://www.mrc.uidaho.edu/mrc/people/jff/digital/MIPSir.html)
*   [Setia's slides](https://cs.gmu.edu/~setia/cs365-S02/class3.pdf)
*   [Wikibooks](https://en.wikibooks.org/wiki/MIPS_Assembly/Instruction_Formats)

### In-class Quiz

During lab, there is a [quiz](quizzes.html). The password to access the quiz will be given during lab. To complete the quiz, log on to Blackboard (see [Lab 1](lab_01.html) for details on using Blackboard).

### Simplified Machine Language

In today's lab, we will explore a programming language that is very "low level" in that it maps very closely to the actual commands that are used by the computer's processor.

We will use an emulator, [WeMIPS](http://rivoire.cs.sonoma.edu/cs351/wemips/), to emulate what a machine-level language would do for a popular class of computer processors, MIPS. Processors with MIPS are a Reduced Instructor Set Computer (RISC), meaning they have fewer different types of instructions that the processor knows (and thus fewer that have to be implemented, leading to faster processors).

Let's start by looking at a program that will print "Hello World":

![](mipsHello.png)

If you would like to follow along, using the [emulator](http://rivoire.cs.sonoma.edu/cs351/wemips/), open the window and toggle the "Show/Hide Demos" button and then click on the "Hello World" demo.

Just as we did with PythonTutor, we can "step" or go through the code line-by-line to see what it does:

*   The first line is a comment. Like in Python, everything after a '#' on a line is ignored by the simulator.
*   The next line says to add -13 to $sp, which stands for the stack pointer. The stack is a region of memory where we can store information (it is very common-- more details in future computer science courses).  
    We are using 13, because to allow enough room to store the message "Hello World" (plus a null character to signal the end of the string).
*   The next line, SB $t0, 0($sp) moves the number we stored to the register $t0 to the stack pointer address (with 0 offset). Since it is moving a byte of information, SB stands for "Store Byte".
*   We repeat with each letter in our message, loading it to register $t0 and then moving the contents of that register to the next empty memory location. This contninues until the entire message is loaded.
*   Next, we place 4 into the register $t0. That register is used to tell the simulator what type of system call we would like to make. 4 is used for printing strings.
*   Next, we place the location of the start of our message in $a0 (that's where the system looks for the location of the string to print).
*   Lastly, we call syscall. Since we have loaded 4 into $t0, it will print whatever string starts at the memory location in $a0.
*   If the messages are not displaying, toggle to the "Log". You will see the message in green on the stack.

Try changing the program in the WeMIPS window to print out "Mihi cura futuri". Once it does, copy the program into a text window:

    #YOUR NAME HERE
    #My first MIPS program that prints: Mihi cura futuri

    ... put your machine language program here ....

and see the [Programming Problem List](assignments.html).

#### Loops in Machine Language

To create loops in our machine language, we use two additional instructions:

*   `BEQ` or "Branch When Equal" which, when two values are equal, lets you go to a different part of the program (which you specify), and
*   `J` or "Jump" which always go to a different part of the program, and is incredibly useful for setting up loops.

Here is a sample of setting up loops in the MIPS machine language (you can copy it into the emulator to step through the code):

    #Sample program that loops from 10 down to 0
    ADDI $s0, $zero, 10 #set s0 to 10
    ADDI $s1, $zero, 1  #use to decrement counter, $s0
    AGAIN: SUB $s0, $s0, $s1
    BEQ $s0, $zero, DONE
    J AGAIN
    DONE:  #To break out of the loop

Here's a translation of the code into pseudocode:

1.  Set `$s0` to 10.
2.  Set `$s1` to 1.
3.  Subtract `$s1` from `$s0` and store result in `$s0` (i.e. `$s0 = $s0 - $s1`).
4.  If `$s0` equals 0, go to line 6.
5.  Else, go back to Line 3 and repeat.
6.  Program ends here.

This program counts down from 10 to 0. How could you modify it to count from 1 to 10? When you have it running, see the [Programming Problem List](assignments.html).

(Hint: store the value 10 in a register to use in the comparison)

#### Challenge

![](mipsInteractive.png)

As a final machine language challenge, modify the "Interactive" demo (the first lines are in the image above) to use the _current year_ when computing the ages. When you have it running, see the [Programming Problem List](ps.html).

### A Note on Grading Simplified Machine Language

We're going to use just a few commands that move values into registers (physical memory locations), do simple arithmetic, and jump (or branch) to another part of our program.

Explain stack pointer

To print out numbers from 10 to 0, loop with sub, plus print

There are many commands that can be used in the full MIPS machine language. We are working with only a few of them:

> `ADD`, `ADDI`, `ADDIU`, `BEQ`, `J`, `SB`, `SUB`, `SUBU`, `syscall`

As such, the grading script only recognizes the commands above and the '#' style comments. Anything else will confuse it greatly.

The general format for simplified machine language programs is:

#YOUR NAME HERE
#My first MIPS program that prints: Mihi cura futuri

Code goes here...

To submit your program for grading:

*   Run and debug your program using [WeMIPS](http://rivoire.cs.sonoma.edu/cs351/wemips/)
*   Once it works, copy the text into a text editor and save. Make sure your file has a comment at the top with your name.
*   Drag and drop the text file onto the [gradescope](http://gradescope.com) page for the given program.

### What's Next?

You must now complete programs 49 and 50 in the [Programming Problem List](assignments.html).  They are due tomorrow at 1pm!  
