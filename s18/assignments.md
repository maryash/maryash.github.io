---
layout: myDefault
title: PROGRAMMING ASSIGNMENTS
---
### [CSCI 12700 | Introduction to Computer Science](../summer2018.md)  
Hunter College City University of New York &nbsp;Summer 2018 

---

### Programming Problem List  


#### General Notes

*   Every program should begin with a comment that includes your name and a brief description.
```python    
    #Name: Thomas Hunter
    #Date: May 30, 2018
    #This program prints: Hello, World!
    
    print("Hello, World!")
```    
*   You are encouraged to submit your assignments early. Below lists the last date on which each assignment will be accepted. Assignments must be **submitted before 9pm** on the date due.
*   **No credit will be given for an assignment submitted late.**
*   Before submitting an assignment you are free to ask for help in recitation, during tutoring and office hours. Please take advantage of this.
*   For more information on using [gradescope](http://www.gradescope.com), see the [first lab](lab1.html).
*   While you are encouraged to work with others, **all work submitted must be your own.** As a rule of thumb, **you must do your own typing**. If it is not from the book or class webpage and you did not type it, it is plagiarism. For the first incident, your grade will be a 0 for the assignment (even for cases where you typed the program but others submitted it as their own). For the second incident of cheating or plagiarism, your grade will be a 0 for the homework component of the grade (30% of your overall grade). For the third incident, you will fail the class. We report all incidents to the Office of Student Affairs.
*   Learning programming is like learning a foreign language: you will learn more (with less work) if you practice every day. Some of the programs below are easy; some will take more time. Set aside a block of time every day to work on programming. If you complete the program for that day, go on to the next with your remaining time.
    

* * *

Submit the following programs via [Gradescope:](http://gradescope.com)

* * *

01.  **Due Date: 7 June** **Think CS: [Chapters 1](https://interactivepython.org/runestone/static/thinkcspy/GeneralIntro/toctree.html) & [2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html)**  

        Write a program that prints "Hello, World!" to the screen.

        _Hint: See [Lab 1](lab1.html)._

02.  **Due Date: 7 June** **Think CS: [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [4](https://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)**  
    
        Write a program that draws an octagon (8-sided polygon).  

        _Note: Choose a name for your file that is **not** turtle.py. When executing the "import turtle" statement, the computer first looks in the folder where the file is saved for the turtle module and then in the libraries (and other places on the path). So, it thinks the module is itself, causing all kinds of errors. To avoid this, name your program something like "myTurtle.py" or "program2.py"._

        _Hint: See [Lab 1](lab1.html)._
    
03.  **Due Date: 7 June** **Think CS: [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [4](https://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)**  
    
        Write a program that implements the [pseudocode](http://en.wikipedia.org/wiki/Pseudocode) ("informal high-level description of the operating principle of a computer program or other algorithm") below:

            Repeat 45 times:
                Walk forward 100 steps
                Turn right 92 degrees
                Walk forward 10 steps
                Turn right 92 degrees

        Your output should look similar to:  
        ![](flower.png)
04.  **Due Date: 7 June** **Think CS: [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [4](https://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)**  

        Write a program that will print the Hunter College motto ("Mihi cura futuri" which translates to: "The care of the future is mine") 15 times.

        The output of your program should be:

            Mihi cura futuri
            Mihi cura futuri
            Mihi cura futuri
            Mihi cura futuri
            Mihi cura futuri
            Mihi cura futuri
            Mihi cura futuri
            Mihi cura futuri
            Mihi cura futuri
            Mihi cura futuri
            Mihi cura futuri
            Mihi cura futuri
            Mihi cura futuri
            Mihi cura futuri
            Mihi cura futuri
    
05.  **Due Date: 7 June** **Think CS: [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [4](https://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)**  
    
        Write a program that draws a purple decagon (10-sided polygon) with turtle stamped at each corner.
    
        Your output should look similar to:  
        ![](stampedDecagon.png)
    
        _Hint: See Lecture 1._  

06.  **Due Date: 7 June** **Think CS: [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [4](https://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)**  
    
        Write a Python program that prompts the user for a message, and then prints the message, the message in upper case letters, and the message in lower case letters.
    
        A sample run of your program should look like:
    
            Enter a message:  Mihi cura futuri
            Mihi cura futuri
            MIHI CURA FUTURI
            mihi cura futuri
    
        Another run:

            Enter a message:  I love Python!
            I love Python!
            I LOVE PYTHON!
            i love python!  

07.  **Due Date: 7 June** **Think CS: [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [9](http://interactivepython.org/runestone/static/thinkcspy/Strings/toctree.html)**  
    
        Write a program that prompts the user to enter a phrase and then prints out the ASCII code of each character in the phrase.
    
        A sample run of your program should look like:
    
            Enter a phrase:  I love Python!
            In ASCII: 
            73
            32
            108
            111
            118
            101
            32
            80
            121
            116
            104
            111
            110
            33
    
        _Hint: If c is a character, ord(c) returns its ASCII code. For example, if c is 'I', then ord(c) returns 73. See [Lab 2](lab2.html)._  
    
08.  **Due Date: 7 June** **Think CS: [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [9](http://interactivepython.org/runestone/static/thinkcspy/Strings/toctree.html)**  
    
        Write a program that prompts the user for a DNA string, and then prints the length and GC-content (percent of the string that is C or G, written as a decimal).
    
        A sample run of your program should look like:

            Enter a DNA string:  ACGCCCGGGATG
            Length is 12
            GC-content is 0.75

        _Hint: See [Lab 2](lab2.html)._  
    
09.  **Due Date: 7 June** **Think CS: [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [9](http://interactivepython.org/runestone/static/thinkcspy/Strings/toctree.html)**  
    
        Write a program that prompts the user to enter a word and then prints out the word with each letter **shifted right** by 2. That is, 'a' becomes 'c', 'b' becomes 'd', ... 'x' becomes 'z', and 'y' becomes 'a'.

        Assume that all inputted words are in lower case letters: 'a',...,'z'.

        A sample run of your program should look like:

            Enter a word: hello 
            Your word in code is: 
            jgnnq

        _Hint: See the example programs from Lecture 2._ . 
    
10.  **Due Date: 7 June** **Think CS: [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [9](http://interactivepython.org/runestone/static/thinkcspy/Strings/toctree.html)**  

        Write a program that implements the pseudocode below:

            For i = 10, 20, 30, ..., 100:
                     Walk forward i steps
                     Turn left 94 degrees

         Your output should look similar to:  
         ![](spiral10.png)

        _Hint: See [Lab 2](lab2.html)._  
   
11.  **Due Date: 11 June** **Think CS: [Chapters 4](https://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html) & [9](http://interactivepython.org/runestone/static/thinkcspy/Strings/toctree.html)**  
    
        Write a program that asks the user for a message and then prints the message out, one character per line, in reverse order.

        A sample run of your program should look like:

            Enter a message:  I love Python!
            !
            n
            o
            h
            t
            y
            P

            e
            v
            o
            l

            I

        _Hint: See [Lab 2](lab2.html) or Lecture 2 notes._  

12.  **Due Date: 11 June** **Think CS: [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [4](http://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)**  
    
        Modify the program from [Lab 3](lab3.html) to show the shades of green.

        Your output should look similar to:  
        ![](shadesOfGreen.png)  
    
13.  **Due Date: 11 June** **Think CS: [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [4](http://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)**  
    
        Write a program that asks the user for the hexcode of a color and then displays a turtle that color.

        A sample run of your program should look like:

            Enter a hex string:  #A922A9

        and the output should look similar to:  
        ![](../f17/purplyTurtle.png)

        _Hint: See [Section 4.3](http://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/InstancesAHerdofTurtles.html) for setting the background color and [Lab 3](lab3.html) for colors._  
    
14.  **Due Date: 11 June** **Think CS: [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [4](https://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)**  
    
        Write a program that asks the user for a name of an image .png file and the name of an output file. Your program should create a new image that has only the green channel of the original image.

        A sample run of your program should look like:

            Enter name of the input file:  csBridge.png
            Enter name of the output file:  greenH.png

        Sample input and resulting output files:

        ![](../f17/csBridge.png) ![](greenH.png)

        Note: before submitting your program for grading, remove the commands that show the image (i.e. the ones that pop up the graphics window with the image). The program is graded on a server on the cloud and does not have a graphics window, so, the plt.show() commands will give an error. Instead, the files your program produces are compared pixel-by-pixel to the answer to check for correctness.  
    
15.  **Due Date: 11 June** **Think CS: [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [4](http://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)**  
    
        Write a program that implements the pseudcode below. Your program should ask the user for a binary number and print out the corresponding decimal number.

        Ask user for input, and store in the string, binString.  
        
            Set decNum = 0.
            For each c in binString,
            Set n to be int(c)
            Double decNum and add n to it (decNum = 2 * decNum + n)
            Print decNum

        A sample run of the program:

            Enter binary number: 10
            Your number in decimal is 2

        And another sample run of the program:

            Enter binary number: 1111
            Your number in decimal is 15

        Note: here's a quick [review](https://www.mathsisfun.com/binary-number-system.html) of binary numbers.  
    
16.  **Due Date: 14 June** **Reading: Think CS: [Section 2.7](http://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/OperatorsandOperands.html)**  

        Write a program that converts kilometers to miles. Your program should prompt the user for the number of kilometers and then print out the number of miles.

        A useful formula: _miles = 0.621371* kilometers_.

        See [Lab 4](lab4.html) for designing Input-Process-Output programs.  
    
17.  **Due Date: 14 June** **Reading: Think CS: [Section 2.7](http://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/OperatorsandOperands.html) & [4](http://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)**  
    
        Write a program that implements the pseudocode below:

        1\.  Ask the user for the number of hours until the weekend.
        2\.  Print out the days until the weekend (days = hours // 24)
        3\.  Print out the leftover hours (leftover = hours % 24)

        A sample run of your program should look like:

            Enter number of hours:  27
            Days: 1
            Hours: 3

        and another sample run:

            Enter number of hours:  52
            Days: 2
            Hours: 4

        _Hint: See [Section 2.7](http://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/OperatorsandOperands.html)._  
    
18.  **Due Date: 14 June** **Reading: Think CS: [Chapters 4](http://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html) & [7](http://interactivepython.org/runestone/static/thinkcspy/Selection/toctree.html)**  

        Write a program that asks the user for 5 whole (integer) numbers. For each number, turn the turtle left the degrees entered and then the turtle should move forward 100.

        A sample run of your program should look like:

            Enter a number: 270
            Enter a number: 100
            Enter a number: 190
            Enter a number: 200
            Enter a number: 80

        and the output should look similar to:  
        ![](5turns.png)  
    
19.  **Due Date: 14 June** **Reading: Think CS: [Chapters 4](http://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html) & [7](http://interactivepython.org/runestone/static/thinkcspy/Selection/toctree.html)**  
    
        Modify the flood map of NYC from [Lab 4](lab4.html) to color the region of the map with elevation greater than 6 feet and less than or equal 20 feet above sea level the color grey (50% red, 50% green, and 50% blue).

        Your resulting map should look like:

        ![](../f17/floodMap2.png)

        and be saved to a file called floodMap.png.

        Note: before submitting your program for grading, remove the commands that show the image (i.e. the ones that pop up the graphics window with the image). The program is graded on a server on the cloud and does not have a graphics window, so, the plt.show() commands will give an error. Instead, the files your program produces are compared pixel-by-pixel to the answer to check for correctness.  
    
20.  **Due Date: 14 June** **Reading: [Think CS: Section 8.10](http://interactivepython.org/runestone/static/thinkcspy/MoreAboutIteration/2DimensionalIterationImageProcessing.html)**  
    
        Modify the map-mapking program from [Lab 4](lab4.html) to create a map that outlines the coastline. Your program should create a new image, called coast.png with the pixels colored as follows:

        *   If the elevation is less than or equal to 0, color the pixel 50% blue (and 0% red and 0% green).
        *   If the elevation is exactly 1, color the pixel 75% red, 75% green, and 75% blue.
        *   Otherwise, the pixel should be colored 50% red, 50% green, and 50% blue.

        Your resulting map should look like:

        ![](coast.png)

        and be saved to a file called coast.png.

        Note: before submitting your program for grading, remove the commands that show the image (i.e. the ones that pop up the graphics window with the image). The program is graded on a server on the cloud and does not have a graphics window, so, the plt.show() commands will give an error. Instead, the files your program produces are compared pixel-by-pixel to the answer to check for correctness.  
    
21.  **Due Date: 14 June** **Reading: Think CS: [Chapter 7](http://interactivepython.org/runestone/static/thinkcspy/Selection/toctree.html)**  
    
        Write a program that asks the user for the name of a png file and print the number of pixels that are nearly white (the fraction of red, the fraction of green, and the fraction of blue are all above 0.75).

        For example, if your file was of the snow pack in the Sierra Nevada mountains in California in February 2014:

        ![](../f17/CaliforniaDrought_02232014_md.png)

        then a sample run would be:

            Enter file name:  caDrought2014.png
            Snow count is 38010

        Note: for this program, you only need to compute the snow count. Showing the image will confuse the grading script, since it's only expecting the snow count.

        _Hint: See [Lab 5](lab5.html)_.  
    
22.  **Due Date: 14 June** **Reading: [Burch's Logic & Circuits](http://www.toves.org/books/logic/)**  
    
        Write a logical epxression that is equivalent to the circuit that computes the majority of 3 inputs, called in1, in2, in3:

        *   If two or more of the inputs are True, then your expression should evaluate to True.
        *   Otherwise (two or more of the inputs are False), then your expression should evaluate to False.

        ![](../f17/maj7.png)

        Save your expression to a text file. See [Lab 5](lab5.html) for the format for submitting logical expressions to Gradescope.
    
23.  **Due Date: 14 June** **Reading: [Burch's Logic & Circuits](http://www.toves.org/books/logic/)**  
        Build a circuit that has the same behavior as a nor gate (i.e. for the same inputs, gives identical output) using only and, or, and not gates.

        ![](norGate.png)

        Save your expression to a text file. See [Lab 5](lab5.html) for the format for submitting logical expressions to Gradescope.  
    
24.  **Due Date: 14 June** **Reading: Think CS: [Chapters 2](http://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [4](http://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)**  
    
        The program [turtleString.py](../f17/turtleString.py) takes a string as input and uses that string to control what the turtle draws on the screen (inspired by [code.org's graph paper programming](https://code.org/curriculum/course2/1/Teacher)). Currently, the program processes the following commands:

        *   'F': moves the turtle forward 50 steps
        *   'L': turns the turtle 90 degrees to the left
        *   'R': turns the turtle 90 degrees to the right
        *   '^': lifts the pen
        *   'v': lowers the pen

        For example, if the user enters the string "FLFLFLFL^FFFvFLFLFLFL", the turtle would move forward and then turn left. It repeats this 4 times, drawing a square. Next, it lifts the pen and move forward 3, puts the pen back down and draw another square.

        Modify this program to allow the user also to specify with the following symbols:

        *   'B': moves the turtle backwards 50 steps
        *   'S': makes the turtle stamp
        *   'l': turns the turle 45 degrees to the left
        *   'r': turns the turtle 45 degrees to the right
        *   'p': change the pen color to purple

        _Hint: See Lecture 4 notes._ . 
    
25.  **Due Date: 14 June** **Think CS: [Chapter 4](https://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html) & [Section 7.4](http://interactivepython.org/runestone/static/thinkcspy/Selection/ConditionalExecutionBinarySelection.html)**
    
        Write a program that uses the turtle package to implement the following pseudocode:

        1\.  Ask the user for a whole number.  
        2\.  If that number is even, your turtle should draw a blue line 
            towards the left hand side of the screen. 
        3\.  If that number is odd, your turtle should draw a red line 
            towards the right hand side of the screen.

        A sample run of your program should look like:

            Enter a whole number: 2

        and the output should look similar to:  
        ![](leftTurtle.png)

        Another run:

            Enter a whole number: -1

        and the output should look similar to:  
        ![](rightTurtle.png)  

        _Hint: See [Section 7.4](http://interactivepython.org/runestone/static/thinkcspy/Selection/ConditionalExecutionBinarySelection.html) of the Python textbook and Lecture 4 notes._  


_(This file was last modified on 4 June 2018.)_
