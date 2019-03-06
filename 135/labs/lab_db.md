---  
layout: myDefault  
title: DEBUGGER LAB  
---      
  
# Lab on the Use of the Debugger  

**Due:** by the end of the class. No Gradecope submission. Lab instructor checks your program before you leave.

## Introduction

In this lab we will learn how to use debugger GDB and its GUI front-end [DDD](https://www.gnu.org/software/ddd/).
It has some convenient features, for example, it can show graphical diagrams with pointers
and generally works pretty snappy, so don't judge it by its old interface.  If you use your own laptop, be aware that you will need DDD today, and should switch to using your Linux accounts for this class.  

![](https://i.imgur.com/dk0bbfj.png){: .centered}

## Basic debugging

To debug a program, it must be compiled using the `-g` flag, 
which tells the compiler to include appropriate debugging information in the produced executable file:  

```
g++ -g program.cpp
```
Then, you can run DDD:

```
ddd a.out 
```
Here is an [general DDD tutorial](http://heather.cs.ucdavis.edu/~matloff/Debug/Debug.pdf){:target="_blank"} for more information. 

### Breakpoints.

- To **set a breakpoint**, _Right-Click_ on the left edge of the line where you want to put a breakpoint. In the shown menu, choose `Set Breakpoint`.
   
  The debugger will be always stopping there, right before that line gets executed.

- To **remove or disable a breakpoint**, _Right-Click_ on it and choose the corresponding menu option.

### Basic commands (Run, Continue, Next, Step, Finish).

- `Run` (or press `[F3]`) to start program execution (but it will be stopping at breakpoints).

When stopped at a breakpoint:

- `Continue [F9]` continues execution after being stopped.
- `Next [F6]` executes current line 
- `Step [F5]` executes current line, allowing to _step into_ function calls.
- `Finish [F8]` _steps out_ of the function call.

### Inspecting variables and expressions.

- Holding mouse cursor over a variable name, shows its value in an overlay frame.
- _Right-Click_ on a variable name shows a menu to `Print` or `Display` its value (all displayed expressions are shown in the top panel).
- Similarly, you can select any complex expression with the mouse cursor and `Print` or `Display` it.

More documentation is available in [DDD manual](https://www.gnu.org/software/ddd/manual/html_mono/ddd.html).

## Lab Assignment

1) There are two programs attached, ['prog.cpp'](prog.cpp) and ['buggy.cpp'](buggy.cpp).  Using ['prog.cpp'](prog.cpp) example we will use DDD to set breakpoints, use commands `Run`, `Continue`, `Next`, `Step`, `Finish`, and how to inspect expressions.

Make sure that _all of you_ follow the instructor, and no one falls behind. The instructor will demonstrate all the features mentioned in the section above.  You will **follow along with the instructor**, debugging a simple program.  You must be able to repeat their steps. DDD uses old Motif UI, and it takes time to learn how to adjust to it.  the instructor will explain you how to use the debugger program DDD.  When you feel that your are falling behind, ask for help right away.  

      Bug in the program prog.cpp
      ---------------------------
      Observations:
        - incorrectly computed number of digits for 1057 and 10155.
        - inside the function call, when 'number' reduces to 10, the function stops counting,
        ends the loop and returns the answer, while it still could divide by 10 one more time.

      Cause:
        if condition should be (number > 9) instead of (number>10).


2) After you fix 'prog.cpp', proceed to debugging another more complex program ['buggy.cpp'](buggy.cpp).  You must now start debugging on your own.  Collaborate with your neighbors and ask the instructor and UTAs for help.  The instructor will check your work at the end of the class, no Gradescope submission required. 
<br />
<br />

[![](https://i.imgur.com/hBXW5NO.png){: .centered }](https://rubberduckdebugging.com/)





Bugs in the program buggy.cpp
=============================

Part 1. Maximum
---------------

1)  Observation: for loop stops immediately
    Cause:
      Loop condition 
        i > CAPACITY 
      should be
        i < CAPACITY

2)  Observation: if condition does not affect execution (maximum gets updated
    for every next element of the array regardless).
    Cause:
      Semicolon after if condition and before { }


Part 2. Minimum
---------------

3)  Observation: Minimum remains equal to its initial value 0 and never changes.

    Cause:
      Initialization 
        int min_val = 0;
      should be
        int min_val = arr[min_i];

4)  Observation: After fixing the previous bug, the index of the minimum element 
    is still not found correctly (reported 0, while should be 5).

    Cause: In the body of the loop, variable min_i is not updated.
      Instead of 
        max_i = i;
      should be
        min_i = i;


Part 3. Maximum difference
--------------------------

5)  Observations: 
    - Reported difference is a huge random number, and the corresponding index is often 8.
    - Loop iterates beyond the array bounds and compares arr[7] with arr[8], which 
    is out of bounds.

    Cause:
      Instead of 
        for(int i = 0; i < CAPACITY; i++) {
      should be 
        for(int i = 0; i < CAPACITY-1; i++) {

6)  Observation: 
    - Reported difference is still not correct
    - max_diff turns out to be updating on every iteration

    Cause: 
      Wrongly placed curly braces
      
      Correct would be:

        for(int i = 0; i < CAPACITY; i++) {
          int diff = arr[i+1] - arr[i];
          if (diff > max_diff) {    <-------- here
            max_diff_i = i;      
            max_diff = diff; 
          }
        }                           <-------- and here


Part 4. Mean value
------------------

7)  Observations: 
    - Average value is too small (3.5 is reported, while it should be several thousand)
    - Function call to addUp() returns a wrong value
    - Inside that function, sum is not computed correctly
    
    Cause: The function is adding up indexes, not the elements of the array.
      Instead of 
        sum += i;
      should be 
        sum += arr[i];


Part 5. Maximum (revisited)
---------------------------

8)  Observation: 
    - Segmentation fault 
    - index max_i does not get updated correctly
    
    Cause: We update the maximum index with the value of the array at the index i
      Instead of 
        max_i = arr[i];
      should be
        max_i = i;
