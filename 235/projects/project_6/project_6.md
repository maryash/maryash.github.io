---
layout: myDefault
title: PROJECT 6
---

<center> <h1>Project 6: BST Traversal</h1> </center>

<p align="center"> <img src="images/bst.png" width="400"> </p> 


Your objective for this project is to implement inorder traversal, preorder traversal, and postorder traversal over the binary search tree class, `BST`, that is defined and implemented in the provided code. In order to successfully complete this project, you **must** understand the prerequisite material from the previous projects and you **must** know how these traversal algorithms work. If you are not absolutely comfortable with these topics, please seek help immediately: contact me or our UTA, Nigel.


#### Implementation
**Work incrementally!** Work through the tasks sequentially (implement and test). Only move on to a task when you are positive that the previous one has been completed correctly. Remember that the names of function prototypes and member variables must exactly match those declared in the respective header file when implementing a class.

### Task 
Modify each method of the `solutions` namespace in `Solutions.cpp` to complete the implementation of the required traversal algorithms. **In each of the traversal algorithms print every element on its own line**. Also, congratulations for making it to the end of the semester! I hope that you have learned a lot over the last 6 weeks and that you have done work that you are proud of. We are aware of how straining it can be to learn about and to work on technical material in a limited timeframe; so if you have made it this far, you should feel confident to consider yourself a budding computer scientist because we certainly do. Good luck on the final!


#### Testing
How to compile:
```
g++ <main file> -std=c++17
```
You must always implement and test you programs **INCREMENTALLY!!!**
What does this mean? Implement and test one method at a time.
**For each class**
* Implement one function/method and test it thoroughly (multiple test cases + edge cases if applicable).
* Implement the next function/method and test in the same fashion.
    **How do you do this?** Write your own `main()` function to test your classes. In this course you will never submit your test program, but you must always write one to test your classes. Choose the order in which you implement your methods so that you can test incrementally: i.e. implement mutator functions before accessor functions. Sometimes functions depend on one another. If you need to use a function you have not yet implemented, you can use stubs: a dummy implementation that always returns a single value for testing Don’t forget to go back and implement the stub!!! If you put the word STUB in a comment, some editors will make it more visible.

#### Grading Rubric
**Correctness 80%** (distributed across unit testing of your submission)
**Documentation 10%**
**Style and Design 10%** (proper naming, modularity, and organization)

**Important:** You must start working on the projects as soon as they are assigned to detect any problems with submitting your code and to address them with us **well before** the deadline so that we have time to get back to you **before** the deadline. This means that you must submit and resubmit your project code **early** and **often** in order to resolve any issues that might come up **before** the project deadline.
##### There will be no negotiation about project grades after the submission deadline. #####
  
#### Submission:
You will submit **the following files**:
`Solutions.cpp`

Your project must be submitted on Gradescope. Although Gradescope allows multiple submissions, it is not a platform for testing and/or debugging and it should not be used for that. You MUST test and debug your program locally. Before submitting to Gradescope you MUST ensure that your program compiles (with g++) and runs correctly on the Linux machines in the labs at Hunter (see detailed instructions on how to upload, compile and run your files in the “Programming Rules” document). That is your baseline, if it runs correctly there it will run correctly on Gradescope, and if it does not, you will have the necessary feedback (compiler error messages, debugger or program output) to guide you in debugging, which you don’t have through Gradescope. “But it ran on my machine!” is not a valid argument for a submission that does not compile. Once you have done all the above you submit it to Gradescope.