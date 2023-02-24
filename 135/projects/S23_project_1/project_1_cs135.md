---  
layout: myDefault
title: PROJECT 1
---   
<p style="text-align: center; font-style: italic;">Important</p>
You must start working on the projects as soon as they are assigned to detect any problems and to address them with us well before the deadline so that we have time to get back to you before the deadline.  

**There will be no extensions and no negotiation about project grades after the submission deadline.**

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


**Work incrementally!** Work through the tasks sequentially (implement and test). Only move on to a task when you are positive that the previous one has been completed correctly. Remember that the **function prototypes and global-variables must be exactly as specified in this project specification**. Lastly, **do NOT use EOF(End of File), vector, or any library that we haven't learned yet in class.** If you don't understand this project specification and its requirements, ask for clarification before you proceed. **TEST YOUR CODE BEFORE SUBMITTING!!!**

---

## Task A: Dictionary using Arrays
<p align="center">
    <img src="horrible.jpg" alt="horrible" width="600"/>
</p>

A regular dictionary contains the words and the definitions. In addition to the words and the definitions, we will also store the part-of-speech (pos). The words, definitions and pos are going to be stored in Arrays. Use these global-variables in your code outside `main()` function:

``` Cpp
const int g_MAX_WORDS = 1000;
int g_word_count = 0;

string g_words[g_MAX_WORDS];
string g_definitions[g_MAX_WORDS];
string g_pos[g_MAX_WORDS];
```

Create a C++ file and add the following function:

```Cpp
/*
    @param            :   The string with the `filename`
    @post             :   Reads the words, definitions
                          pos into the global-arrays 
                          and set the value of `g_word_count`
                          to the number of words read
*/
void readWords(string filename);
```
Here's an example text file:
```
WORD POS : DEFINITION
Grumpy Adjective : bad-tempered and irritable
Professor Noun : a teacher of the highest rank in a college or university
Does Verb : perform (an action, often of unspecified nature)
Nothing Adverb : not at all
```

Example:

Calling `readWords()` on the above text file will modify the global variables like this:

```
g_MAX_WORDS: 1000

g_word_count: 5

g_words: ["WORD", "Grumpy", "Professor", "Does", "Nothing"]

g_pos: ["POS", "Adjective", "Noun", "Verb", "Adverb"]

g_definitions: [
    "DEFINITION",
    "bad-tempered and irritable", 
    "a teacher of the highest rank in a college or university", 
    "perform (an action, often of unspecified nature)", 
    "not at all"
]
```
*Hint: Which lab was this covered in again?*

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
                          `g_words` global-array. Returns
                          -1 if the word is not found
    @post             :   Find the index of given `word`
                          in the `g_words` array. Return -1
                          if word is not in the array
*/
int getIndex(string word);

/*
    @param            :   The string with a query word
    @return           :   Return the string definition of
                          the word from  `g_definitions`
                          global-array. Return "NOT_FOUND" if
                          word doesn't exist in the dictionary
    @post             :   Find the definition of the given `word`
                          Return "NOT_FOUND" otherwise
*/
string getDefinition(string word);

/*
    @param            :   The string with a query word
    @return           :   Return the string part-of-speech(pos) 
                          from the `g_pos` global-array. Return
                          "NOT_FOUND" if the word doesn't exist
                          in the dictionary.
    @post             :   Find the pos of the given `word`
                          Return "NOT_FOUND" otherwise
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

*Credits: Genady Maryash, Yoomin Song, Sadab Hafiz, Ryan Vaz*
