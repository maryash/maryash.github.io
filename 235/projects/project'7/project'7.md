---  
layout: myDefault
title: PROJECT 7
---  

# PROJECT 7 &nbsp; Branching Out
This time, we'll be adding players to our Chess simulation. Pretty cut and dry!

In this project you will:
1. Setup constructors & accessors for the `PlayerBST` class
2. Implement insertion & search operations for `PlayerBST` 
3. Add member functions to get metrics on players across the `PlayerBST`
4. Implement various traversal methods to concretize what differentiates pre, in, and post-order searches!

Here's the GitHub classroom assignment link: https://classroom.github.com/a/6JFM7wTJ

---
### Before You Continue

#### Gentle Reminders

You'll notice we provide the `Node` class & `ChessPlayer` struct. Like usual, familiarize yourself with their interfaces & functionalities. 

As a brief reminder:
1) `Node` is a templated class, so you need not include it when using `g++` (if you choose not to use the `Makefile`)
2) `ChessPlayer` is a struct, so its members are `public` by default. You can easily reference its attributes (eg. `name_` or `wins_`) directly instead of via getters & setters.

**You must only work in `PlayerBST.hpp` & `PlayerBST.cpp`**. Because trees are generally recursive in nature, you *will need to make helper functions,* so declare and implement any private helpers as you see fit, but ensure you keep them in these files! 

#### An Overview of the `PlayerBST`

The `PlayerBST` class is, as the name suggests, a BST (Binary Search Tree) of `ChessPlayer` objects. More importantly, it's ordered alphabetically based on each `ChessPlayer`'s name. That is, `a` comes before (and is treated as "less than") `b`; so names with letters earlier in the alphabet will be on the left of the tree, and those later will be on the right. 

**Also bear in mind, we do not allow duplicate names in our tree.**

For example, we might have:
```
           Mia
         /     \
     Grace      Thomas
    /           /     \
  Andy        Peter    Zoe
```

You'll also notice that `remove` and `~PlayerBST` (ie. the destructor) is already provided. This is to save you some keystrokes, because removing in a BST can get quite tricky, and I don't want you having memory leaks. However, this isn't meant to confuse you; while the code may be a little verbose, **ensure you know the gist of the steps these functions take (and why!).**

You should also pay special attention to the destructor (since it may be similar to what you'll be writing for some of your functions); as a test of your knowledge, which traversal algorithm does it use? 

---

### Task 1: Setting up the `PlayerBST`
Ok, anyways! Coding time. I'll keep things concise so both you and I finish up ASAP.

#### Constructors & Accessors

**Default Constructor**
You've done this plenty of times before, so I reckon you're a master by now. Implement the default constructor as follows:

```c++
/**
 * @brief Default constructor; constructs an empty BST
 * @post The `root_` is set to nullptr & `size_` to 0.
 */
PlayerBST
```

**Accessors**
Same thing with some simple getters:
```c++
/**
 * @brief Getter for the `root_` member
 * @returns The a pointer to the root of the PlayerBST, 
 * or nullptr if the tree is empty.
 */
getRoot 

/**
 * @brief Getter for the `size_` member
 * @returns The number of Players (ie. nodes) 
 * in the PlayerBST as an integer
 */
size
```

### Task 2: Insertion & Search
In effect, these `insert()` and `contains()` are very similar algorithms: go left if your target (or to-be-inserted value) is less than the current node, or right if it's greater than it.

When you reach a leaf, one inserts a new node (if possible) and the other just returns. Similarly, if you reach a situation where your target value and the current node's value is equal, you'll handle them differently as well!

But hints aside, here's the functions you'll be implementing:

```c++
/**
 * @brief Searches for a Player in the PlayerBST
 * with the specified name.
 *
 * @param value A const reference to a STRING representing
 * the name of the Player to search for.
 * @returns True if the player exists in the BST. False otherwise.
 */
contains

/**
 * @brief Inserts a Player into the PlayerBST
 * if a player with their name does NOT already exist.
 *
 * @param value A const. reference to the ChessPlayer to insert
 * @returns True if the player was sucessfully inserted. False otherwise.
 * @post Increments the BST's size if the value was succesfully inserted
 */
insert
```

### Task 3: Getting Some Metrics
Now that we can insert and search for individual Chess players, we'll want to learn more about them in aggregate.

#### Part A: Playing Mean
The goal is simple: find the mean (ie. average) number of wins across all `ChessPlayers` in the `PlayerBST`, rounded to (at most) the second decimal place.

For that latter portion, feel free to use functions from the `<cmath>` library as well (in fact, I would encourage you to do so).

By the way, you're going to need two functions to do this: a wrapper and a helper. 

A wrapper sets up any initial parameters and calls (ie. wraps) the helper function. In this case, it'd be `averagewins()`. Then, a helper function would handle the actual recursion with additional arguments, eg. `averageWinsHelper(Node* subroot)`.

You'll probably want to calculate the sum of all wins in the tree using the helper and use that to compute the average within the wrapper. There's many ways to do this, but two (of many) options are:
1) Keeping a reference to a single variable that stores the sum of all the wins of Players you've visited thus far while recursing. Then, we use the final value in the wrapper.
2) Finding the sum of wins in a Node's left & right children, adding the current Node's wins to that sum, and returning it. Then, we use the returned value in the wrapper.

Which you choose is up to you; both are equally valid approaches. You're the designer & coder. So you lead the way! 

```c++
/**
 * @brief Calculates the average number of wins
 * across all Players in the PlayerBST, rounded
 * to at second decimal place (eg. 1.00, 2.50, 3.14 etc.)
 *
 * @returns The average number of wins or 0.0
 * if the BST is empty, as a double
 */
averageWins
```

#### Part B: How Many Meet the Bar?
Same idea, different goalpost. 

Instead of summing *everything* in the tree, this time you'll use the same recursive strategies to find the number of `ChessPlayer`s that have *at least* the specified number of wins.

```c++
/**
* @brief Counts the number of Players in the BST with
* greater than or equal to the specified minimum number of wins.
*
* @param min_wins A const reference to an integer
* denoting the minimum number of wins to check against
* @returns The count of players with wins >= min_wins
* as an integer
*/
countAboveWins
```

#### Part C: Order Matters!
Lastly, we'll implement ways to vectorize our tree. We'll be doing so by using `pre-order`, `in-order`, and `post-order` traversals (yes, all three of them).

This is another function that requires the whole wrap/helper function setup--but you just did that so you've probably gotten the gist of it by now. Though, one of the approaches mentioned in the previous will be a *lot* more efficient (hint: do references make copies?).

Overall, we'll use an enum `TraversalType` (defined at the top of the `PlayerBST` interface) to specify which one to use. Recall, enums are just *integers* under the hood. 

Think of it like saying:
```c++
const int IN_ORDER = 1; 
const int PRE_ORDER = 2;
const int POST_ORDER = 3;
```
Using `IN_ORDER` in your code is a lot more readable than saying `1`, when it makes sense to do so!

With that said, it's time to implement your final function for 235 this semester:
```c++
/**
 * @brief Creates a vector of all ChessPlayers in the BST
 * using the specified traversal order.
 *
 * @param traversal A const reference to the traversal type
 * (ie. IN_ORDER, PRE_ORDER, POST_ORDER)
 * @returns A vector containing all ChessPlayers in the PlayerBST 
 * read in the specified traversal order.
 */
toVector
```

### Submission, Testing, & Debugging

You will submit your solution to Gradescope. 

The autograder will grade the following files:
```
1. PlayerBST.hpp
2. PlayerBST.cpp
```

Although Gradescope allows multiple submissions, it is not a platform for testing and/or debugging, and it should not be used for that purpose. You MUST test and debug your program locally. 

**To help prevent over-reliance on Gradescope for testing, only 5 submissions per day will be allowed.**

Before submitting to Gradescope, you MUST ensure that your program compiles using the provided Makefile and runs correctly on the Linux machines in the labs at Hunter College. This is your baseline—if it runs correctly there, it will run correctly on Gradescope. If it does not, you will have the necessary feedback (compiler error messages, debugger, or program output) to guide you in debugging, which you don’t have through Gradescope. “But it ran on my machine!” is not a valid argument for a submission that does not compile. Once you have done all the above, submit it to Gradescope.

### Testing: Compiling with the Included `Makefile`

*For your convenience, we've included a `Makefile`, which allows you to quickly re-compile your code, instead of writing `g++` over and over again. **It also ensures that your code is being compiled using the correct version of C++. And by correct one, we mean the one the auto-grader uses.***

In the terminal, in the same directory as your `Makefile` and your source files, you can use the following commands:

```bash
make # Compiles all recently modified files specified by the OBJs list
make clean # Removes all files ending in .o from your directory, ie. clears your folder of old code
make rebulild # Performs clean and make in one step
```

This assumes you did not rename the Makefile and that it is the only one in the current directory.

### Debugging
*Here are some quick tips, in case you run into the infamous "It compiles on my machine, but not on Gradescope"*
1) Ensure your filenames are correct (case-sensitive), and don't contain leading / trailing spaces 
2) Ensure that your function signatures are correct (ie. function name spelling, order/type of the parameters, return type). 
**This also includes `const` declarations. Remember, if a function does *not* modify the underlying object, it must be declared `const`.** 
3) Make sure to `import` any STL modules you may use.

---

### Grading Rubric
- **Correctness:** 80% (distributed across unit testing of your submission)
- **Documentation:** 15%
- **Style and Design:** 5% (proper naming, modularity, and organization)

---

### Due Date
This project is **due on May 13th, 2025!**.
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
