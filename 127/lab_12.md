---
layout: myDefault
title: LAB 12
---

### [<span style="font-family:Arial">CSCI 127 &nbsp; Introduction to Computer Science</span>](../127_2018_summer.html)  
<span style="line-height:0.1; font-family:Arial; font-size:21.8px">Hunter College &nbsp; City University of New York</span> 

---  
  	
Today's lab will introduce C++.

Software tools needed: web browser and the C++ compiler, g++ and a graphical editor, such as gEdit.

### In-class Quiz

During lab, there is a [quiz](quizzes.html). The password to access the quiz will be given during lab. To complete the quiz, log on to Blackboard (see [Lab 1](lab1.html) for details on using Blackboard).

### Using gcc

We will be using the 'Gnu Compiler Collection' (aka 'Gnu C Compiler'), or gcc, for our C++ programs. Originally designed for C programs, it was extended to include C++ programs and is one of the most common compilers for C/C++. The command, [g++](https://gcc.gnu.org/onlinedocs/gcc/Invoking-G_002b_002b.html) calls gcc and automatically specifies the C++ library and treats all files as C++ (instead of the default as C files).

For C/C++ programs, we will do the following steps, at the command line:

*   gedit hello.cpp
    
      
    Opens the gEdit editor with the file hello.cpp
*   g++ hello.cpp -o hello
    
      
    Compiles hello.cpp and store the executable in the ouput file hello
*   ./hello
    
      
    Runs the executable file, hello

### Hello World

Let's write our first program that will say "Hello, World!". You can copy or type the program below into a editor window (either launch gEdit from the command line or open via the menu). Text after the '//' is a comment (just like the '#' in Python). You should keep the first 3 lines of comments for gradescope:

//Name:  Your name here
//Date:  November 2017
//My first program in C++

#include <iostream>  //The built-in library for input/output
using namespace std; //The names of standard definitions

int main ()          //C++ programs all have a main() function
{
  cout << "Hello, World!";  
                     //Print "Hello, World!" to the terminal
  return 0;          //Standard way to end function 
}

Let's go through line-by-line:

*   //Name:  Your name here
    //Date:  November 2017
    //My first program in C++
    
    These three lines are comments, containing information about the program.
*   #include <iostream>  //The built-in library for input/output
    using namespace std; //The names of standard definitions
    
    These two lines include commands that allow you to print to the screen and read input that the user has entered, using standard names and defintions. The #include statement is similar in functionality to the import statements in Python.
*   int main ()          //C++ programs all have a main() function
    
    Code in C++ programs occurs in functions. Each program is expected to have a main() function that is called (invoked) when the program is run. The int before the function name is what type of data is returned when the function ends. In this case, the function will return an int or integer value.
*   {
    
    C++ uses the curly brackets ('{' and '}') to indicate blocks of code, instead of indenting. Indenting code is considered good style, but you have more freedom to decide how much to indent versus Python. For function definitions and multiple lines of code in a block, the use of the brackets is required.
*     cout << "Hello, World!";  
                         //Print "Hello, World!" to the terminal
    
    cout << is used for printing to the terminal. Note that, as a general rule, command line in C++ ends in a semi-colon.
*     return 0;          //Standard way to end function 
    
    When this function ends, it returns the integer 0, a common value for a program ending normally.
*   }
    
    The closing bracket for the definition of the function, main(). All opening brackets must have a matching closing bracket.

Once you have it typed in, try compiling the program:

g++ hello.cpp -o hello

When it returns without an error, you can run it by typing:

./hello

When it compiles, and runs correctly (i.e. printing "Hello, World!" to the screen), see the [Programming Problem List](ps.html).

### Simple I/O & Variables in C++

Unlike Python, you must declare variables before using them. For example, if you want a variable to hold the year, you would first declare it (i.e. request space for it):

int year;

//Another C++ program, demonstrating variables
#include <iostream>
using namespace std;

int main () 
{
  int year;
  cout << "Enter a number: ";
  cin >> year;
  cout << "Hello" << year << "!!\\n\\n";
  return 0; 
}

For each variable, we need to specify what type of variable it is (whole number, real number, character, etc.) before we use it. For real numbers, we can use float, as in Python. We will introduce more data types next lab, but if you are curious, here is a [chart](https://www.tutorialspoint.com/cplusplus/cpp_variable_types.htm) of some common types. Our program above:

*   Declares the variable year to be a whole number (integer).
*   Asks the user for a number.
*   Reads in the number the user entered and stores it in year.
*   Prints out a messsage with that number.
*   Ends the function (returning 0).

To summarize: cin is for input to the program, and cout is output from the program.

How could you modify this program to ask the user for a real (floating-point number)? Most arithmetic works the same in C++ as it does in Python. With this in mind, modify the above program to convert kilometers to miles. (Hint: see the [Programming Problem List](ps.html).)

### Definite Loops in C++

C++ has for-loops that have are similar, but not identical to for-loops in Python. The basic format is:

int i;

for (i = 0; i < 10; i++)
{
   command1
   command2
   ...
}

For the loop above,

1.  The variable i first takes on the value 0.
2.  Next, check if the variable i < 10?
3.  If no, leave the loop.
4.  If yes, do the commands in the body of the loop.
5.  Add one to the variable i (abbreviated: i++).
6.  Go to #2.

Let's use a loop to write "Hello, World!" to the screen 10 times:

//Name:  Your name here
//Date:  November 2017
//Prints "Hello, World!" 10 times, using a loop

#include <iostream>            
using namespace std; 

int main ()          
{
  int i;   //The index variable for the loop
  
  //Loop will repeat 10 times:
  for (i = 0; i < 10; i++)
  {
    cout << "Hello, World!\\n";  
  }       
  return 0;          
}

Note that cout doesn't automatically put output on a newline, so, we need to include the new line character ("\\n") at the end of the line.

Follow the steps above to compile and run your program.

Next, modify the program so that it will print 10 times: the Hunter College motto ("Mihi cura futuri" which translates to: "The care of the future is mine") .

When it compiles, and runs correctly, see the [Programming Problem List](ps.html).

### Getting g++ on Your Machine

We are using the gcc compiler for the C/C++ programming languages, which is freely available. We include directions below for downloading on your machine:

*   **Linux**: To get the most up-to-date version, first type:
    
    sudo apt-get update
    
    to update the package list, and then
    
    sudo apt-get install g++
    
    to install g++ and associated libraries and packages. 
	    
    which g++ 
	    
    will show the location of the g++ program.  
	    
*   **Mac OSX**: The compiler comes with the Mac's XCode tools package. You can download XCode from the [Mac App Store](https://itunes.apple.com/us/app/xcode/id497799835?mt=12).
*   **Windows**: A popular distribution of gcc for Windows is [Minimalist GNU for Windows](http://www.mingw.org) (see [GNU List](https://gcc.gnu.org/install/binaries.html) for other distributions).
*   **On-line**: The on-line version used in lecture is [OnlineGDB](https://www.onlinegdb.com).

### What's Next?

If you finish the lab early, now is a great time to get a head start on the programming problems due early next week. There's instructors to help you, and you already have Python up and running. The [Programming Problem List](ps.html) has problem descriptions, suggested reading, and due dates next to each problem.
