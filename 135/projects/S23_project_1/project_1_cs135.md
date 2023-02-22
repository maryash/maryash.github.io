---  
layout: myDefault
title: PROJECT 1
---   

# Project 1: Hang in there!

_**Welcome students! You've been working on the labs and homeworks so far. Its time to take it up a notch. Use everything you've learned so far and hang in there!**_
<p align="center">
    <img src="hangin.gif" alt="hangin"/>
</p>

## Introduction

Using what you've learned, we will create a dictionary. Later, we will implement Hangman using the dictionary.

Things you need to know for this project: [Arrays](https://www.geeksforgeeks.org/arrays-in-c-cpp/), [Functions](https://www.geeksforgeeks.org/functions-in-cpp/),  [Global-Variables](https://www.geeksforgeeks.org/scope-of-variables-in-c/), [String-Manipulation](https://www.geeksforgeeks.org/substring-in-cpp/)

---
## Implementation:


**Work incrementally!** Work through the tasks sequentially (implement and test). Only move on to a task when you are positive that the previous one has been completed correctly. Remember that the **function prototypes and global-variables must be exactly as specified in this project specification**. Lastly, **do NOT use EOF(End of File), vector, or any library that we haven't learned yet in calss.** This is a contract, it gives you all the information necessary to complete this assignment correctly. If you don't understand this project specification and its requirements, ask for clarification before you proceed. **TEST YOUR CODE BEFORE SUBMITTING!!!**

---  

## Task A: Dictionary using Arrays
<p align="center">
    <img src="horrible.jpg" alt="horrible" width="600"/>
</p>

A regular dictionary contains the words and the definitions. In addition to the words and the definitions, we will also store the parts of speech (POS). The words, definitions and POS are going to be stored in Arrays. Use these global-variables in your code outside `main()` function:

``` Cpp
const int MAX_WORDS = 1000;
int WORD_COUNT = 0;

string WORDS[MAX_WORDS];
string DEFINITIONS[MAX_WORDS];
string POS[MAX_WORDS];
```

Create a C++ file and add the following function:

```Cpp
/*
    @param            :   The string with the `filename`
    @post             :   Reads the words, definitions, 
                          POS into the global arrays, 
                          and set the value of `WORD_COUNT` 
                          to the number of words read
*/
void readWords(string filename);
```
Here's an example text file:
```
WORD POS : DEFINITION
Grumpy adjective : bad-tempered and irritable
Professor noun : teacher of the highest rank in a university
Does verb : perform (an action, often of unspecified nature)
Nothing adverb : not at all
```

Example:

Calling `readWords()` on the above text file will modify the global variables like this:

```
MAX_WORDS: 1000

WORD_COUNT: 5

WORDS: ["WORD", "Grumpy", "Professor", "Does", "Nothing"]

POS: ["POS", "Adjective", "Noun", "Verb", "Adverb"]

DEFINITIONS: [
    "DEFINITION",
    "bad-tempered and irritable", 
    "teacher of the highest rank in a university", 
    "perform (an action, often of unspecified nature)", 
    "not at all"
]
```


Make sure your program produces the correct output by testing the function and global-variables using `main()` function. 

**Note: Only submit single `.cpp` file to gradescope. Remove or comment out the main function from your code before submitting it on gradescope. Otherwise, the autograder will fail.**

---

## Task B: Dictionary Operations
<p align="center">
    <img src="cat.jpg" alt="catto" width="600"/>
</p>
Now that we have the words stored, it is time to provide functions that allow users to use our dictionary. Add and implement the following functions:

```Cpp
/*
    @param            :   The string with a query word
    @return           :   Integer index of the word in 
                         `WORDS` global array. Returns 
                          -1 if the word is not found
    @post             :   Find the index of given `word` 
                          in the `WORDS` array. Return -1 
                          if word is not in the array
*/
int getIndex(string word);

/*
    @param            :   The string with a query word
    @return           :   Return the string definition of 
                          the word from  `DEFINITIONS` 
                          global array. Return "NOT_FOUND" 
                          if word doesn't exist in the dictionary
    @post             :   Find the definition of the given `word`. 
                          Return "NOT_FOUND" otherwise
*/
string getDefinition(string word);

/*
    @param            :   The string with a query word
    @return           :   Return the string part of speech(POS) 
                          from the `POS` global array. Return 
                          "NOT_FOUND" if the word doesn't exist 
                          in the dictionary.
    @post             :   Find the POS of the given `word`. 
                          Return "NOT_FOUND" otherwise.
*/
string getPOS(string word);

/*
    @param            :   The string prefix of a word (the prefix 
                          can be of any length)
    @return           :   Integer number of words found that starts 
                          with the given `prefix`
    @post             :   Count the words that start with the given 
                          `prefix`
*/
int countPrefix(string prefix);
```
Remember to test each function before moving on to implement the next one. Similar to Task A, submit only one `.cpp` file without the `main()` function.

---
