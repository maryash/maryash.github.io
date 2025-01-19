---  
layout: myDefault
title: PROJECT 1
---  

# PROJECT 1 &nbsp; Algorithmic Adventures: The&nbsp;King's Gambit
![Header](files/235_chess.png)

## CONFIG UNSET
<!-- CONFIG, ie. make sure to set these before DEPLOYING -->
[SUBMISSION_LIMIT]: 5
[DUE DATE]: TBD

<!-- BEGIN PROJECT SPECS -->

## A Brief Overview
This semester, you’ll dive headfirst into a thrilling world of knights, pawns, and questionable chess plays as you develop the infrastructure for a virtual chess simulation. Set on a dramatic battlefield of wits and grid-based (non)violence, your simulation will give participants the chance to outsmart their opponents or, at the very least, pretend they know what they’re doing.

As the self-proclaimed Grandmaster Extraordinaire, it’s your job to bring the chessboard to life by crafting a roster of pieces, each with their own quirky personalities, unpredictable movements, and a desperate desire not to get sacrificed for “the greater good.” Participants in your simulation will navigate the chaos, learning to strategize, improvise, and probably yell, “Why does the Knight move like that?!” at least once.

Prepare yourself—it’s going to be a checkmate-worthy ride!

## Step-By-Step, Piece-By-Piece
A Recap of Object-Oriented Programming (OOP) & Dive Into Inheritance

This is a project to get you acquainted with the platforms we will use in this course, re-
fresh your knowledge of basic OOP, and let you git the ground running with new material. You will implement the ```ChessPiece``` base class, and the ```Pawn``` and ```Rook``` classes. 

In order to successfully complete this project, we strongly recommend that you look back to your CSCI 135 coursework for reference.

---

## Task 1: Getting Started with GitHub Classroom

<span style="color:teal">
<b>[IMPORTANT]</b> Do not skip this step. Otherwise, you'll be ill-positioned to do this (or future) projects.
</span>

1) If you don’t already have one, [go to GitHub](https://github.com) and create a GitHub account. **You will likely use your GitHub account professionally in the future, so choose a username you will want
to keep.**

2) Next, watch the following videos to brush up on or learn the basics of Git and GitHub.
    * [An Introduction to GitHub](https://www.youtube.com/watch?v=MJUJ4wbFm_A)
    * Or if you're in a rush: [Git Explained in 100 Seconds](https://www.youtube.com/watch?v=hwP7WQkmECE)


3) For this project, we will use GitHub Classroom. The following video will guide you through the entire process—from accepting an assignment to submitting your solution: [GitHub
Classroom Tutorial](https://www.youtube.com/watch?v=AHDCokfgcSo)
    * Although the video is about a different course, the instructions are the same (with different repo and file names). The only difference is that we will not add a distribution branch, so you can ignore the part where it says to execute the two git commands in the readme file; there are not extra instructions in the readme file on our repo.

**The link to accept the GitHub Classroom assignment can be found on Blackboard.**

---
#### Additional Resources to Brush Up On Basic OOP (if you need)

* [Code Beauty on Constructors & Class Methods](https://youtu.be/1LGJSRFrxqQ)
* [TheNewBoston on Classes & Objects](https://youtu.be/ABRP_5RYhqU)
* [McProgramming on ```.hpp``` and ```.cpp``` files.](https://youtu.be/plCegnf2h5g)

---
### Documentation Requirements

For **ALL** projects, you will receive 15% of the points for documentation. These are the
requirements:

1. **File-level Documentation**  
   All files must have a comment preamble with, at a minimum:  
   - Your name  
   - Date  
   - A brief description of the code implemented in that file  

2. **Function-level Documentation**  
   All functions (both declarations and implementations) must be preceded by a comment preamble that includes:  
   - **@pre**: Describes any preconditions. A precondition is a condition that must be true before a function is called. It specifies what the caller must ensure before calling the function.  
   - **@param**: One for each parameter the function takes.  
   - **@return**: Describes the return type.  
   - **@post**: Describes any postconditions. A postcondition is a condition that must be true after a function completes. It specifies what the function guarantees upon completion.  

These together fully specify the usage of the function. You will notice that we often provide these in the project specification to describe what functionality you should implement. **You can copy/paste these preambles into your code, and your code will be fully documented and easy to read and use by anyone.**

It is not useless work; it will help you learn how to document your code. However, sometimes we must add extra guidance given the scholastic context, such as providing hints for implementation. These are not things you would normally include in the documentation of professional code.  

Whenever you write additional functions not in the project specification (this will be more common in later projects), you will be expected to comment your functions in a similar way, even when the preambles are not provided by the specification.  

**For Non-Trivial functions**
All non-trivial functions must have inline comments. 

Any block of code that is not self-explanatory must be preceded by a comment describing what it does (e.g. have one English sentence before each loop or conditional describing what it does).

*Trust me, it helps you read your own code too&mdash;especially after you come back from a break after staring at your 100th ```for (int i = 0; i < n; i++)```.*


### Remember, all files and all functions must be commented. 

**Yes both ```.hpp``` and ```.cpp!```**

It can be a lot of copy/pasting, but it is not useless. If someone is reading through your code to understand what it does, they shouldn't have to consult the comments in a different file!

## Task 2: The ChessPiece Class
Time to get coding. You'll be implementing the ```ChessPiece``` base class.

#### Key Notes

* Always separate interface from implementation (```ChessPiece.hpp``` and ```ChessPiece.cpp```).

* You ONLY EVER include a class's interface (```.hpp```). This will be an implicit assumption in this course going forward. 

* Work through the tasks sequentially (implement and test). Only move on to a task when you are positive that the previous one has been completed correctly. 

**IMPORTANT:** The names of classes and methods must exactly match those in this specification (function names, parameter types, returns, @pre & @post conditions must match exactly).

### The ChessPiece Base Class

The `ChessPiece` class serves as the base class for all chess pieces. It defines the common attributes and behaviors shared among all chess pieces.

**The ChessPiece class must have the following private member variables**
* ```std::string color_``` An **uppercase, alphabetic** string representing the color of the chess piece. That is, *no lowercase characters or non-alphabetic (eg. symbols or numbers)*

* ```int row_``` An integer corresponding to the row position of the chess piece
* ```int column_``` An integer corresponding to the column position of the chess piece
* ```bool movingUp_``` A boolean representing whether the piece is moving up the board (in reference to the visual below)

**For convenience, the class defines the following static constant, as a protected member variable:**
```static const int BOARD_LENGTH = 8``` A constant value representing the number of rows & columns on the chessboard (since boards are square)


```python
[ROW]
7 | * * * * * * * *
6 | * * * * * * * *
5 | * * * * * * * *
4 | * * * * * * * *
3 | * * * * * * * *
2 | * * * * * * * *
1 | * * * * * * * *
0 | * * * * * * * *
  +---------------
    0 1 2 3 4 5 6 7 [COL]
```

---

#### Constructors 
**1. Default Constructor**
```java
/**
 * @brief Default Constructor : All values 
 * Default-initializes all private members.  
 * Booleans are default-initialized to False. 
 * Default color : "BLACK"
 * Default row & columns: -1 (ie. represents that it has not been put on the board yet)
 */
```

**2. Parameterized Constructor**
The parameterized constructor must be able to work with **only the color of the piece as a parameter**, with **all other parameters relying on default values.**

```java
/**
* @brief Parameterized constructor.
* @param : A const reference to the color of the Chess Piece (a string).
*     Set the color "BLACK" if the provided string contains non-alphabetic characters. 
*     If the string is purely alphabetic, it is converted and stored in uppercase
*     NOTE: We DO NOT supply a default value for color, the first parameter.
*           Notice that if we do, we override the default constructor.
* @param : The 0-indexed row position of the Chess Piece (as a const reference to an integer).
*          Default value -1 if not provided.
* @param : The 0-indexed column position of the Chess Piece (as a const reference to an integer).
*          Default value -1.
* @param : A flag indicating whether the Chess Piece is moving up on the board
*          or not (as a const reference to a boolean). Default value False if not provided.
* @post : The private members are set to the values of the corresponding parameters. 
*   If the provided color parameter is invalid (ie. not alphabetic), it is set to "BLACK"
*   If EITHER of the provided row or col are out-of-bounds, that is between 0 (inclusive)
*      and BOARD_LENGTH (not inclusive), then BOTH are set to -1 (regardless of being in-bounds or not).
*/
```

---

#### Accessors & Mutators

**IMPORTANT**
Recall that accessor (aka getter) functions *do not* modify the underlying object.

**Any functions that do not modify the underlying object must be declared `const`**.

**Your program will *NOT* compile if you do not specify this *when writing the function siganture*.**

```java
/**
 * @brief Gets the color of the chess piece.
 * @return std::string - The value stored in color_
 */
getColor 

/**
 * @brief Sets the color of the chess piece.
 * @param color A const string reference, representing the color to set the piece to. 
 *     If the string contains non-alphabetic characters, the value is not set (ie. nothing happens)
 *     If the string is alphabetic, then all characters are converted and stored in uppercase
 * @post The color_ member variable is updated to the parameter value in uppercase
 * @return True if the color was set. False otherwise.
 */
setColor 

/**
 * @brief Gets the row position of the chess piece.
 * @return The integer value stored in row_
 */
getRow 

/**
 * @brief Sets the row position of the chess piece 
 * @param row A const reference to an integer representing the new row of the piece
 *
 * If the supplied value is outside the board dimensions [0, BOARD_LENGTH), 
 *    the ChessPiece is considered to be taken off the board, and its row AND column are set to -1 instead.
 */
setRow

/**
 * @brief Gets the column position of the chess piece.
 * @return The integer value stored in column_
 */
getColumn

/**
 * @brief Sets the column position of the chess piece 
 * @param row A const reference to an integer representing the new column of the piece
 *
 * If the supplied value is outside the board dimensions [0, BOARD_LENGTH),
 *  the ChessPiece is considered to be taken off the board, and its row AND column are set to -1 instead.
 */
setColumn 

/**
 * @brief Gets the value of the flag for if a chess piece is moving up
 * @return The boolean value stored in movingUp_
 */
isMovingUp

/**
 * @brief Sets the movingUp flag of the chess piece 
 * @param flag A const reference to an boolean representing whether the piece is now moving up or not
 */
setMovingUp
```

---

#### The Display Function
```java
/**
 * @brief Displays the chess piece's information in the following format,
 *        if it is considered on the board (ie. its row and col are not -1):
 * <COLOR> piece at (row, col) is moving <UP / DOWN>\n
 * 
 * Otherwise an alternative format is used:
 * <COLOR> piece is not on the board\n
 * @note "\n" just means endline in this case. Please use "std::endl," don't hardcode "\n".
 */
display
```

---

## Task 3: Inheriting From `ChessPiece`
Now that we've established the foundation with the `ChessPiece` class, let's build upon it. By leveraging *inheritance*, we can create more specific piece classes like `Pawn` and `Rook`. 

This powerful technique allows us to reuse existing code and create new classes with specialized behaviors. This not only saves us some keystrokes, but better yet promotes code clarity and maintainability. 

---

### Part A: The Pawn Class

The `Pawn` class extends the `ChessPiece` class, adding specialized attributes and behaviors for a Pawn.

#### Private Member Variables
* `bool double_jumpable_` A flag indicating whether the pawn can perform a double jump


#### Constructors 
**1. Default Constructor**
```java
/**
 * @brief Default Constructor. All boolean values are default initialized to false.
 * @note Remember to construct the base-class as well!
 */
Pawn
```

**2. Parameterized Constructor**

```java
/**
* @brief Parameterized constructor.
* @param : A const reference to the color of the Pawn (a string).
*     Set the color "BLACK" if the provided string contains non-alphabetic characters (eg. numbers or symbols). 
*     If the string is purely alphabetic, it is converted and stored in uppercase.
*     NOTE: We do not supply a default value for color, the first parameter.
*           Notice that if we do, we override the default constructor.
* @param : The 0-indexed row position of the Pawn (as a const reference to an integer).
*          Default value -1 if not provided, or if the value provided is outside the
*          board's dimensions, [0, BOARD_LENGTH)
* @param : The 0-indexed column position of the Pawn (as a const reference to an integer).
*          Default value -1 if not provided, or if the value provided is outside the
*          board's dimensions, [0, BOARD_LENGTH)
* @param : A flag indicating whether the Pawn is moving up on the board, or not (as a const reference to a boolean).
*          Default value false if not provided.
* @param : A flag indicating whether the Pawn can double jump two spaces forward or not (as a const reference to a boolean).
*          Default value false if not provided.
* @post : The private members are set to the values of the corresponding parameters. 
*   If the provided color parameter is invalid (ie. not alphabetic), it is set to "BLACK"
*   If EITHER of the provided row or col are out-of-bounds,
*      that is between 0 (inclusive) and BOARD_LENGTH (not inclusive),
*      then BOTH are set to -1 (regardless of being in-bounds or not).
* @note Remember to construct the base-class as well using these parameters!
*/
Pawn
```

#### Accessors & Mutators

*Remember, don't forget those `const` declarations*

```java
/**
 * @brief Gets the value of the flag for the Pawn can double jump
 * @return The boolean value stored in double_jumpable_
 */
canDoubleJump

/**
 * @brief Toggles the double_jumpable_ flag of the Pawn
 * @post Sets the double_jumpable_ flag to opposite its current value
 */
toggleDoubleJump

/**
 * @brief Determines if this pawn can be promoted to another piece
 *     A pawn can be promoted if its row has reached the farthest row it can move up (or down) to.
 *     This is determined by the board size and the Piece's movingUp_ member.
 *
 * EXAMPLE: If a pawn is movingUp and the board has 8 rows,
*           then it can promoted only if it is in the 7th row (0-indexed)
 * @return True if this pawn can be promoted. False otherwise.
 */
canPromote
```

---

### Part B: The Rook Class
The `Rook` class extends the `ChessPiece` class, adding specialized attributes and behaviors for a Rook.

#### Private Member Variables
`int castle_moves_left_` An integer representing how many more castle moves this Rook can execute.


#### Constructors

**1. Default constructor**
```java
/**
 * @brief Default Constructor. By default, Rooks have 3 available castle moves to make
 * @note Remember to default construct the base-class as well!
 */
Rook
```
**2. Parameterized constructor**

```java
/**
* @brief Parameterized constructor. Rememeber to use the arguments to construct the underlying ChessPiece.
* @param : A const reference to the color of the Rook (a string). Set the color "BLACK" if the provided string contains non-alphabetic characters. 
*     If the string is purely alphabetic, it is converted and stored in uppercase
*     NOTE: We do not supply a default value for color, the first parameter.
*           Notice that if we do, we override the default constructor.
* @param : The 0-indexed row position of the Rook (as a const reference to an integer).
*          Default value -1 if not provided, or if the value provided is outside the
*          board's dimensions, [0, BOARD_LENGTH)
* @param : The 0-indexed column position of the Rook (as a const reference to an integer).
*          Default value -1 if not provided, or if the value provided is outside the
*          board's dimensions, [0, BOARD_LENGTH)
* @param : A flag indicating whether the Rook is moving up on the board, or not (as a const reference to a boolean).
*          Default value false if not provided.
* @param : An integer representing how many castle moves it can make.
*          Default to 3 if no value provided.
* @post : The private members are set to the values of the corresponding parameters. 
*   If the provided color parameter is invalid (ie. not alphabetic), it is set to "BLACK"
*   If EITHER of the provided row or col are out-of-bounds, that is between 0 (inclusive)
*      and BOARD_LENGTH (not inclusive), then BOTH are set to -1 (regardless of being in-bounds or not).
* @note Remember to construct the base-class as well using these parameters!
*/
Rook 

```

#### Accessors & Mutators

```java
/**
 * @brief Determines if this rook can castle with the parameter Chess Piece
 *     This rook can castle with another piece if:
 *        1. It has more than 0 castle moves available
 *        2. Both pieces share the same color
 *        3. Both pieces are considered on-the-board (no -1 rows or columns)
 *           and laterally adjacent (ie. they share the same row and their columns differ by at most 1)
 * @param ChessPiece A const reference to chess piece with which the rook may / may not be able to castle with
 * @return True if the rook can castle with the given piece. False otherwise.
 */
canCastle


/**
 * @brief Gets the value of the castle_moves_left_
 * @return The integer value stored in castle_moves_left_
 */
getCastleMovesLeft
```

---

## Task 4: Testing
To ensure your code functions as expected, it's essential to write and execute test cases. In `main.cpp` you are **strongly encouraged** to write a `main()` function to define test cases and compare your program's output to what *you* expect the output to be. 

Always implement and test your programs *INCREMENTALLY*. That means implement and test one method at a time.


**For instance, you should:**

1. **Instantiate Pieces:** Create objects of different chess piece types with using the default *and* parameterized constructor (e.g., ChessPiece, Pawn, Rook). 

    * Definitely, use the `display` function to observe the values of their member variables, or simply `std::cout` values to the terminal.

2. **Set Positions:** Place these pieces on the board by assigning coordinates, and `cout` their updated positions.


3. **Check Special Behaviors:** For `Pawn`, verify if it can be promoted when on specific board positions (and that it *cannot* for others). For `Rook`, check if it can castle with pieces of the same color next to each other (ie. when it should), and that it fails to do so when pieces are of opposing color, or too far away. Of course, `cout` to check if the expected boolean value is returned.

**Note:** Sometimes functions depend on one another. If you need to use a function you have not yet implemented, you can use stubs: a dummy implementation that always returns a single value for testing. Don’t forget to go back and implement the stub! *If you put the word STUB in a comment, some editors will make it more visible.*


By systematically testing these aspects, we can identify and rectify any issues in our code's logic or implementation.

**If there are words to live by for this course, the autograder is NOT meant to test your code.**

---

#### Compiling with the Included `Makefile`

*For your convenience, we've included a `Makefile`, which allows you to quickly re-compile your code, instead of writing `g++` over and over again. **It also ensures that your code is being compiled using the correct version of C++. And by correct one, we mean the one the auto-grader uses.***

In the terminal, in the same directory as your `Makefile` and your source files, you can use the following commands:

```bash
make # Compiles all recently modified files specified by the OBJs list
make clean # Removes all files ending in .o from your directory, ie. clears your folder of old code
make rebulild # Performs clean and make in one step
```

This assumes you did not rename the Makefile and that it is the only one in the current directory.

## Task 5: Submission
You will submit your solution to Gradescope via GitHub Classroom. The autograder will grade the following files:

```
1. ChessPiece.cpp
2. ChessPiece.hpp
3. Pawn.cpp
4. Pawn.hpp
5. Rook.cpp
6. Rook.hpp
```

Although Gradescope allows multiple submissions, it is not a platform for testing and/or debugging, and it should not be used for that purpose. You MUST test and debug your program locally. 

**To help prevent over-reliance on Gradescope for testing, only [SUBMISSION_LIMIT] submissions per day will be allowed.**

Before submitting to Gradescope, you MUST ensure that your program compiles using the provided Makefile and runs correctly on the Linux machines in the labs at Hunter College. This is your baseline—if it runs correctly there, it will run correctly on Gradescope. If it does not, you will have the necessary feedback (compiler error messages, debugger, or program output) to guide you in debugging, which you don’t have through Gradescope. “But it ran on my machine!” is not a valid argument for a submission that does not compile. Once you have done all the above, submit it to Gradescope.

---

### Grading Rubric
- **Correctness:** 80% (distributed across unit testing of your submission)
- **Documentation:** 15%
- **Style and Design:** 5% (proper naming, modularity, and organization)

---

### Due Date
This project is **due on [DUE DATE]**.
*No late submission will be accepted.*

---

### Important Notes
You must start working on the projects as soon as they are assigned to detect any problems and to address them with us well before the deadline so that we have time to get back to you before the deadline.


**There will be no extensions and no negotiation about project grades after the submission deadline.**

---

### Additional Help

Help is available via drop-in tutoring in Lab 1001B (see Blackboard for schedule). You will be able to get help if you start early and go to the lab early. We only a finite number of UTAs in the lab; **the days leading up to the due date will be crowded and you may not be able to get much help then.**

Authors: Daniel Sooknanan, Prof. Maryash

Credit to Prof. Ligorio & Prof. Wole
