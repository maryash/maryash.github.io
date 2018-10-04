---  
layout: myDefault  
title: DEBUGGER LAB  
---      
  
# Lab on the Use of the Debugger  

**Due:** by the end of the class, no 24 hours deadline extension.

No Gradecope submission. Lab instructor checks your program before you leave.


## Introduction

In this lab we will learn how to use debugger GDB and its GUI front-end [DDD](https://www.gnu.org/software/ddd/).
It has some convenient features, for example, it can show graphical diagrams with pointers
and generally works pretty snappy, so don't judge it by its old interface.

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

Please see DDD manual for detailed information.

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

- In this lab, first, the instructor will explain you how to use the debugger program DDD.
  They will demonstrate all the features mentioned in the section above, and 
  you will **follow along with the instructor**, debugging a simple program.    
  
  When you feel that your are falling behind, ask for help right away. 

- After the first example is finished you will be given another more complex program to debug.
  You together find the bugs in the second program. 
  The instructor will check your work at the end of the class, no Gradescope submission required.

<br />

<br />

[![](https://i.imgur.com/hBXW5NO.png){: .centered }](https://rubberduckdebugging.com/)

