
<title>CSCI 135 - Project 3</title>

<br />

![](https://i.imgur.com/8bJSbkJ.png){: .centered}

<br />

![](https://i.imgur.com/s6shb7B.png){: .centered}

> *"Since they were to come in the days of the power of Melkor, Aulë made the dwarves strong to endure. Therefore they are stone-hard, stubborn, fast in friendship and in enmity, and they suffer toil and hunger and hurt of body more hardily than all other speaking peoples; and they live long, far beyond the span of Men, yet not forever."*    
> --  The Silmarillion

In this project, you will be helping a group of dwarves to establish a small outpost in a dangerous magical forest.
You are provided with a mostly complete program (download the file `dwarves.zip`) that simulates the forest and the dwarves.
Your task is to improve the code controlling the actions of the dwarves. 
The assignment consists of three parts, A, B, and C, you will have to submit solution for each part independently as
three separate submissions.

Let us explain how the provided program works.

Copy the supplied file `dwarves.zip` and extract it:
```
unzip dwarves.zip
```
you will get a new directory `dwarves`. To compile the program, go to that directory, and while inside of it, type:
```
make
```
Building this software requires development files for "ncurses" library. *They are already installed on the Linux Lab computers*.
To setup your own computer: On Ubuntu, this is package `libncurses5-dev`.
On Cygwin, this is `libncurses-devel`. On Mac OS, this is `ncurses` package (`brew install ncurses`).

After building the software, you get an executable file `dwarves`. To run it with the default parameters, type:
```
./dwarves
```
There are three sections in the program window: the map, the information panel, and the game log.   
By pressing the keys `[Q]`, `[P]`, `[S]`, and `[F]` on the keyboard, you can **quit**, **play**, **pause**, **step**, 
or **fast-forward**. See the screenshot below:

![](https://i.imgur.com/bSuMCi2.png){: .centered}


## Basics of the program file `bot.cpp`
Please open the file `bot.cpp` in your text editor and inspect its code. This is **the only file you are allowed to edit and submit**
in this project, don't change the other files. 

This file provides defines two functions, `onStart` and `onAction`, which are used to control the dwarves. 
The first of them is called when the game starts, while the second is called when an idle dwarf is choosing their next actions,
this is the main logic function of the game.
Your goal in this project is to improve these functions making the dwarves accomplish their goals. 

### Function `onStart`
```c++
void onStart(int rows, int cols, int num, std::ostream &log);
```
This function is called in the beginning of the game, and receives the following four arguments:
* `rows` is the number of rows of the map,
* `cols` is the number of columns of the map,
* `num` is the number of dwarves you control,
* `log` is an output stream resembling `cout`, you can write in it, for example:
```c++
log << "Hello! " << 100 << " " << 200 << endl;
```
Please, use this `log` stream instead of `cout` for any sort of output you want to do. 
Everything your print in it will be shown in the log window below the main game map.
Never use `cout`, because it might break visual output of the game, always use `log` instead.

The main purpose of the function `onStart` is no initialize global variables if you need to do so.

### Funciton `onAction`
```c++
void onAction(Dwarf &dwarf, int day, int hours, int minutes, 
              ostream &log);
```
It is called every time a dwarf is idle and is choosing their new action, the parameters are:
* `dwarf` is a `Dwarf` object, which allows you inspect the map and schedule actions for the dwarf,
it will be described in more detail below,
* `day` (1+), `hours` (0-23), `minutes` (0-59) is the current time,
* `log` is the output log stream already discussed above.

![](https://i.imgur.com/35Eeyza.png){: .centered}

### The `dwarf` object
It provides you with the following programming interface:

* `int dwarf.row()` - returns the row coordinate of the dwarf,
* `int dwarf.col()` - returns the column coordinate of the dwarf,
* `Place dwarf.look(int row, int col)` - returns what is in the map at the location *(row, col)*.
The return type is the enumeration type `Place` and its possible values include:
    - `EMPTY`
    - `DWARF`
    - `PINE_TREE`
    - `APPLE_TREE`
    - `FENCE`  
    This is not an exhaustive list of what you might encounter in the map, you will learn more in Part C,
* `int dwarf.name()` - returns the name of the dwarf, for convenience, it is an integer number (0, 1, 2, ...) uniquely identifying the dwarf,
* `int dwarf.lumber()` - returns the current amount of lumber the dwarves have.

### Scheduling dwarf actions
There are four more functions the `dwarf` object provides, which actually schedule their next actions. These functions are:

![](https://i.imgur.com/qNJuPcA.png){: .centered}

* `dwarf.start_walk(int row, int col)` - schedules a walking action towards the point *(row, col)*. The dwarf is intelligent enough to find a short path
towards that location, so you just have to tell them where to go. However, if they try to walk there but no path is found, or if the path becomes blocked, 
the dwarf becomes idle.

* `dwarf.start_chop(Dir dir)` - schedules to chop a tree in the direction `dir`, which can assume four possible values:
`EAST`, `WEST`, `NORTH`, or  `SOUTH`. 
If there is a tree or a fence in the adjacent square in that direction, the dwarf will chop it and collect lumber. 
If there is no trees or fences, the dwarf becomes idle. 
* `dwarf.start_build(Dir dir)` - schedules to build a fence in the direction `dir`.
* `dwarf.start_pick(Dir dir)` - schedules to pick an apple or a pumpkin (see more on that in Part C).

![](https://i.imgur.com/YgsCm8I.png){: .centered}

All of these action-scheduling functions have no immediate effect when they are called, however the dwarf remember your order and will start performing 
that action after the function `onAction` ends. 
When they complete the action, or if the action cannot be performed, they become idle and the function `onAction` will is called again for them,
then you can change their order.

You **cannot schedule multiple actions** for a dwarf. Every time `onAction` is called, you can schedule only one action, multiple calls to
`start_walk`, `start_chop`, `start_build`, and `start_pick` will be ignored, and only the first of them will be executed by the dwarf.

Let's consider the provided implementation of the function `onAction`:

```c++
void onAction(Dwarf &dwarf, int day, int hours, int minutes, 
              ostream &log) 
{
  // Get current position of the dwarf
  int r = dwarf.row();
  int c = dwarf.col();

  // Look if there is a tree on the right from the dwarf
  if (dwarf.look(r, c+1) == PINE_TREE) {
    // If there is a pine tree, chop it
    log << "Found a tree -- chop" << endl;
    dwarf.start_chop(EAST);
    return;
  }
  else {
    // Otherwise, move to a random location
    int rr = rand() % ROWS;
    int cc = rand() % COLS;
    log << "Walk to " << rr << " " << cc << endl;
    dwarf.start_walk(rr, cc);
    return;
  }
}
```
The above function gets the current dwarf coordinates *(r, c)*, checks if there is a `PINE_TREE` at the coordinates *(r, c+1)*,
which corresponds to the east direction (to the right from the dwarf).
If there is indeed a tree, the dwarf schedules a chopping action in the `EAST` direction.
Otherwise, if there is no pine trees there, it picks a random point on the map and schedules a walking action in that direction.

Notice that in the above code, we do `return;` right after scheduling an action. 
This is not required, but is advised to do, because once an action is scheduled,
the rest of the code in the `onAction` function will not do anything to the dwarf (unless you want to change global state). 
So, it is suggested to return from the function immediately after calling action-scheduling functions 
(`start_walk`, `start_chop`, `start_build`, and `start_pick`).

This is not a very efficient way to chop trees. In the part A of the project, your goal is to improve the dwarf's logic to
collect lumber more efficiently.



## Part A. Collect lumber
![](https://i.imgur.com/vINjXn2.png){: .centered}

Improve the file `bot.cpp` so that the dwarf collects lumber more efficiently. In this part of the assignment, you have only one dwarf, and you will get 
more of them in the following parts B and C.

The program shows current time in the display area between the map and the log window. 
The program starts simulation at 6:00 in the morning of the day 1. It stops 18 hours later at 21:00 at night (we use the 24-hour time format).

**Your goal** is to collect **at least 100 of lumber** in these 18 hours.
The amount of collected lumber is shown in the top-left corner of the window.

Reminding that to compile code:
```
make
```
To run:
```
./dwarves
```

Submit your `bot.cpp` code through Gradescope.

Start the file with a comment that contains your name and a short program description, for example:

```c++
/*
Author: your name
Course: CSCI-135
Instructor: their name
Assignment: title, e.g., Project 3

Here, briefly, at least in one or a few sentences
describe what the program does.
*/
```

### Hints
One suggestion for part A is to implement a helper function
```c++
bool isNextToATree(Dwarf & dwarf, int r, int c);
```
which should return `true` if there is at least one tree adjacent to the location *(r,c)*, that is, there is a `PINE_TREE` or an `APPLE_TREE`
at *(r+1,c)*, *(r-1,c)*, *(r,c+1)*, or *(r,c-1)*. Otherwise, return `false`.

Then the main `onAction` function can work as follows:
- If the dwarf is already adjacent to a tree, they should chop in its direction. 
- Otherwise, you should look for an empty location with trees nearby and walk towards that point. 
(The above function can be quite helpful for this task.)

Feel free to define more helper functions when you feel they can be helpful to express your program in a more concise and clear fashion.

Also, note that the `dwarf.start_walk` action will not work if the destination point is non-empty (blocked by a tree or by another dwarf). 
So, when you start this action, the destination point should be empty, and in this task, adjacent to a tree.

## Part B. Build an outpost
![](https://i.imgur.com/QY8l2L1.jpg){: .centered}

Before you start this part, we recommend you make a new copy the entire `dwarves` directory, 
because your `bot.cpp` file for this part, most likely, will be different from the code you used in part A.
Making a new copy of the folder can help you keep your part A and part B code independent. 

For this task, run the program with the option `b` as follows:
```
./dwarves b
```
You will see that you get 6 dwarves this time. 
The `bot.cpp` file works the same way as before, but now it schedules the actions of all 6 dwarves.

In this part, you will practice building a defensive fence structure. 
Use the action `dwarf.start_build(dir)` to schedule construction in the direction `dir`. The cost of one fence is 10 lumber.
If you start building without having enough lumber or the place where you build is not empty, the dwarf will become idle
and no lumber will be spent. You can call function `dwarf.lumber()` to find how much lumber your dwarves.

**The goal** of this part is to **build a contiguous defensive structure of 30 or more fences**, for example, a rectangle 5x6 would work:
```
# # # # # #
# # # # # #
# # # # # #
# # # # # #
# # # # # #
```
Any irregular shape will work too, as long as it remains contiguous and consists of 30 or more fence pieces:
```
  #
# # # # # #
# #     # # #
  #         #
  #     # # #
  # # # # # #
    # # #   # #
        #
```
However, fences touching diagonally don't count as a contiguous structure. For example, below we see three structures of size 9 each 
(not a single structure of size 27):
```
      # # #
      # # #
      # # # 
# # #       # # #
# # #       # # #
# # #       # # #
```

If your structure is smaller than 30, you will be getting partial credit proportional to the size of the largest structure you have. 
For example, the structure above with fences touching diagonally will give you only
(9/30) of the maximum number of points, because the largest structure is size 9.

The total amount of lumber you will need for this task is 30 x 10 = 300. 

Submit your program `bot.cpp` through Gradescope. Start the file with the same preamble comment as in Part A.

## Part C. Survive seven days
![](https://i.imgur.com/oFKf5qw.jpg){: .centered}

Before you start this part, we again recommend you make a new copy of the `dwarves` directory. 
We expect that your `bot.cpp` file for this part will be different from the versions you wrote in Parts A and B. 

### How to run the program and custom map dimensions

To run the program for part C, use option `c`:
```
./dwarves c
```
There is also a more advanced way to start the program with custom map size:
```
./dwarves c ROWS COLS
```
Replace `ROWS` and `COLS` in the above command with actual numbers, like this:
```
./dwarves c 27 33
```
We will be testing your code on maps of size between 25 and 35.
The number of dwarves in this part is also randomized and can be equal to 6, 7, or 8.
Your program must work correctly for these map dimensions and dwarf numbers.

### Days, nights, and zombies

When you run the program, it does not stop at 21:00 at the end of the first day. Instead, it will run for 7 days.

Each day consists of two parts:
- **Daytime** from 6:00 to 21:00, and
- **Nighttime** from 21:00 to 6:00 of the next day.

At nighttime, zombies come. 
There are two types of them: `ZOMBIE` and `PUMKIN_ZOMBIE`. 
You cannot attack them, but they cannot go through fences, so it can be a good idea to build a shelter. 
In the morning, all zombies quickly die, and pumpkin zombies leave pumpkins that can be picked up. 

Zombies can be identified using the function `dwarf.look(row, col)`. It will return `ZOMBIE` or `PUMPKIN_ZOMBIE` if they are at the location *(row, col)*.

Use the action `dwarf.start_pick(dir)` to pick up a pumpkin. The same command can be used to pick apples from apple trees.

If at any time you will need to remove a fence segment, it can be done with the chopping action, `dwarf.start_chop(dir)`. 
This will give you 10 lumber back, which you can use later to build a new fence.

**The goals** (checked at the end of the 7th day):
- (20%) All dwarves must survive,
- (20%) Must build a contiguous fence structure of size 30 or more,
- (20%) Must collect at least 35 pumpkins,
- (20%) Must collect at least 1000 apples.

Partial completion of the goals give partial credit (proportional to the degree of completion).

Exceeding the required goal (e.g. by building a bigger structure or collecting more apples and pumpkins) will give small extra credit.

Submit your program `bot.cpp` through Gradescope. Start the file with the same preamble comment as in Parts A and B.

## Competing with your classmates / Leaderboard
![](https://i.imgur.com/tmMF7rm.jpg){: .centered}

This project is more open-ended than the previous ones. To encourage clever solutions and ingenuity on your part,
in addition to the normal grade, we also run a tournament, ranking your programs' performance. The authors of the best programs
will receive **additional prizes** (in the form of extra grade bonus), as well as bragging rights, of course, if you will.

The **Leaderboard** will be shown in your Gradescope submission, where you can see the relative performance of your code.

To submit your code, you will be required to provide a **pseudonym** that will be shown instead of your real name. Please choose pseudonyms not revealing 
your real name. If you want a reasonable suggestion, see these generators, for example:
- [Random nickname](http://www.fantasynamegenerators.com/nicknames.php)
- [Random dwarf name](http://www.fantasynamegenerators.com/dwarf_names.php)
- [Random hobbit name](http://www.fantasynamegenerators.com/hobbit_names.php)
- [Random zombie name](http://www.fantasynamegenerators.com/zombie-types.php)

Late submissions are excluded from participating in the tournament, and also not receiving any bonus points above the points limit.
Otherwise, the usual lateness policy applies.

## How to submit your programs

### Everything should be submitted through Gradescope.
Upload only `bot.cpp`, separately for each part. Don't include any other files or executables.   
You have to provide a pseudonym when submitting the file for part C, which will be shown in the Leaderboard. 
The pseudonym should not reveal your real name, some suggestions for generating fun nicknames are listed above.

<br />
