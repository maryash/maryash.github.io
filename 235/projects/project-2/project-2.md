---  
layout: myDefault
title: PROJECT 2
---  

# Project 2: Here In My Garage (Arraybag)

<img src = "supermanAndHisCar.png" height = 65% width = 65%></img>

In this project you will reimplement the `Garage` class from Project 1 to incorporate the functionality of the Arraybag ADT that you learned about in class. In order to successfully complete this project, you **must** understand the prerequisite material from Project 1, the concept of abstract data types (ADTs), the Arraybag ADT, the concept of a template class, and how to overload an operator.

---

### Some additional resources

- Abstract Data Types:    
    [Geeks for Geeks](https://www.geeksforgeeks.org/abstract-data-types/)  
    [Neso Academy](https://youtu.be/ZniDyolzrBw)

- Template Classes:  
    [CPP Manual](http://www.cplusplus.com/doc/oldtutorial/templates/)  
    [Geeks for Geeks](https://www.geeksforgeeks.org/templates-cpp/)  
    [Tutorials Point](https://www.tutorialspoint.com/cplusplus/cpp_templates.htm)

- Operator Overloading:  
    [CPP Manual](https://en.cppreference.com/w/cpp/language/operators)  
    [Geeks for Geeks](https://www.geeksforgeeks.org/operator-overloading-c/)  
    [Programiz](https://www.programiz.com/cpp-programming/operator-overloading)

### Implementation:

**Work incrementally!** Work through the tasks sequentially (implement and test). Only move on to a task when you are positive that the previous one has been completed correctly. Remember that the names of function prototypes and member variables must exactly match those declared in the respective header file when implementing a class. 

---

### Required Files
[starter_code.zip](starter_code.zip){:target="_blank"}

---
## Task: About the New Garage
You are be given 3 files. The first file, `Vehicle.hpp`, contains the declaration and implementation of the `Vehicle` class and that of its children, `Motorcycle`, `Car`, `Truck`, and `Bus`. The second file, `Object.hpp`, contains the declaration and implementation of the `Object` class and that of its children, `Toolbox`, `GardenHose`, and `Lawnmower`. Finally, you are also be given `Garage.hpp`. Your objective is to implement the `Garage` class by creating and properly writing `Garage.cpp`.  
  
The new version of `Garage` is an `Arraybag` whose functionality has been restricted to work with the test classes that we have provided (`Vehicle` and its children, `Object` and its children). Specifically, the new `Garage` can only hold objects for which the `==`, `!=`, and `=` operators have semantic meaning. Please read the comments in `Garage.hpp` for information regarding how to implement each method of `Garage`. 

**Don't cheat** 
This project is more open ended than the ones that preceded it; so it is exceedingly easy to tell when students use the same logic in their answers. 

---
### Submission:
**You will submit:**  
`Garage.cpp`  

Your project must be submitted on Gradescope. Although Gradescope allows multiple submissions, it is not a platform for testing and/or debugging and it should not be used for that. You MUST test and debug your program locally. Before submitting to Gradescope you MUST ensure that your program compiles (with g++) and runs correctly on the Linux machines in the labs at Hunter (see detailed instructions on how to upload, compile and run your files in the “Programming Rules” document). That is your baseline, if it runs correctly there it will run correctly on Gradescope, and if it does not, you will have the necessary feedback (compiler error messages, debugger or program output) to guide you in debugging, which you don’t have through Gradescope. “But it ran on my machine!” is not a valid argument for a submission that does not compile. Once you have done all the above you submit it to Gradescope.

---

### Testing:

**How to compile:**

```
g++ <test main file> -std=c++17
```

### Substitute \<test main file> with the filename that contains your main function

<!-- ![test_pic](./test_pic.png) -->

You must always implement and test you programs **INCREMENTALLY!!!**
What does this mean? Implement and test one method at a time.
**For each class**
- Implement one function/method and test it thoroughly (multiple test cases + edge cases if applicable).
- Implement the next function/method and test in the same fashion.
**How do you do this?** Write your own `main()` function to test your classes. In this course you will never submit your test program, but you must always write one to test your classes. Choose the order in which you implement your methods so that you can test incrementally: i.e. implement mutator functions before accessor functions. Sometimes functions depend on one another. If you need to use a function you have not yet implemented, you can use stubs: a dummy implementation that always returns a single value for testing Don’t forget to go back and implement the stub!!! If you put the word STUB in a comment, some editors will make it more visible.

### Grading Rubrics
**Correctness 80%** (distributed across unit testing of your submission)  
**Documentation 10%**  
**Style and Design 10%** (proper naming, modularity, and organization)  

---

### Important
You must start working on the projects as soon as they are assigned to detect any problems with submitting your code and to address them with us **well before** the deadline so that we have time to get back to you **before** the deadline. This means that you must submit and resubmit your project code **early** and **often** in order to resolve any issues that might come up **before** the project deadline.  
**There will be no negotiation about project grades after the submission deadline.**
  
  
  
  
  
