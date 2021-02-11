---  
layout: myDefault
title: PROJECT 1
---  

# Project 1: Cars 4 Kids
![test_pic](./garage.jpg)

You are now rich enough to buy all the bikes you want, but now you can have other vehicles too! But wait you need to you need store them in a garage. To do so you will use the class, `Garage`, that you will modify and implement. You will proceed to create different children of the `Vehicle` class through inheritance (these are `Truck`, `Car`, `Bus`, and `Motorcycle`), which will collectively represent every type of item with which you can populate a `Garage` object. For this project you will use separate compilation with g++ to link multiple classes into one executable, and, in order to successfully complete this project, you **must** understand the prerequisite material from Project 0, the concept of dynamic memory allocation and inheritance.

---

### Some additional resources

- Dynamic Memory Allocation:  
    [C++ Documentation](http://www.cplusplus.com/doc/tutorial/dynamic/)  
    [Tutorialspoint](https://www.tutorialspoint.com/cplusplus/cpp_dynamic_memory.htm)  
    
- Inheritance:  
    [Geeks for Geeks](https://www.geeksforgeeks.org/inheritance-in-c/)  
    [Caleb Curry](https://youtu.be/_rzEUwv2-eQ)

### Implementation:

**Work incrementally!** Work through the tasks sequentially (implement and test). Only move on to a task when you are positive that the previous one has been completed correctly. Remember that the names of function prototypes and member variables must exactly match those declared in the respective header file when implementing a class. 

---

### Required Files
[Vehicle.hpp](Vehicle.hpp){:target="_blank"}  
[Vehicle.cpp](Vehicle.cpp){:target="_blank"}  
[Garage.cpp](Garage.cpp){:target="_blank"}  
  
---

## Task 1: Me Mum's Car vroom vroom, and her bike, truck, and bus too.
*Understanding the basics of a vehicle is the easy part. Understanding the complexities and differences between vehicles, that's what you have been tasked to recognize.*

Define and implement the `Car`, `Motorcycle`, `Bus`, and `Truck` classes as inherited children of the `Vehicle` class.  
Let's get the easy ones out of the way!

Class `Car` must contain the following methods:
```
   /**
      Calls the parameterized constructor Vehicle(...)
      Uses setGarageSpaces function to set garage space to 2.
      Uses setNumWheels function to set wheels to 4.
   */
   Car(std::string name, std::string manufacturer, double top_speed, double weight, double mpg);
   
```
No private members to worry about here ;)  

Class `Motorcycle` must contain the following methods:
```
   /**
      Calls the parameterized constructor Vehicle(...)
      Uses setGarageSpaces function to set garage space to 1.
      Uses setNumWheels function to set wheels to 2.
   */
   Motorcycle(std::string name, std::string manufacturer, double top_speed, double weight, double mpg);

```
Still no private members, pretty easy right? =P  

Class `Bus` must contain the following methods:
```
   /**
      Calls the parameterized constructor Vehicle(...)
      Remember to set the number of seats.
      Uses setGarageSpaces function to set garage space to 4.
      Uses setNumWheels function to set wheels to 8.
   */
   Bus(std::string name, std::string manufacturer, double top_speed, double weight, double mpg, size_t number_seats);

   /**
      returns the number of seats
   */
   size_t getNumSeats() const;

```
We have a private member variable now!
```
   double number_seats;
```
Class `Truck` must contain the following methods:
```
   /**
      Calls the parameterized constructor Vehicle(...)
      Remember to set the cargo capacity.
      Uses setGarageSpaces function to set garage space to 8.
      Uses setNumWheels function to set wheels to 18.
   */
   Truck(std::string name, std::string manufacturer, double top_speed, double weight, double mpg, double cargo_capacity);

   /**
      Add the weight of the cargo the current weight_of_held_cargo_ ONLY if it does not exceed the capacity.
      Return true if you manage to add the cargo successfully, otherwise return false.
   */
   bool add_cargo(double weight_of_cargo);
   
   /**
      If weight_of_held_cargo_ isn't 0 then set it to 0, return true if you manage to clear it or else return false!
   */
   bool clear();

   /**
      return the cargo_capacity_ variable
   */
   double getCargoCapacity() const;
   
   /**
      returns the weight_of_held_cargo_ variable
   */
   double getHeldCargoWeight() const;
```
That escalated quickly... Here are your private variables:
```
   double cargo_capacity_;
   double weight_of_held_cargo_;
```

---

## Task 2: Here in my garage. 
Wow! You're like a very lame version of iron man now, being able to build all these sweet rides. Great! Time to store these beauties.
Define the `Garage` class in a file entitled `Garage.hpp`. As a preliminary, our concept of a garage is composed of an array that is filled from front to back. We consider each index in this array as a garage "space," where different vehicle subclasses occupy a different number of garage "spaces" respectively. 

**Motorcycles occupy 1 space**
**Cars occupy 2 spaces**
**Busses occupy 4 spaces**
**Trucks occupy 8 spaces**

Implement the class in a file entitled `Garage.cpp`.  You must include but are not limited to the following methods and members:
```
private:
   /**
      Changes the contents of arr_ to have all non-null vehicles strictly at the end of the array and all inserted vehicles at the beginning of the array. HINT: create a new array and repoint arr_; don't do this "in-place"
   */
    void arrange();

    /* a pointer to an array of vehicles - HINT: dynamically allocate the actual array */
    Vehicle *arr_;

    /* the number of vehicle slots in the caller */
    size_t capacity_;

    /* the number of occupied vehicle slots in the caller */
    size_t num_vehicles_;


public: 

   /* Parameterized constructor with a default argument for capacity of 12 */
    Garage(size_t capacity = 12);

   /** 
      Inserts @param to_add into the number of spaces that correspond to its type 
      into arr_[]; must insert from front to back

      As an example, if we had a garage that already contains an Audio R8 (a car)
      the default garage would have an Audio R8 object in both its first and second indeces.

      MUST INCREMENT num_vehicles_
      MUST RETURN FALSE IF isFull()
      MUST RETURN FALSE IF num_vehicles_ + to_add.getSpaces() > capacity_
    */    
    bool addVehicle(Vehicle to_add);


    /** 
      Replaces any object in arr_ that == @param to_remove with null::v

      MUST RETURN FALSE IF num_vehicles_ == 0
      MUST DECREMENT num_vehicles_
      MUST CALL arrange() immediately before return statement
    */
    bool removeVehicle(Vehicle to_remove);

    /**
      HINT: use what you already have!
    */
    bool swapVehicles(Vehicle swap_in, Vehicle swap_out);

    
    bool isFull() const;

    /** 
      Outputs the contents of the caller such that the manufacturer and vehicle name are only printed once per vehicle in arr_; for example if a garage object contains the aforementioned
      Audi R8 a call to display() will print 

      Audi R8

      even though arr_ contains the vehicle in two positions - also print each vehicle on its own line

    */
    void display() const;
```

---
### Submission:
**You will submit the following files**:  
`Bus.cpp`  
`Bus.hpp`  
`Car.hpp`
`Car.hpp`  
`Garage.cpp`  
`Garage.hpp`  
`Motorcycle.cpp`  
`Motorcycle.hpp`  
`Truck.cpp`  
`Truck.hpp`  

Your project must be submitted on Gradescope. Although Gradescope allows multiple submissions, it is not a platform for testing and/or debugging and it should not be used for that. You MUST test and debug your program locally. Before submitting to Gradescope you MUST ensure that your program compiles (with g++) and runs correctly on the Linux machines in the labs at Hunter (see detailed instructions on how to upload, compile and run your files in the “Programming Rules” document). That is your baseline, if it runs correctly there it will run correctly on Gradescope, and if it does not, you will have the necessary feedback (compiler error messages, debugger or program output) to guide you in debugging, which you don’t have through Gradescope. “But it ran on my machine!” is not a valid argument for a submission that does not compile. Once you have done all the above you submit it to Gradescope.

---

### Testing
How to compile:  
```
g++ Vehicle.cpp Bus.cpp Car.cpp Garage.cpp Motorcycle.cpp Truck.cpp <test main file> -std=c++17
```

![test_pic](./test_pic.png)

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

### Important
You must start working on the projects as soon as they are assigned to detect any problems with submitting your code and to address them with us **well before** the deadline so that we have time to get back to you **before** the deadline. This means that you must submit and resubmit your project code **early** and **often** in order to resolve any issues that might come up **before** the project deadline.  
**There will be no negotiation about project grades after the submission deadline.**
  
---  
  
  
