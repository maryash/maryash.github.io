---
layout: myDefault 
title: LAB 13  
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
  
---

LAB 13  

---  

Software tools needed: web browser and the C++ compiler, gcc and a graphical editor, such as gEdit.

### In-class Quiz

During lab, there is a [quiz](quizzes.html). The password to access the quiz will be given during lab. To complete the quiz, log on to Blackboard (see [Lab 1](lab1.html) for details on using Blackboard).

### Variables in C++

In C++ (and C, Java and many other languages), you must first state (or 'declare') a variable's name and its type before using. For example,

	int num;

declares a variable, called num of type int (integer or whole number). If you do not request the space in advance in C++, you will get an error. This requirement (as well as the "typing" of variables) is to avoid errors where misspellings access the wrong variable and are never caught. It is also makes the underlying design of the compiler (the program that converts your program to an executable file) simpler.

There are many types of variables availabe in C++. Here are a few that we will use:

*   `int`: The most common type used for storing whole numbers.
*   `float`: Similar to float in Python, this type holds real numbers.
*   `bool`: Stands for 'Boolean' and holds a value of either true or false.
*   `char`: To hold a single character value. 

Note: we won't discuss strings in C++, but see the reading if you're interested (will be covered in detail in CSCI 135/156).  Here is a [chart](https://www.tutorialspoint.com/cplusplus/cpp_variable_types.htm) with a few more common types.

### Decisions in C++

As with Python, we can make decisions that take different branches through the code. The basic structure is:

	if (condition)
	{
	  ...
	}
	else
	{
	  ...
	}

The syntax of Python and C++ are very similar, but there's a few differences to keep in mind when translating from Python to C++.

*   The test or condition must be in parenthesis (these were optional in Python).
*   There is no colon (`:`) at the end of the lines with the if and the else.
*   Instead of indenting, C++ uses the curly brackets (`{` and `}`) to indicate blocks of code. If you only have a single command, you can leave off the brackets.
*   Similarly, most commands need to end with a semi-colon (`;`). This is a bit of annoyance, but on the plus side, we can put multiple commands on a single line (instead of worrying about spacing and indentng).
*   There is no `elif` in C++, instead you would write `else if`.

Here's a sample program. Read through it first, and guess what it does:

	//Name:  CSci 127 Teaching Staff
	//Date:  November 2017
	//A program demonstrating if-else statements in C++
	#include <iostream>
	using namespace std;

	int main() 
	{
	  int num;
	  cout << "Hello!";
	  cout << "Enter a number: ";
	  cin >> num;
	  if (num % 2 == 0)
	  {
	    cout << "Even number!\n";
	  }
	  else
	  {
	    cout << "Odd number\n";
	  }
	  return 0;
	}

Let's look in more depth at the code:

We start by greeting the user and reading in a number:
    
	int num;
	cout << "Hello!";
	cout << "Enter a number: ";
	cin >> num;
    
Since we declared the type to be int, when we read in the number, we do not have to cast it to an integer. Instead, it is converted automatically to be a whole number.
    
Much of the arithmetic carries over from Python. The code above uses the modulo, or remainder, operator to test if the number entered is even or odd and prints a message accordingly.
    
	if (num % 2 == 0)
	{
	    cout << "Even number!\n";
	}
	else
	{
	    cout << "Odd number\n";
	}
    
Note that C++ uses the curly brackets for blocks of code, but that it is 'good programming style' to indent your code to make it readable. As a rule of thumb, if you would be required to indent in Python, you should indent in C++ (not required for the code to run, but 'good style').

How would you modify this program to print out a different message based on the time of the day? For example, if the user entered the hour (in 24-hour time), you should print out "Good Morning" if it before 12, "Good Afternoon" for 12 until 17, and "Good Evening " otherwise. See [Programming Problem List](assignments.html).

### Indefinite Loops in C++

Now that we have discussed conditionals and definite loops, we can introduce indefinite loops. They follow a similar format to those in Python:

	while (...condition...)
	{
	  command1;
	  command2;
	  ...
	}

Again, we do not have the colon (`:`) at the end of the line with while, but we do end individual commands with a (`;`).

Take the Python code from [Lab 10](lab_10.html) that asks the user to enter their age (and continues checking until they enter a non-negative number):  

	# errors.py is based on dateconvert2.py from Chapter 5 of the Zelle textbook
	# Converts day month and year numbers into two date formats

	def main():
	    # get the day month and year
	    day, month, year = eval(input("Please enter day, month, and year numbers: "))

	    date1 = str(month)+"/"+str(day)+"/"+str(year)

	    months = ["January", "February", "March", "April", 
		      "May", "June", "July", "August", 
		      "September", "October", "November", "December"]
	    monthStr = months[-1]
	    date2 = monthStr+" " + str(day) + ", " + str(year)

	    print("The date is", date1, "or", date2+".")

	main()

and translate it into C++. An easy way to approach this is to start with the C++ program above that demonstrates if statements and modify it to handle tbe indefinite loop for checking ages. See [Programming Problem List](assignments.html).

### What's Next?

If you finish the lab early, now is a great time to get a head start on the programming problems due early next week. There's instructors to help you, and you already have Python up and running. The [Programming Problem List](ps.html) has problem descriptions, suggested reading, and due dates next to each problem.
