---
layout: myDefault
title: LAB 1
---
### [CSCI 12700 | Introduction to Computer Science](../summer2018.html)  
Hunter College City University of New York &nbsp;Summer 2018 

---
	
LAB 1
---

Today's lab will focus on using the gradescope & Blackboard systems and simple programs in Python.

Software tools needed: web browser and Python IDLE programming environment.

### Computers in CSCI 127 Lab

CSCi 127 has a laboratory, 1001E North, dedicated for its use. The room has a flexible set-up to encourage group work and laptop computers that can be checked out for use in the room only. When you enter the room, hand your Hunter ID to undergraduate teaching assistant in exchange for a laptop computer. At the end of lab, make sure to return your computer to its docking station so that it can be charged.

The laptops run Ubuntu Linux operating system. When you open the laptop, choose the "Computer Science Guest" account (the password is: 1001E!88). On the left hand side is a bar of icons, including icons for a browser (for accessing webpages) and the terminal window (for writing commands and launching programs).

When you launch the browser in the lab, you will see the standard HunterNet webpage. Fill in the form with your Hunter credentials (the same that you would use to access the wifi from your own computer or phone) to access the internet. If you get a message that you are not connected to the internet, click on the internet symbol (empty quarter circle) in the upper right corner of the toolbar. Hover over the "More Networks" and then click on "HunterNet". The wifi symbol will blink with concentric lines. When it stops blinking and becomes solid lines, an internet connection has been established and you can then reload the webpage to type in your Hunter credentials.

### Using Blackboard

This course will use the on-line Blackboard system for in-class quizzes and posting grades. Blackboard should be accessible through your CUNY First account (see Hunter [ICIT Blackboard page](http://www.hunter.cuny.edu/it/blackboard/blackboard-information-page) for directions on using the system and how to get help).

Quizzes are done via the Content menu (left hand side of Home screen). Your instructor will provide the password for the quiz.

**Chrome:** There were known bugs using the previous version of Blackboard with the Chrome browser. In particular, the Chrome browser often would freeze during quizzes. These have reportedly been fixed in the new version.

**Timing Out:** If the system times out and locks your attempt (happens rarely when the browser or PC crashes), contact the instructor so they can clear the attempt so you can try again.

### In-class Quiz

During lab, there is a quiz on the academic integrity policy of City University of New York. The password to access the quiz will be given during lab. To complete the quiz, log on to Blackboard.

### Using Python

We will be using the IDLE programming environment for Python, since it is very simple and comes with all distributions of Python (if you would prefer to use another programming environment, Spyder is loaded on the lab machines).

To launch IDLE:

*   Click the icon on the left for the terminal. It will launch a terminal window in which you can type commands.
*   In the terminal window, type:
    
	    idle3
    
    (followed by an enter/return).
*   A new window will launch for IDLE.
*   To see that it works, type at the IDLE prompt:
    
	    print("Hello, World!")
    

Instead of using the shell window (where we can try things immediately), let's use a text window, where we can save our program for later and submit it to Gradescope (this is the basis of the first program).

1.  First, open up a text window: on the menu bar, choose "File" and from that menu, choose "New File".
2.  In that window, type:
    
	    #Name:  ...your name here...
	    #Date: August 25, 2017
	    #This program prints: Hello, World!

	    print("Hello, World!")
    
3.  Save the program (using the "Save" under the "File" menu). When you save it, name it something that you will be remember for the future and end it in .py. For example, ps1.py. At the end of lab, save your programs to a USB drive, DropBox, or mail them to yourself.
4.  Run your program (using the "Run Module" from the "Run" menu).
5.  If it prints "Hello, World!" to the screen, then log into Gradescope (see notes below):
    *   On the left hand menu, choose "Assignments".
    *   From the list, choose "1. Hello, World!". In the file upload, drag over the .py file you just created and ran, and
    *   click "Submit".

### Using Gradescope

This course will use the on-line [gradescope](http://www.gradescope.com) system for submitting work electronically. An email invitation to the course was sent to your email address (we used the one saved for you on CUNYFirst as of Friday, 26 January).

*   Open your email and click the links to set up your account.
*   Once you have your account, click on the "Assignments" menu (left hand side of window), and then choose the assignment "1. Hello, World."
*   Drag and drop your program onto the submit box.
*   Each program can be submitted multiple times up to the deadline.

### More Python: Turtles

Now that you have just submitted your first program, let's try some other Python commands. Here's a quick demo (click the triangle to run the program):  

<iframe src="https://trinket.io/embed/python/22709f8349" width="80%" height="400" frameborder="0" marginwidth="0" marginheight="0" allowfullscreen=""></iframe> <br> 
  
Now, let's write the same program in IDLE:

1.  Open up a new file window in IDLE ("File > New File").
2.  Type (or copy) into your window:
    
	    import turtle
	    tia = turtle.Turtle()
	    for i in range(4):
		tia.forward(150)
		tia.right(90)
    
3.  Save your program ("File > Save").  
    _Note: Choose a name for your file that is **not** turtle.py. When executing the "import turtle" statement, the computer first looks in the folder where the file is saved for the turtle module and then in the libraries (and other places on the path). So, it thinks the module is itself, causing all kinds of errors. To avoid this, name your program something like "myTurtle.py" or "program2.py"._
4.  Run your program (using the "Run Module" from the "Run" menu).
5.  Change your program so that it draws a octagon (8-sided polygon).
6.  Test your program and modify until you have a octagon. When you do, add comments at the top of your program:
    
	    #Name:  ...your name here...
	    #Date: August 25, 2017
	    #This program draws a octagon.
    	
    
    Run your program after editing to make sure you do not have any typos.
7.  Log into Gradescope (see notes above). On the left hand menu, choose "Assignments". From the list, choose "2. Octagon". In the file upload, drag the .py file you just created and ran, and click "Submit".

A quick overview of the parts of your second program:

*   Lines that begin with # are ignored by Python-- they are comments for you to remember what you did and others to follow what's going on.
*   The line import turtle loads in the built-in turtle graphics drawing package. It's part of all versions of Python but, to keep programs small, is not included unless you explicitly import it. In addition to built-in packages, there are many others that have been written to make Python more useful. We will use both kinds as the semester progresses.
*   The line tia = turtle.Turtle() creates a turtle object called tia (you can call your turtles almost any combination of letters (and underscores and numbers)-- we used a name starting with "t" since turtle starts with "t").
*   The next line: for i in range(4): is the first part of a for-loop that will repeat the commands indented beneath it 4 times.
*   The turtle class has many functions that you can use for your turtle. The next two lines demonstrate two of them:
    *   tia.forward(150) moves tia forward 150 steps.
    *   tia.right(90) turns tia to the right 90 degrees.

### More Turtle Commands

To review, we introduced the turtle commands:

*   forward()
*   left()
*   right()

as well as importing the turtle package (import turtle) and creating ("instantiating") a turtle (thomasH = turtle.Turtle()).

There are many more turtles commands. Over the next couple of classes, we will use those in the [turtle chapter](http://interactivepython.org/courselib/static/thinkcspy/PythonTurtle/toctree.html) from the textbook. A [complete list of turtle commands](https://docs.python.org/3/library/turtle.html) is part of the Python 3 documentation.

### What's Next?

Since the lab computers are shared, student files are regularly removed from the computer. Any of your work that you would like to save, you should email to yourself, put in your dropbox, or save on a USB drive.

If you finish the lab early, now is a great time to get a head start on the programming problems due next week. There's instructors to help you, and you already have Python up and running. The [Programming Problem List](assignments.html) has problem descriptions, suggested reading, and due dates next to each problem.

### Using Python on Your Computer

The Python programming language and IDLE environment are freely available for many platforms from [python.org](http://www.python.org) or [Anaconda](https://www.continuum.io/downloads). For this class, we are using **Python 3**. Many features of the language (including the syntax of print statements) changed between the second and third version, so, you must use the Python 3 for submitting programs.

If you have a Linux machine and would like to match the environment on the lab machines, at a terminal window, type the following commands:

	 sudo apt-get update
	 sudo apt-get -y upgrade
	 sudo apt-get install python3 python3-pip idle3
	 pip3 install numpy pandas matplotlib scipy folium image 
	 sudo apt-get install spyder3

If you have a Mac or Windows computer, the easiest installation is [Anaconda](https://docs.continuum.io/anaconda/install/#detailed-installation-information). When given the choice, choose to "Install for me only" (this avoids some odd permission problems that occur when choosing the install for everyone).

Almost all the packages we will use are automatically included in the Anaconda default installation. The two that are not, image and folium, can be installed via pip (Python package manager). We won't need these immediately, so, you can wait on installing them. Here are the directions:

*   Check if your machine has pip installed already, by typing:
    
	    which pip
    
    at the terminal window.
*   If it prints a line that ends with pip, then it's already on your machine.
*   If it printed nothing, then you need to add pip your machine. On the Macs, Anaconda installs a program called, easy_install, which we'll use to get pip by typing at the terminal:
    
	    easy_install pip

	And then add the packages:

	    pip install image
	    pip install folium
    
*   For Windows, it's very similar ([more details](https://packaging.python.org/tutorials/installing-packages/)).

There are many free on-line versions that you could use via a browser, such as [pythonanywhere](http://pythonanywhere.com).
