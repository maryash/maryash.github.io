---
layout: myDefault 
title: CSCI 127 ASSIGNMENTS 
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
  
[<span style="font-family:Arial; font-size:23.5px">CSCI 127 &nbsp; Introduction to Computer Science</span><br/>
<span style="line-height:0.1; font-family:Arial; font-size:24px">Hunter College &nbsp; City University of New York</span>](2019_summer.html)    
  
---  
	

  
## Programming Problem List  

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

01.  **Due Date: 6 June** &nbsp; &nbsp; **Reading: Think CS [Chapters 1](https://interactivepython.org/runestone/static/thinkcspy/GeneralIntro/toctree.html) & [2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html)**  

        Write a program that prints "Hello, World!" to the screen.

        _Hint: See [Lab 1](lab_01.html)._

02.  **Due Date: 6 June** &nbsp; &nbsp; **Reading: Think CS [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [4](https://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)**  
    
        Write a program that draws an octagon (8-sided polygon).  

        _Note: Choose a name for your file that is **not** turtle.py. When executing the "import turtle" statement, the computer first looks in the folder where the file is saved for the turtle module and then in the libraries (and other places on the path). So, it thinks the module is itself, causing all kinds of errors. To avoid this, name your program something like "myTurtle.py" or "program2.py"._

        _Hint: See [Lab 1](lab_01.html)._
    
03.  **Due Date: 6 June** &nbsp; &nbsp; **Reading: Think CS [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [4](https://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)**  
    
        Write a program that implements the [pseudocode](http://en.wikipedia.org/wiki/Pseudocode) ("informal high-level description of the operating principle of a computer program or other algorithm") below:

            Repeat 45 times:
                Walk forward 100 steps
                Turn right 92 degrees
                Walk forward 10 steps
                Turn right 92 degrees

        Your output should look similar to:  
        ![](flower.png)  
  
04.  **Due Date: 6 June** &nbsp; &nbsp; **Reading: Think CS [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [4](https://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)**  

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
    
05.  **Due Date: 6 June** &nbsp; &nbsp; **Reading: Think CS [Chapters 4](https://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)
Copy the program from [Section 4.3](http://interactivepython.org/courselib/static/thinkcspy/PythonTurtle/InstancesAHerdofTurtles.html) into a file on your computer and modify the program (with turtles alex and tess) to have a purple background color and have tess draw white lines:
![](https://stjohn.github.io/teaching/csci127/s19/purpleBG.png)

06.  **Due Date: 6 June** &nbsp; &nbsp; **Reading: Think CS: [Chapter 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) and and [Section 4.7](https://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)
Write a program that prints out the numbers from 0 to 14.

The output of your program should be:

      0
      1
      2
      3
      4
      5
      6
      7
      8
      9
      10
      11
      12
      13
      14
            
_Hint: Use a loop and print out the index or loop variable._

<!---

07.  **Due Date: 13 June** &nbsp; &nbsp; **Reading: Think CS [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [4](https://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)**  
    
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


08.  **Due Date: 13 June** &nbsp; &nbsp; **Reading: Think CS [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [9](http://interactivepython.org/runestone/static/thinkcspy/Strings/toctree.html)**  
    
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
    
        _Hint: If c is a character, ord(c) returns its ASCII code. For example, if c is 'I', then ord(c) returns 73. See [Lab 2](lab_02.html)._  
  
09.  **Due Date: 13 June** &nbsp; &nbsp; **Reading: Think CS [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [9](http://interactivepython.org/runestone/static/thinkcspy/Strings/toctree.html)**  
 
![](https://stjohn.github.io/teaching/csci127/f18/ciphrdsk.gif)
(The cipher disk above shifts 'A' to 'N', 'B' to 'O', ... 'Z' to 'M', or a shift of 13. From secretcodebreaker.com.)

Write a program that prompts the user to enter a word and then prints out the word with each letter shifted right by 13. That is, 'a' becomes 'n', 'b' becomes 'o', ... 'y' becomes 'l', and 'z' becomes 'm'.

Assume that all inputted words are in lower case letters: 'a',...,'z'.

A sample run of your program should look like:

            Enter a word: zebra
            Your word in code is:
            mroen
            
        _Hint: See the example programs from Lecture 2._  
  
10.  **Due Date: 13 June** &nbsp; &nbsp; **Reading: Think CS [Chapters 2](https://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [4](https://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)**  
Write a program that implements the pseudocode below:

            For i = 5, 10, 15, 20, 25, ... ,300:
                Walk forward i steps
                Turn left 91 degrees
                
Your output should look similar to: 
![](https://stjohn.github.io/teaching/csci127/s19/twistingSquare.png)
        _Hint: See examples of range(start,stop,step) in Lecture 2 notes._  

--->
