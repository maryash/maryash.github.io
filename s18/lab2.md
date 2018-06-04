layout: myDefault
title: LAB 2
---
### [CSCI 12700 | Introduction to Computer Science](../summer2018.md)  
Hunter College City University of New York &nbsp;Summer 2018 

---

### LAB 2  

---

Today's lab will introduce strings and lists in Python.

Software tools needed: web browser and Python IDLE programming environment.

### In-class Quiz

During lab, there is a [quiz](quizzes.html). The password to access the quiz will be given during lab. To complete the quiz, log on to Blackboard (see [LAB 1](lab1.html) for details on using Blackboard).

### Using Python, Gradescope, and Blackboard

See [LAB 1](lab1.html) for details on using Python, Gradescope, and Blackboard.

### Strings

A sequence of characters (i.e. letters, numbers, symbols) is called a string. To indicate a string, we use quotes (either single or double, just as long as they match up) to indicate the start and end (a fancier way to say that is: quotes deliminate the string). For example, for our first program, we wrote:

    print("Hello, World!")

The string, or sequence of characters, `Hello, World!`, was printed to the screen. We can also store strings to be used again in the program. For example,

    greeting = "Hello, World!"
    print(greeting)

creates a location in memory that can be accessed by typing the name (or identifier) that we chose: greeting. greeting stores the string Hello, World!. While the quotes are not stored, we will often write "Hello, World!" to make it more clear where the string begins and ends. When we execute the code above, it will create the variable, greeting, and then print out the message:

    Hello, World!

We can use the variable any number of times. For example, if we wanted to print the message twice, we could use:

    greeting = "Hello, World!"
    print(greeting)
    print(greeting)

### More Useful String Methods

Since strings are used everywhere, there are many built-in functions for strings.

*   Guess which each does from its name, then
*   Click the forward button in the code window below to see if you guess was correct.  
  
  
<iframe width="800" height="400" frameborder="10" margin="10" src="https://pythontutor.com/iframe-embed.html#code=greeting%20%3D%20%22Hello,%20World!%22%0A%0A%23Guess%20what%20the%20following%20string%20methods%20do%3A%0A%23%20%20Then%20click%20the%20forward%20button%20to%20see%20how%20you%20did%0A%0Aprint%28greeting.upper%28%29%29%0Aprint%28greeting.lower%28%29%29%0Aprint%28len%28greeting%29%29%0Aprint%28greeting.count%28'o'%29%29%0Aprint%28greeting.count%28'%20'%29%29%0Aprint%28greeting.find%28'll'%29%29%0A&codeDivHeight=400&codeDivWidth=350&cumulative=false&curInstr=0&heapPrimitives=false&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false"> </iframe>  
  
  
  
For historic reasons, we start counting at 0, instead of 1, in many computer languages, including Python. When you use find() command on the string `"Hello, World!"`, the first character is at `0`, the next character at `1`, etc.  
  
   
  
 ` 0 ` | ` 1 ` | ` 2 ` | ` 3 ` | ` 4 ` | ` 5 ` | ` 6 ` | ` 7 ` | ` 8 ` | ` 9 ` | ` 10 ` | ` 11 ` | ` 12 ` 
 :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: 
 ` H ` | ` e ` | ` l ` | ` l ` | ` o ` | ` , ` | `   ` | ` W ` | ` o ` | ` r ` | ` l ` | ` d ` | ` ! ` 
  
  
  
The find() command gives the location of `"ll"` which is `2` if you start by counting the first character as `0`.

### Getting Input

Last week, we used the `print()` function to write messages to the user of our program. This week, we introduce, `input()`, to get information from the user. Here's the basic format:

    aString = input("Put a message here to show user: ")

where the string `"Put a message..."` is replaced by the prompt you would like the user to see and `aString` with the name of the string you are using in your program.

Let's write a program that combines the asking the user for input with the string commands a the beginning of the lab. The program will:

1.  Prompt the user for a message and store it in the variable, mess.
2.  Print the message to the screen.
3.  Print the message in all capital letters.
4.  Print the message in all lower case letters.

To start, open IDLE and start a new file window. Put a comment (lines that begin with `#`) that includes your name and a short description of what the program does.

1.  Next, fill in the code that prompt the user for a message and store it in the variable, mess (see the example above).
2.  Print the message to the screen (also done in the example above).
3.  To print in all capital letters, you can use the `upper()` command (see first example in the lab).
4.  Print the message in all lower case in a similar way.

Save your file as you go, and then run it. Try different messages to make sure it works with different inputs. When it works, see the [Programming Problem List](assignments.html).

#### Looping Through Strings

You can also loop through strings. Try running the code below:

Each character has a number assigned to it. When you write a character, it is converted to its number, and that is stored instead to save space. Python uses the standard Unicode encoding (which extends the popular ASCII encoding to new symbols and alphabets). For example, `ord('a')` give the Unicode number for the character, `a`, which is `97`.

Let's look at the Unicode of the characters in our string:

Modify the program to:

*   To prompt the user to enter a string and store it in myString, and
*   Only print the ASCII code of each character (instead of the character and its ASCII code)

When it works, add in your name in a comment, and see the [Programming Problem List](assignments.html).

To go the other direction, there's a function chr() which takes numbers and returns the corresponding character. For example, `chr(97)` returns `a`. Let's look at the characters with unicode from `65` to `69`:

The `range()` statement has several different options:

*   range(stop): if you have only a single number in the parenthesis, it will generate all the numbers from 0 to stop - 1. For example, range(5) generates the numbers 0, 1, 2, 3, 4.
*   `range(start, stop)`: if you have only two numbers in the parenthesis, it will generate all the numbers from `start` to `stop - 1`. For example, `range(65,70)` generates the numbers `65`, `66`, `67`, `68`, `690`.
*   `range(start, stop, step)`: if you have three numbers in the parenthesis, it will generate all the numbers from `start` to `stop - 1`, increasing by `step` each time. For example, `range(100,200,10)` generates the numbers `100`, `110`, `120`, `130`, `140`, `150`, `160`, `170`, `180`, `190`.

### Biomolecular Sequences

Let's apply what we just learned to some questions from biology. DNA is a molecule that contains instructions for the cell ([wiki](https://en.wikipedia.org/wiki/DNA)). We can represent it as a string of four characters: 'A', 'C', 'G', and 'T' corresponding to the four nucleotides that are the building blocks for the sequences. For example,

        insulin = "AGCCCTCCAGGACAGGCTGCATCAGAAGAGGCCATCAAGCAGGTCTGTTCCAAGGGCCTTTGCGTCAGGTGGGCTCAGGATTCCAGGGTGGCTGGACCCCAGGCCCCAGCTCTGCAGCAGGGAGGACGTGGCTGGGCTCGTGAAGCATGTGGGGGTGAGCCCAGGGGCCCCAAGGCAGGGCACCTGGCCTTCAGCCTGCCTCAGCCCTGC"

is the start of the [DNA sequence for insulin in humans](https://www.ncbi.nlm.nih.gov/gene?Db=gene&Cmd=DetailsSearch&Term=3630).

We have the tools to compute how long the out sequence is as well as GC-content (the fraction of the sequence that is C and G) which is correlated with the stability of the molecule:

*   First, we compute the length of the sequence.
*   Next, we count the number of 'C' and number of 'G'.
*   Next, we add the number of 'C' and number of 'G' together, and divide by the length.
*   Then, we convert to a percentage by multiplying by 100 and print out the answer.

### Looping Through Strings, Revisited

There's another way we can loop through strings, using the index of each character. Let's assume that we have:

        greeting = "Hello, World!"

Before, we printed out the whole string with:

        print(greeting)

If we wanted to print out only the first letter, we could write:

        print(greeting\[0\])

where the number between the square brackets is the index of the character, in this case, `0`, or the very first character of the string.

Try guessing what the following code does and then running it:

### What's Next?

If you finish the lab early, now is a great time to get a head start on the programming problems due early next week. There's instructors to help you, and you already have Python up and running. The [Programming Problem List](assignments.html) has problem descriptions, suggested reading, and due dates next to each problem.
