---  
layout: myDefault
title: PROJECT 2
---  

# Project 2 &nbsp; Build The Bag

![The Bag](./bag.png)


Your objective for this project is to implement another high level shopping simulator. Yay! This time instead of `DynamicArray` you will create an `ArrayBag`. For this project you will use separate compilation with g++ to link multiple classes into one executable, and, in order to successfully complete this project, you **must** understand the prerequisite material from earlier projects, the bag abstract data type, and the concept and implementation of overloading operators.

Here are some additional resources:

---
**Bag ADT**

>[Southern Illinois University](./http://www2.cs.siu.edu/~tmengistu/Courses/Fall2015/CS220/Slides/Abstract%20Data%20Types.pdf)

>[University Of Minnesota Duluth](./https://www.d.umn.edu/~jallert/cs1/projects/TheBagADT.pdf)


**Operator Overloading**

>[C++ Documentation](./https://en.cppreference.com/w/cpp/language/operators)

>[Microsoft Documentation](./https://docs.microsoft.com/en-us/cpp/cpp/operator-overloading?view=vs-2019)
---

	
### **Implementation:**

**Work incrementally!** Work through the tasks sequentially (implement and test). Only move on to a task when you are positive that the previous one has been completed correctly. Remember that the names of function prototypes and member variables must exactly match those declared in the respective header file when implementing a class. 


---

Starter Code: [Starter Code](starter_code.zip)

<h3 style="text-align: center; color: #7a0619;">Task 1: The Bag</h3>

*Your parents were not happy that you forgot to bring the bread last time; so they have decided to come with you to buy groceries this time. They leave you alone to do some shopping on your own. There was no cart available so they gave you a bag instead.*

Create an ArrayBag template class from scratch. This will require you to create two files: `ArrayBag.hpp` for the interface and `ArrayBag.cpp` for the implementation. The purpose of the ArrayBag class is to serve as the base class of the ShoppingCart class that has been provided to you in the given code; essentially, ArrayBag is meant to replace the DynamicArray of the previous project. Thus, you can test the final output of this project in the same way that you tested that of your previous project. The ArrayBag class **must** contain the following `protected `members:

	static const int DEFAULT_CAPACITY = 200;  // max size of items_ 
    ItemType items_[DEFAULT_CAPACITY];        // items in the array bag
    int item_count_;                          // Current count of items in bag

    /**
     @param target to be found in items_
     @return either the index target in the array items_ or -1,
     if the array does not containthe target.
     **/
    int getIndexOf(const ItemType &target) const;


Your ArrayBag class **must** contain the following `public` members:


    /** 
     Default Constructor
     item_count_  <- 0
    **/
    ArrayBag();

    /**
     @return item_count_ : the current size of the bag
    **/
    int getCurrentSize() const;

    /**
     @return true if item_count_ == 0, false otherwise
     **/
    bool isEmpty() const;

    /**
     @return true if new_entry was successfully added to items_, false otherwise
     **/
    bool add(const ItemType &new_entry);

    /**
     @return true if an_entry was successfully removed from items_, false otherwise
     **/
    bool remove(const ItemType &an_entry);

    /**
     @post item_count_ == 0
     **/
    void clear();

    /**
     @return true if an_entry is found in items_, false otherwise
     -> THIS METHOD MUST CALL getIndexOf() <-
     **/
    bool contains(const ItemType &an_entry) const;

    /**
     @return the number of times an_entry appears in items_
     **/
    int getFrequencyOf(const ItemType &an_entry) const;


*Hint:* This is a template class. Do not forget to place 
    ```template <typename ItemType> ```
before each function when you are implementing them. Also do not forget to `#include` the `.cpp` file at the end of your class definition.

---
<h3 style="text-align: center; color: #7a0619">Task 2: To Compare Or Not To Compare... And Other Operations</h3>

*After a while you decide to meet up with your parents. All of you begin comparing your items to decide what to keep, throw away, or add. Something you note - they forgot the bread! You choose not to remind them.*

This is where the fun starts!

Define the following operator overloads in `ArrayBag.hpp` and implement them accordingly in `ArrayBag.cpp`.

```
/** 
    Implements Set Union
    The union of two sets A and B is the set of elements which are in A,
    in B, or in both A and B.
    @param a_bag to be combined with the contents of this (the calling) bag
    @post adds as many items from a_bag as space allows
    lhs += rhs, the left hand side (the calling side) of the operator will be modified. 
**/
void operator+=(const ArrayBag<ItemType> &a_bag);

/** 
    Implements Set Difference
    The (set) difference between two sets A and B is the set that
    consists of the elements in A which are not elements of B.
    @param a_bag to be subtracted from this (the calling) bag
    @post removes all the data from items_ that is also found in a_bag
    lhs -= rhs, the left hand side (the calling side) of the operator will be modified, remove elements from lhs that are also elements of the rhs (a_bag). 
**/
void operator-=(const ArrayBag<ItemType> &a_bag);

/** 
    Implements Set Intersection
    The intersection of two sets A and B is the set that
    consists of the elements that are in both A and B.
    @param a_bag to be intersected with this (the calling) bag
    @post items_ no longer contains elements not found in a_bag
    lhs /= rhs, the left hand side (the calling side) of the operator will be modified, remove elements from lhs that are NOT elements of the rhs (a_bag).
**/
void operator/=(const ArrayBag<ItemType> &a_bag);

/**
    Implements Equal Comparison
    Two ArrayBags are equal to each other if they contain the same elements
    the order of the elements do not matter.
    @param a_bag to be compared with this (the calling) bag
    @return true if the two bags contain the same elements, false otherwise
    Note that in order for two bags to be equal the must be of equal sizes.
**/
bool operator==(const ArrayBag<ItemType> &a_bag);

/**
    Implements Not Equal Comparison
    Opposite of the == operator, if two bags have at least one element different they are not equal
    @param a_bag to be compared with this (the calling) bag
    @return true if two bags have a differing element, false if they are equal
    In this case we can be sure that two arrays are not equal if they have different sizes.
**/
bool operator!=(const ArrayBag<ItemType> &a_bag);
```

---
<h3 style="text-align: center; color: #7a0619">Task 3: The Art of The Cart 2</h3>

<center> 

![The Return of The Cart](./cart2.png)
</center>

*Ah yes, a cart at last. You all place your items into the cart. I guess you can say, a lot of weight has been lifted from your shoulders. You see that your friends' family has also been shopping in the same grocery store. Your friend comes over to say hi, but you know all too well she only cares about how much money you are spending. She is very egotistical.*

Define the following operator overloads in `ShoppingCart.hpp` and implement them accordingly in `ShoppingCart.cpp`.

```
/**
    Implements Greater Than Comparison
    A ShoppingCart is greater than another ShoppingCart if the total cost of its items is greater.
    @param a_cart to be compared with this (the calling) cart
    @return true if the total cost of this (the calling) cart is greater than the total cost of items in a_cart.
**/
bool operator>(ShoppingCart<ItemType> a_cart);

/**
    Implements Less Than Comparison
    A ShoppingCart is less than another ShoppingCart if the total cost of its items is less.
    @param a_cart to be compared with this (the calling) cart
    @return true if the total cost of this (the calling) cart is less than the total cost of items in a_cart.
**/
bool operator<(ShoppingCart<ItemType> a_cart);

```



---

### **Testing**
How to compile: 
 `g++ <test main file> -std=c++17` 


You must always implement and test you programs **INCREMENTALLY!!!**

#### ***What does this mean?***

-Implement and test one method at a time.
-For each class: 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1. Implement one function/method and test it thoroughly (multiple test cases + edge cases if applicable) 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2. Implement the next function/method and test in the same fashion. 

#### ***How do you do this?***
 Write your own main() function to test your classes. In this course you will never submit your test program, but you must always write one to test your classes. Choose the order in which you implement your methods so that you can test incrementally (i.e. implement mutator functions before accessor functions). Sometimes functions depend on one another. If you need to use a function you have not yet implemented, you can use stubs: a dummy implementation that always returns a single value for testing (don’t forget to go back and implement the stub!!! If you put the word STUB in a comment, some editors will make it more visible. 
 
#### ***Grading Rubric*** 
 • **Correctness 80%** (distributed across unit testing of your submission)
 • **Documentation 10%**
 • **Style and Design 10%** (proper naming, modularity, and organization) 

 **Important:** You must start working on the projects as soon as they are assigned to detect any problems with submitting your code and to address them with us **well before** the deadline so that we have time to get back to you **before** the deadline. This means that you must submit and resubmit your project code **early** and **often** in order to resolve any issues that might come up **before** the project deadline.
##### There will be no negotiation about project grades after the submission deadline. #####

#### Submission:
You will submit **the following files**:

* ArrayBag.hpp 
* ArrayBag.cpp
* ShoppingCart.hpp
* ShoppingCart.cpp

Your project must be submitted on Gradescope. Although Gradescope allows multiple submissions, it is not a platform for testing and/or debugging and it should not be used for that. You MUST test and debug your program locally. Before submitting to Gradescope you MUST ensure that your program compiles (with g++) and runs correctly on the Linux machines in the labs at Hunter (see detailed instructions on how to upload, compile and run your files in the “Programming Rules” document). That is your baseline, if it runs correctly there it will run correctly on Gradescope, and if it does not, you will have the necessary feedback (compiler error messages, debugger or program output) to guide you in debugging, which you don’t have through Gradescope. “But it ran on my machine!” is not a valid argument for a submission that does not compile. Once you have done all the above you submit it to Gradescope.
