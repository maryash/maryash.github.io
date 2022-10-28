---  
layout: myDefault
title: PROJECT 2
---   

# Project 2: Your Word Does Matter! --- Streams Part Too

_**Welcome back students. After the success of your corn maze, you have been hired by Bill to create the famous Word Application for its new Windews 22 OS. After the recent skepticism of Windews, Bill has decided to revamp Microhard, give it a new face and appeal... and you are at the center of it! This task might be challenging, but it's nothing you haven't seen before... uhmm actually I take that back. But I do believe in you. I do believe that your Word application will save this OS and Microhard.**_

![word_meme](./word_meme.jpg)

## Introduction

For this project you will be reading in a text file using `ifstream`, reformating & storing it into an output text file with `ofstream`. However, this project can also be done through the use of `getline`, there is not one specific way to achieve the correct answer as long as the formating of the output file follows the guidelines set on this project.

Other important things to keep in mind are the use of RTF (Rich Text File) and Plain Text file. A plain text file is a document that contains no formatting, where as an RTF file does have formating that differs from one OS to the other. To avoid isses when uploading to Gradescope, make sure you test your code with plain text files.

### Issues you may encounter:

There might be issues where your output file has null bytes or carriage returns when testing. This stems from your
input file, especially if it is a text file created on Mac. At the end of this Assignment Sheet I have added
a function you can use to remove these bytes when reading in an input file, which can be customized to remove
any weird characters you encounter while testing.

Another important fact to remember is the task here is not to just read in a text file then jam all the words into an output file. Here we are trying to keep the structure of the text file while giving it restrictions. For example, if the first line in the input file has less characters than the limit, that doesn't mean you take words from the following sentence and place it in the first line. Overflowing happens downstream. We can acheive this by reading in the file line by line and thus creating the output file as well line by line.

### Potential functions and libraries you can use:

- When streaming in an input file, you can use the getline function to read in line by line.
    + Here are some examples on [GeeksForGeeks](https://www.geeksforgeeks.org/getline-string-c/)
- You can also go word by word in a given line using stringstream
    + Here are some examples on [GeeksForGeeks](https://www.geeksforgeeks.org/stringstream-c-applications/)
    + [Checkout this Geeks for Geeks page on streams!](https://www.geeksforgeeks.org/file-handling-c-classes/)

---

### Implementation:


**Work incrementally!** Work through the tasks sequentially (implement and test). Only move on to a task when you are positive that the previous one has been completed correctly. Remember that the **function prototypes must be exactly as specified in this project specification**. This is a contract, it gives you all the information necessary to complete this assignment correctly. If you don't understand this project specification and its requirements, ask for clarification before you proceed. _Remember to make parameters read-only when appropriate._

---

## Task 1: Hey pal, the line ends here! You'll have to join the next one.

![lines](./mcdonalds_line.jpg)

The first task that you have to undertake is to set the width of the line for the new document. To do this you must read from an input 
`.txt` document where the settings of the document will be indicated on the first line. 

**NOTE: You will have to use `ifstream` for taking in the file and `ofstream` for generating the output file.**

For example an ```input.txt``` will start with:

```
60;output.txt;
What is Lorem Ipsum?
Lorem Ipsum is simply dummy text of the printing and typesetting industry. 
Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, 
when an unknown printer took a galley of type and scrambled it to make a type specimen book.

Speaking of books, I love books. I read and write, sometimes at the same time because why not! Why should
I be limited by my measily brain and only do one task at a time? Exactly.

Well, thank you for listening. I appreciate you all :)
```

The number `60` on this case will indicate the **max width** of characters your output document will hold on every line. The second parameter should be the name of the output text file where your formatted document will be stored, which in this case it's `output.txt`. Please keep in mind that each of the settings on the first line are seperated by a `;` with no space in between.

Based on the example input file shown above, our `output.txt` should look something like this after running it through our amazing Word formatter:

```
$ ./word
$ Enter the input filename: input.txt
```

```
What is Lorem Ipsum?                                       
Lorem Ipsum is simply dummy text of the printing and       
typesetting industry. Lorem Ipsum has been the industry's  
standard dummy text ever since the 1500s, when an unknown  
printer took a galley of type and scrambled it to make a   
type specimen book.                                        

Speaking of books, I love books. I read and write,         
sometimes at the same time because why not! Why should I be
limited by my measily brain and only do one task at a time?
Exactly.                                                    

Well, thank you for listening. I appreciate you all :)     
```

**NOTE: Each paragraph, even though the amount of lines changed, stayed as their own paragraphs.**

---

## Task 2: Honestly, there's no justification for this project

![justify](./justify.jpg)

Now we are given the task to add more functionality to our Word Application.

First is that we will now look for headers and body. Basically, if a line is in all uppercase, then it is a header/title/etc. The
body is everything else. The significance will be explained after we discuss the next feature.

We will now add the ability to justify our input, which will contain three types: `right, left and center`. There will be two things you
have to justify, the body and the headers. 

- **If the user does not pass a justification for the body, then it should be defaulted to `left`.**

- **If the user does not specify a justification for the headers, then it should be defaulted to whatever the body is justified to.**

To have a better understanding of this lets look back at our previous example on Task 1. Now our input will take one more argument after the document size which will look something like this: `60;right;left;output.txt`
. This will indicate that the *body* of the document will be justified to the right and the *headers* to the left. 

For example, our `input.txt` has:

```
60;right;left;output.txt;
WHAT IS LOREM IPSUM?
Lorem Ipsum is simply dummy text of the printing and 
typesetting industry. 
Lorem Ipsum has been the industry's standard dummy text 
ever since the 1500s, when an unknown printer took a galley 
of type and scrambled it to make a type specimen book.

Speaking of books, I love books. I read and write, sometimes 
at the same time because why not! Why should I be limited by 
my measily brain and only do one task at a time? Exactly.

TITLE 2
Well, thank you for listening. I appreciate you all :)
```

Then it's `output.txt` should look like:

```
WHAT IS LOREM IPSUM?                                       
       Lorem Ipsum is simply dummy text of the printing and
  typesetting industry. Lorem Ipsum has been the industry's
  standard dummy text ever since the 1500s, when an unknown
   printer took a galley of type and scrambled it to make a
                                        type specimen book.

         Speaking of books, I love books. I read and write,
sometimes at the same time because why not! Why should I be
limited by my measily brain and only do one task at a time?
                                                    Exactly.


TITLE 2                                                    
     Well, thank you for listening. I appreciate you all :)
```

---

## Task 3: Cup half empty 

![justify](./double_spaced.jpg)

Now we have two more features that Microhard asked us to implement in the last minute and they are `Double Space` and `Fill`

As all of our previous settings, they will be included in the first line of the `input.txt` file where it will look something like this: `60;right;left;true;true;output.txt;`. Both these settings are boolean values which will indicate weather a document uses fill / double space. The first boolean statement within the line will indicate weather the document contains the fill settings or not, the second is for double spaced. 

- By fill we mean filling up a line in the output before moving onto the next. For example, lets say the max width is 10 and the current line already has 5 characters. The next word that we are trying to fit is 10 characters long, we can only fit 3 characters of that word before moving the rest into the next line.
```
Based on the given example, this line:
Willy Strawberry

Would become:
Willy Str-
berry
```
  
- Double spaced means that between each line there should be an extra empty line. The crux is that for titles, there should also be an extra empty line before it as well so as to space it out even more. Check out the Tasks example below.  
**Overall, the settings format should be:
`max_width;justify_body;justify_headers;to_fill;double_spaced;output_filename;`**. 

For example, our `input.txt` has:

```
60;;center;true;true;output.txt;
WHAT IS LOREM IPSUM?
Lorem Ipsum is simply dummy text of the printing and 
typesetting industry. 
Lorem Ipsum has been the industry's standard dummy text 
ever since the 1500s, when an unknown printer took a galley 
of type and scrambled it to make a type specimen book.

Speaking of books, I love books. I read and write, sometimes 
at the same time because why not! Why should I be limited by 
my measily brain and only do one task at a time? Exactly.

TITLE 2
Well, thank you for listening. I appreciate you all :)
```


Would make the following `output.txt`:


```

                   WHAT IS LOREM IPSUM?                   

Lorem Ipsum is simply dummy text of the printing and types-       

etting industry. Lorem Ipsum has been the industry's stand-       

ard dummy text ever since the 1500s, when an unknown print-       

er took a galley of type and scrambled it to make a type s-   

pecimen book.                                              


Speaking of books, I love books. I read and write, sometim-         

es at the same time because why not! Why should I be limit-       

ed by my measily brain and only do one task at a time? Exa-     

ctly.                                                       



                          TITLE 2                          

Well, thank you for listening. I appreciate you all :)     

```

---  
  
Also, if you are getting random `NULL` objects in your output file, you can utilize the following function that we've made to clean it up.  
  
```c++
/**
 * @brief Removes NULL characters from the given string
 * 
 * @param line 
 * @return std::string 
 */
std::string removeNullChars(std::string line) {

    std::string null_less_line = "";

    for(int i = 0; i < line.length(); i++) {
        if(line[i] != '\0') {
            null_less_line += line[i];
        }
    }

    return null_less_line;
}
```

# Deliverables

There needs to be one deliverable throughout all tasks which is `word.cpp`. For every task `word.cpp` should contain the appropriate functionality depending on what is asked of you. Work on this project should be done incrementally and not completing one part of the project may result in not being able to get full credit on the next task.
