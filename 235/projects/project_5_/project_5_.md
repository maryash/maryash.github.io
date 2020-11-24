---
layout: myDefault
title: PROJECT 5
---

## Project 5 &nbsp; How many swaps does it take to get to the end of a sort?

Your objective for this project is to implement four canonical sorting algorithms within the `Sorter` class. In order to successfully complete this project, you **must** understand the prerequisite material from all previous projects, and you **must** understand the following sorting algorithms: Selection, Insertion, Quicksort, and Merge Sort.


### Some additional resources
- Sorting:
    [Geeks for Geeks](https://www.geeksforgeeks.org/sorting-algorithms/)  
    [CMU](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Sorting%20Algorithms/sorting.html)  
    [EducationAboutStuff](https://youtu.be/8BI2MNnwrKI)

### Implementation

**Work incrementally!** Work through the tasks sequentially (implement and test). Only move on to a task when you are positive that the previous one has been completed correctly. Remember that the names of function prototypes and member variables must exactly match those declared in the respective header file when implementing a class.

---
### Starter Code
[Sorter.cpp](Sorter.cpp) 
[Sorter.hpp](Sorter.hpp)

## Task 0 &nbsp; Getting Started 

Please thoroughly read and experiment with the code base given to you in the Starter Code folder. Create a main file and figure out how to instantiate `Sorter` objects. Read the `runSorts()` function to see how everything will come together once you have finished this project. You will only be able to test your project as you work if you understand how to use what has been given to you. 

---

## Task 1 &nbsp; There Is No Better Time Than Now To Sort... 

Modify the `Sorter` class to implement the following sorting algorithms: Selection, Insertion, Merge, and Quicksort sort. I know this is probably your first time seeing Comparators; for our purposes they are simple objects that evaluate to a boolean value. For example, if we have `comp <- std::less<int>()`, then `comp(0, 1)` will evaluate to true. Please reread the implementation of `getPosOfMinOrMax()` to see how we use comparators. Do not be afraid to ask questions if that is not clear.

*Hints*: use `getPosOfMinOrMax()` within `selectionSort()`, we do not care which element you choose as the pivot for `quickSort`, and comment `runSorts()` out of the .hpp and .cpp as you do this task.

---
## Task 2 &nbsp; Tootsie Slide

Modify `selectionSort()`, `insertionSort()`, and `quickSort()` to increment their respective private count variables when a swap has taken place. Also, modify `mergeSort()` to increment its private count variable when a comparison between elements within the array it is processing is made. Once this has been completed `runSorts()` should not crash your test file and should give you some deterministic output.

![](tootsieSlide.gif)

Here is an example of what the output of `runSorts()` should look like if you finished all tasks correctly:

```
Sorter abc(RANDOM, 10);
def.runSorts(INCREASING);

******** Selection Sort ********
Original Array:
12 39 2 58 74 26 81 63 36 62

Sorted Array:
2 12 26 36 39 58 62 63 74 81

Number of swaps: 7
********************************


******** Insertion Sort ********
Original Array:
91 24 29 37 77 19 54 11 16 75

Sorted Array:
11 16 19 24 29 37 54 75 77 91

Number of swaps: 27
********************************


********** Merge Sort **********
Original Array:
37 9 75 60 1 78 89 88 6 73

Sorted Array:
1 6 9 37 60 73 75 78 88 89

Number of comparisons: 34
********************************


********** Quick Sort **********
Original Array:
61 70 81 37 57 95 21 3 25 16

Sorted Array:
3 16 21 25 37 57 61 70 81 95

Number of swaps: 11
*******************************
```

---

### Testing

How to compile:

```
g++ SortingComparison.cpp <main file> -std=c++17
```

You must always implement and test you programs **INCREMENTALLY!!!**
What does this mean? Implement and test one method at a time.
**For each class**
* Implement one function/method and test it thoroughly (multiple test cases + edge cases if applicable).
* Implement the next function/method and test in the same fashion.
    **How do you do this?** Write your own `main()` function to test your classes. In this course you will never submit your test program, but you must always write one to test your classes. Choose the order in which you implement your methods so that you can test incrementally: i.e. implement mutator functions before accessor functions. Sometimes functions depend on one another. If you need to use a function you have not yet implemented, you can use stubs: a dummy implementation that always returns a single value for testing. Don’t forget to go back and implement the stub!!! If you put the word STUB in a comment, some editors will make it more visible.

### Grading Rubric
**Correctness 80%** (distributed across unit testing of your submission)
**Documentation 10%**
**Style and Design 10%** (proper naming, modularity, and organization)

**Important:** You must start working on the projects as soon as they are assigned to detect any problems with submitting your code and to address them with us **well before** the deadline so that we have time to get back to you **before** the deadline. This means that you must submit and resubmit your project code **early** and **often** in order to resolve any issues that might come up **before** the project deadline.
**There will be no negotiation about project grades after the submission deadline.**
  
### Submission:
You will submit **the following files**:
`Sorter.cpp`

Your project must be submitted on Gradescope. Although Gradescope allows multiple submissions, it is not a platform for testing and/or debugging and it should not be used for that. You MUST test and debug your program locally. Before submitting to Gradescope you MUST ensure that your program compiles (with g++) and runs correctly on the Linux machines in the labs at Hunter (see detailed instructions on how to upload, compile and run your files in the “Programming Rules” document). That is your baseline, if it runs correctly there it will run correctly on Gradescope, and if it does not, you will have the necessary feedback (compiler error messages, debugger or program output) to guide you in debugging, which you don’t have through Gradescope. “But it ran on my machine!” is not a valid argument for a submission that does not compile. Once you have done all the above, please submit it to Gradescope.
