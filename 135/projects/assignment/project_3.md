---  
layout: myDefault
title: PROJECT 3
---   

# Project 3: Banking 101, The First Step in Saving -- Classes

![bank](./bank.jpg)

_**After your investment into MicroHard and its Word application went into the mud, I heard that you've all given up on tech investments. Fortunately, there is a new endeavour to explore... finance! If watching Hamilton on Broadway 5 times (and a bunch more after it was on a certain streaming service) has taught you anything, it's that banks are a successful and profitable venture. No better time to spin it up after all the drama with a certain genre of online currency.**_

## Introduction

For this project you will be creating Object classes with public and private member variables and methods.

### Here are some additional resources on Classes
 - CodeBeauty [Part 1](https://youtu.be/iVLQeWbgbXs), [Part 2](https://youtu.be/1LGJSRFrxqQ)
 - [Suraj Sharma](https://youtu.be/lrMaVM3eZOo)

---

### Implementation:


**Work incrementally!** Work through the tasks sequentially (implement and test). Only move on to a task when you are positive that the previous one has been completed correctly. Remember that the **function prototypes must be exactly as specified in this project specification**. This is a contract, it gives you all the information necessary to complete this assignment correctly. If you don't understand this project specification and its requirements, ask for clarification before you proceed. _Remember to make parameters read-only when appropriate._

---

## Task 1: Opening an Account

![college](./college.jpg)

Define and implement the `Account` class with a header and a source file (this will be the assumption from now on: when you implement a class, you will have two files .hpp and .cpp).

The `Account` class **must** have the following information stored in their own _private member variables_:

```
   The first name of the Account owner (as a string)
   The last name of the Account owner (as a string)
   The 8-digit account number (as a string)
   The 4-digit pin number (as a string)
   The account balance (as an integer as we will not deal with cents)
```

The `Account` class **must** have the following  _private member function_ used to generate the Account Number when an Account object is created:
```c++
std::string Account::generateAccountNumber(){
    std::string an_str = "";
    for(int i{0}; i < 8; i++ ){
        int temp = rand() % 10;
        an_str += std::to_string(temp);
    }
    return an_str;
}
```

**HINT: You will need to include the `<string>` library into your `Account.hpp` file.**

The `Account` class **must** contain _public member functions_ that do the following:

### Constructors

```
    /**
        Default Constructor

        @post           : Sets the member variables that holds the first name and last name of the Account to "anonymous"
                          Sets the pin to "0000"
                          Calls the generateAccountNumber function to set the member variable that holds it
                          Sets the account balance member variable to a default value of 0
    */
    Account


   /**
      Parameterized constructor.
      @param            : The first name of the Account owner
      @param            : The last name of the Account owner
      @param            : The 4-digit pin for the account

      @post             : Sets the member variables that holds the first name and last name of the Account to what was passed by the user
                          Validates that the pin passed by the user is 4 digits long before setting its respective member variable to that value, if it fails this check then set the pin to "0000"
                          Calls the generateAccountNumber function to set the member variable that holds it
                          Sets the account balance member variable to a default value of 0
   */
   Account
```

### Mutators (set)
```
    /**
        @param      : the new first name of the Account owner

        @post       : sets the member variable that holds the first name of the Account owner to the passed in value
    */
    void setFirstName

    /**
        @param      : the new last name of the Account owner

        @post       : sets the member variable that holds the last name of the Account owner to the passed in value
    */
    void setLastName

    /**
        @param      : the new pin for the Account

        @return     : returns true if the pin was validated and set, otherwise return false and do not change the current pin
        @post       : sets the member variable that holds the pin of the Account the passed in value if it has a length of 4, else leave 
                      it as is
    */
    bool setPin
```

### Accessors (get)

```
    /**
        @return     : the first name of the Account owner
    */
    std::string getFirstName

    /**
        @return     : the last name of the Account owner
    */
    std::string getLastName

    /**
        @return     : the account number of the Account
    */
    std::string getAccountNumber

    /**
        @return     : the pin of the Account
    */
    std::string getPin

    /**
        @param      : the pin of the Account

        @return     : if the pin passed by the user is equal to the pin stored in the Account, return the accounts balance
                      if not, return -1
    */
    int getBalance
```

### Transactions

```
    /**
        @param      : the amount being transacted (negative for withdrawl and positive for deposit)
        @param      : the pin of the Account

        @return     : if the pin passed by the user is equal to the pin stored in the Account, update the account balance by what is 
                      passed by the user and return true
                      if not, return false and do not update the accounts balance
        
        If the transaction results in the amount balance being less than 0, then the transaction should not go through
        and return false.
    */
    bool transaction
```

### Compilation && Delivarables

## Compile

First create a main file that includes `Bank.hpp` then run the following line in your terminal:

`g++ Bank.cpp Account.cpp main.cpp -std=c++17`

## Files for the Autograder

_You will be submitting `Account.hpp` and `Account.cpp`._

---

## Task 2: Starting an Account

![bernie](./bernie.png)

Define and implement the `Bank` class with a header and a source file (this will be the assumption from now on: when you implement a class, you will have two files .hpp and .cpp).

**HINT: You will need to include the `"Account.hpp"` class into your `Bank.hpp` file.**

The `Bank` class **must** have the following information stored in their own _private member variables_:

```
   An array of Accounts (with a size of 200)
   The total number of existing accounts (as an integer)
```

The `Bank` class **must** contain _public member functions_ that do the following:

### Constructors

```
    /**
        default constructor.
        @post             : Sets the member variables that holds the total number of existing Accounts to 0
    */
    Bank
```

### Account Functions

```
    /**
        @param          : The first name of the Account owner
        @param          : The last name of the Account owner
        @param          : The 4-digit pin for the account

        @return         : returns the Account Number if the Account was created and added to the array, 
                          otherwise return "-1"

        The Account should be created (calling the Account constructor) and added to the array of Accounts 
        if there is room in the array. Remember to update your member variables as appropriate.
    */
    bool createAccount

    /**
        @param          : the account number for the Account being removed

        @return         : returns true if the Account was removed, otherwise return false
        
        If the provided account number does not correspond to an Account in the array, then
        you cannot remove an Account.
    */
    bool removeAccount

    /**
        @param          : The amount being withdrawn
        @param          : The account number of the Account the money is being withdrawn from
        @param          : The 4-digit pin for the Account

        @return         : returns true if the transaction was completed, otherwise return false
        
        You should first validate that the pin corresponds to the provided account number.
        If so then utilize the Accounts transaction function, passing in the provided amount
        as a negative (since a withdrawl is removing money from an account). If either the 
        validation step failed or the transaction failed, then nothing should happen and the 
        function should return false as well.
    */
    bool withdraw

    /**
        @param          : The amount being deposited
        @param          : The account number of the Account the money is being deposited to
        @param          : The 4-digit pin for the Account

        @return         : returns true if the transaction was completed, otherwise return false
        
        You should first validate that the pin corresponds to the provided account number.
        If so then utilize the Accounts transaction function, passing in the provided amount
        as a positive (since a deposit is adding money to an account). If either the validation 
        step failed or the transaction failed, then nothing should happen and the function 
        should return false as well.
    */
    bool deposit

    /**
        param           : The account number of the Account the user wants the balance of
        @param          : The 4-digit pin for the Account

        @return         : returns the account balance of the Account, or -1 if the validation fails

        You should first validate that the pin corresponds to the provided account number.
        If so then retrieve the account balance and return it, if not then return -1.
    */
    int getAccountBalance
```

### Compilation && Delivarables

## Compile

First create a main file which should contain all the testing you do prior to submitting to gradescope. The main file should also include `Bank.hpp`. After creating the main file run the following command in your terminal:

`g++ Bank.cpp Account.cpp main.cpp -std=c++17`

## Files for the Autograder

_You will be submitting `Bank.hpp` and `Bank.cpp`._
