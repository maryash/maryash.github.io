---  
layout: myDefault  
title: PROJECT 0  
---  

# Project 0 &nbsp; This project will be WHEELIE FUN!
![Training Wheel](./wheelie.png)

The objective of this project is to refresh your knowledge of class objects and enums from CSCI 135. This will require you to implement a class, `Motorcycle`, in addition to its private and public member functions, which will be specified in a further section of this document. In order to successfully complete this project, we strongly recommend that you look back to your CSCI 135 coursework as a reference. **You have given the [`Motorcycle.hpp`](Motorcycle.hpp) file; all that you must do is create and successfully write and compile `Motorcycle.cpp`.**  

### Implementation
**Work incrementally!** Work through the tasks sequentially (implement and test). Only move on to a task when you are positive that the previous one has been completed correctly. Remember that the names of function prototypes and member variables must exactly match those declared in the respective header file when implementing a class. 

---
## **Task 1: Buying your very own Motorcycle**
---
*It's 10pm and you are on your way to Walmart for your weekly pillaging of necessities: hand sanitizer, toilet paper, Nutella, and the other usuals. On your way there you meet a biker gang, FBK, at a red light. For a brief moment it looks like they are laughing at you, that is until the light turns green and you accelerate to max speed in record time. Suprised, the bikers rides alongside you, offering you a place in their gang. There is one problem, you do not have a motorcycle. Their leader, C.S. Brian, gives you their contact information and you head to your local bike shop the next day. The owner gives you two options:*

Implement the following default and parameterized constructors:

```
Motorcycle();          // brand_ <- a random bike type
                       // curr_acceleration_ <- bike_details::NONE


Motorcycle(int kind_of_bike);       // initialize all members besides brand_ to the values that 
                                    // they take on in the default contructor

                                    // brand_ <- kind_of_bike
```

*Hint*: Use rand() from the `<stdlib.h>` library to produce random values.
## Task 2: Motorcycle Operations
*Now that you have received your Motorcycle, you want to test its capabilities. Check out how it works! Remember, there is no warranty on your Motorcycle; so if a component doesn't work, it's up to you to fix it! You do not want to embarrass yourself on your first day.*

Implement following getter functions:

```
/**
    return the string that corresponds to the curr_direction_ that the caller faces 
        relative to a cartesian plane; assume that the caller is at position (0,0),
        the degree measure of (1, 0) is 0 degrees, and the degree measure of (-1, 0) is 180 degrees

        "North" == 90
        0 < "Northeast" < 90 
        "East" == 0
        "Southeast" > 270
        "South" == 270
        180 < "Southwest" < 270
        "West" == 180
        90 < "Northwest" < 180
*/
std::string getDirection();

string getBikeType();                               // string version of brand_

float getSpeed();                                   // curr_speed_

float getDistanceTraveled();                        // distance_traveled_

int getAcceleration();                              // curr_acceleration_
```

Implement the following `public` methods:

```

/** 
    updates direction_
    @param degrees: -360 <= degrees <= 360, and if the user enters a number outside of these
                    bounds adjust @param degrees to be within this range
    */
void turn(float degrees);
```

*Hint*: Use the following visualization to influence your implementation of `turn()`.
<center> 

![Relative Location of Bike](./bike.gif)
</center> 



Implement the following `private` method:

```
/**
    alters curr_speed_ depending on curr_speed_, curr_acceleration_, and b_type_

    USE THE FOLLOWING FORMULA: [ (acceleration) / 8 ] + [ (brand) * 17.64 ]
*/
void updateSpeed();
```
## Task 3: Time to hit the road
*Your Motorcycle works as intended and the FBK are awaiting your arrival. It's time to hit the pavement!*

Implement the following public method:
```
/**
    if the current acceleration is not HIGH increase it by one level and call updateSpeed()
*/
void pedal();

/**
    if the current acceleration is not NONE decrease it by one level and call updateSpeed()
*/
void brake();

/**
    given curr_speed_, curr_acceleration_, brand_, and @param float duration,
        calculate the distance traveled during the specified time;
        increment distance_traveled_ by this amount
    @param float duration: time traveled
    @return: updated distance_traveled_
*/
float ride(float duration);
```



---

### Testing
How to compile:
```
g++ <test main file> -std=c++17
```
You must always implement and test you programs **INCREMENTALLY!!!**
What does this mean? Implement and test one method at a time.
* Implement one function/method and test it thoroughly (multiple test cases + edge cases if applicable).
* Implement the next function/method and test in the same fashion.
    **How do you do this?** Write your own `main()` function to test your class. In this course you will never submit your test program, but you must always write one to test your classes. Choose the order in which you implement your methods so that you can test incrementally: i.e. implement mutator functions before accessor functions. Sometimes functions depend on one another. If you need to use a function you have not yet implemented, you can use stubs: a dummy implementation that always returns a single value for testing Don’t forget to go back and implement the stub!!! If you put the word STUB in a comment, some editors will make it more visible.

### Grading Rubric

**Correctness 80%** (distributed across unit testing of your submission)
**Documentation 10%**
**Style and Design 10%** (proper naming, modularity, and organization)

**Important:** You must start working on the projects as soon as they are assigned to detect any problems with submitting your code and to address them with us **well before** the deadline so that we have time to get back to you **before** the deadline. This means that you must submit and resubmit your project code **early** and **often** in order to resolve any issues that might come up **before** the project deadline.
### There will be no negotiation about project grades after the submission deadline. #####
  
### Submission:
You will submit **the following files**:
`Motorcycle.cpp`

Your project must be submitted on Gradescope. Although Gradescope allows multiple submissions, it is not a platform for testing and/or debugging and it should not be used for that. You **MUST** test and debug your program locally. Before submitting to Gradescope you **MUST** ensure that your program compiles (with g++) and runs correctly on the Linux machines in the labs at Hunter (see detailed instructions on how to upload, compile and run your files in the “Programming Rules” document). That is your baseline, if it runs correctly there it will run correctly on Gradescope, and if it does not, you will have the necessary feedback (compiler error messages, debugger or program output) to guide you in debugging, which you don’t have through Gradescope. “But it ran on my machine!” is not a valid argument for a submission that does not compile. Once you have done all the above you submit it to Gradescope.  
  
  
---  
  
