---
layout: myDefault 
title: LAB 7  
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
<span style="line-height:0.1; font-family:Arial; font-size:24px">Hunter College &nbsp; City University of New York</span>](2018_summer.html)  
  
---

LAB 7  
---  

Today's lab will focus on open data, using main(), and using Python from the command line.

Software tools needed: web browser and Python IDLE programming environment with the pandas and matplotlib packages installed.

### In-class Quiz

During lab, there is a [quiz](quizzes.html). The password to access the quiz will be given during lab. To complete the quiz, log on to Blackboard (see [Lab 1](lab_01.html) for details on using Blackboard).

### Using Python, Gradescope, and Blackboard

See [Lab 1](lab_01.html) for details on using Python, Gradescope, and Blackboard.

### Using NYC OpenData

Much of the data collected by city agencies is publicly available at [NYC Open Data](http://opendata.cityofnewyork.us). Let's use pandas to plot some data from NYC OpenData.

![](shelterTotal.png)  
(Totals for 2015-2016)

We'll start with data that has the daily number of families and individuals residing in the Department of Homeless Services (DHS) shelter system:

*   [https://data.cityofnewyork.us/Social-Services/DHS-Daily-Report/k46n-sa2m](https://data.cityofnewyork.us/Social-Services/DHS-Daily-Report/k46n-sa2m)

Click on the "Explore Data/View Data" button. To keep the data set from being very large (and avoid some missing values in 2014), we are going filter the data to be all counts after January 1, 2017. To do this:

*   Click on the "Filter" button.
*   On the menu that pops us, click on "Add a New Filter Condition".
*   Choose "Date of Census" but change the "is" to be "is after".
*   Click in the box below and a calendar will pop up. Highlight January 1, 2017.
*   Click the check box to the left of the data.
*   It will take a few seconds (it's a large file) but the rows on the left will be filtered to be all counts after January 1, 2017.

To download the file,

*   Click on the "Export" button.
*   Under "Download", choose "CSV".
*   The download will begin automatically (files are usually stored in "Downloads" folder).

Move your CSV file to the directory that you save your programs. Open with Excel (or your favorite spreadsheet program) to make sure it downloaded correctly. Look at the names of the columns since those will correspond to series we can plot.

Now, we can write a (short) program to display daily counts:

    import pandas as pd
    import matplotlib.pyplot as plt

    homeless = pd.read_csv("DHS_Daily_Report.csv")
    homeless.plot(x = "Date of Census", y = "Total Individuals in Shelter")
    plt.show()

Save your program and try on your dataset.

#### Challenges

*   What happens if you leave off the y = "Total Individuals in Shelter"?
*   Display a plot that shows the fraction of the total population that is familes, over time. Is it increasing or decreasing?
*   How can you save your plot to file? (Hint: See [Lab 6](lab_06.html).)

See the [Programming Problem List](assignments.html).

### `main()`

Python allows you to write programs as scripts: basically, a list of commands that are executed one after the other. You can also organize the programs in functions, which groups commands together that can be reused. Many programming languages (like C++ or Java) require that your programs be organized in functions.

To define function in Python, we use the def command, which has the basic form:  
  
    def myFunction(input1, input2, ...):
        command1
        command2 
        ...
  
Note that everything indented below the def line is considered part of the function. When you type the function name (followed by parenthesis), it calls (or "invokes") the function, which means it executes all the commands, one after another, that are part of the function.

Let's rewrite our first program, using functions. By tradition (and since it matches the naming protoccol of C & C++), we will call our function main() (see [Section 6.7: Using a Main Function](https://interactivepython.org/runestone/static/thinkcspy/Functions/mainfunction.html)):

    #Name:  your name here
    #Date:  October 2017
    #This program, uses functions, says hello to the world!

    def main():
        print("Hello, World!") 

    if __name__ == "__main__":
        main()

In Python, we have the option of running our programs as a standalone program, or included as module as part of another program. Since it's common to do either, we include the last two lines of the file, which say if the program is being run directly (which we can test to see if the variable `__name__` that is set by Python is `__main__`), then we call `main()`. If it's not, then the file is being included in something else, and leaves it to that program to call it.

Save your program and try running it in IDLE.

Now, at the prompt (the window with the lines beginning with >>>), type `main()`. This calls the function directly. Note that calling the function either way results in the same actions: the commands inside `main()` are executed.

When you have a running version, see the [Programming Problem List](assignments.html).

### Using Python from the Command Line Interface

In addition to IDLE (and other development environments with graphical interfaces), Python can also be used directly from the command line. In fact, this is what the grading scripts do to evaluate your programs, since Gradescope uses a server in the cloud and does not have a graphics window.

To start, we need a command line interface (aka a terminal window). To launch the terminal, click on the terminal window icon in the left menu, or go to search option in the upper left corner and type and then open terminal.

In [Lab 1](lab_01.html), we launched IDLE from the terminal by typing:

idle3

We can use Python in a similar fashion. In a terminal window, change directories to where you stored your hello program above (see [Lab 4](lab_04.html) for changing directories at the command line).

Let's run your hello program from the command line. If your program is called hello.py, you would type at the command line:

    python3 hello.py

Notice that the output goes directly to the terminal window. Try running other programs you have written from the command line.

### What's Next?

If you finish the lab early, now is a great time to get a head start on the programming problems due early next week. There's instructors to help you, and you already have Python up and running. The [Programming Problem List](assignments.html) has problem descriptions, suggested reading, and due dates next to each problem.
