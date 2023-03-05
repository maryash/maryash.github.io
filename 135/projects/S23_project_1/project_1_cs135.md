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

---

## Task C: Dictionary Admin Operations
<p align="center">
    <img src="yeet.jpg" alt="yeeted" width="600"/>
</p>
Languages evolve constantly. Hundreds of new English words are added to the English dictionary each year. Definitions of words change. Thus, we should be able to modify, add and remove words in our dictionary. Besides, don't you want to use your own words for hangman? Add and implement the following functions to your `.cpp` file:

```Cpp
/*
    @param word       :   The string with a new word
    @param definition :   The string with the definition of the
                          new `word`
    @param pos        :   The string with the pos of the new `word`
    @return           :   return `true` if the word is
                          successfully added to the dictionary
                          return `false` if failed (word already
                          exists or dictionary is full)
    @post             :   Add the given `word`, `definition`, `pos`
                          to the end of the respective
                          global-arrays.
                          The word should not be added to the
                          global-arrays if it already exists 
                          or if the array reached maximum 
                          capacity(`g_MAX_WORDS`).
                          Update `g_word_count` if the word is
                          successfully added
*/
bool addWord(string word, string definition, string pos);

/*
    @param word       :   The string with the word that is to
                          be edited
    @param definition :   The string with the new definition of 
                          the `word`
    @param pos        :   The string with the new pos of the `word`
    @return           :   return `true` if the word is successfully
                          edited, return `false` if the `word`
                          doesn't exist in the dictionary
    @post             :   Replace the given `word`'s  definition
                          and pos with the given `definition` and
                          `pos` (by modifying global-arrays
                          `g_definitions` and `g_pos`).
                          The modification will fail if the word
                          doesn't exist in the dictionary
*/
bool editWord(string word, string definition, string pos);

/*
    @param            :   The string with the word that is to
                          be removed
    @return           :   return `true` if the word is successfully
                          removed from the dictionary return `false`
                          if the word doesn't exist in the dictionary
    @post             :   Remove the given `word`, `word`'s
                          definition and `word`'s pos from the
                          respective global-arrays if the word
                          exists.  
                          Update `g_word_count` if the word is
                          successfully removed
*/
bool removeWord(string word);
```
*Hint: For the `removeWord()` function, the order of the global-arrays doesn't matter. An empty string array is full of empty strings ("")*
  
You can use the functions you wrote previously within the implementation of Task C functions. The `getIndex()` function is extremely useful!

Test each function before moving on to implement the next one. Submit only one `.cpp` file without the `main()` function similar to the previous tasks.

---

## Task D: Hangman
<p align="center">
    <img src="game.jpeg" alt="game" width="600"/>
</p>
Now we are ready to make Hangman! Oh and here is a dictionary you can use:

[dictionary.txt](./dictionary.txt)

The game-loop is a sequence of processes that run continuously as long as the game is running. The three main processes that occur in the game-loop are input, update, and render. Lucky for you, we have provided the game-loop. Make sure to include the following function in your program:

```Cpp
// game-loop for Hangman
void gameLoop() {
    int difficulty, tries;
    string word, current;
    char letter;
    while (true) {
        cout << "Welcome to Hangman!" << endl;
        cout <<  "0. easy\n1. normal\n2. hard\n3. exit\nChoose a difficulty: ";
        cin >> difficulty;
        while (difficulty < 0 || difficulty > 3) {
            cout <<  "Enough horseplay >_< !\n0. easy\n1. normal\n2. hard\n3. exit\nChoose a difficulty: ";
            cin >> difficulty;
        }
        if (difficulty == 3) {
            cout << "If you're hangry, go grab a bite! See what I did there?" << endl;
            break;
        }
        word = getRandomWord();
        current = maskWord(word);
        tries = getTries(difficulty);
        while (tries != 0) {
            cout << "Life: ";
            printAttempts(tries, difficulty);
            cout << endl << "Word: "<< current << endl;
            cout << "Enter a letter: ";
            cin >> letter;
            
            if (!revealLetter(word, letter, current)) {
                tries--;
            }
            if (current == word) {
                break;
            }
            if (tries == 2) {
                cout << "The part of speech of the word is "<< getPOS(word) << endl;
            }
            if (tries == 1) {
                cout << "Definition of the word: " << getDefinition(word) << endl;
            }
        }
        if (tries == 0) {
            cout << "The word is \"" << word << "\". Better luck next time! You're getting the ..ahem.. hang of it." << endl;
        }
        else {
            cout << "Congrats!!!" << endl;
        }
    }
}
```
The game-loop uses some helper functions that are not implemented yet. You will implement most of them. One of the helper function is `getRandomWord()`. In the game-loop, we are going to choose a random word from the dictionary. Use this function to get a random word from your dictionary:

```Cpp
// MAKE SURE YOU INCLUDE THIS LIBRARY!
#include <stdlib.h>

string getRandomWord() {
    srand((unsigned) time(NULL));
    int index = rand() % g_word_count;
    return g_words[index];
}
```
Now that we have a random word from our dictionary, let's create some other functions that will be used in the game-loop. Add and implement the following functions to your `.cpp` file:

```Cpp
/*
    @param            :   The string with a word from the dictionary 
    @return           :   string of "_" based on the number of
                          characters in the given `word` 
    @post             :   Return string of "_" based on the length
                          of the given `word`.
                          For example, if the word is "game", then
                          the function would return "____". In other
                          words, a string of four "_"s.
*/
string maskWord(string word);

/*
    @param            :   The integer for the difficulty of the game
                          (0 for easy, 1 for normal, and 2 for hard) 
    @return           :   The number of tries given the `difficulty`
                          (9 for easy, 7 for normal, and 5 for hard)
    @post             :   Return the number of tries based on given
                          difficulty (0-easy: 9 tries, 1-normal: 7
                          tries, 2-Hard: 5 tries) 
*/
int getTries(int difficulty);

/*
    @param tries      :   The integer for remaining tries 
    @param difficulty :   The integer for the difficulty of the game 
                          (0 for easy, 1 for normal, and 2 for hard) 
    @post             :   prints the number of lives left and number
                          of lives used using "O" and "X". DO NOT
                          PRINT AN ENDLINE

    For example : calling `printAttemps(2, 1)` would print "OOXXXXX". 
                  Based on given `difficulty`, we know the total tries
                  is 7 (from `getTries(1)`). Also, the player has 2
                  `tries` remaining based on the given parameter.
                  Therefore, the function prints two "O"s to indicate
                  the remaining tries and 5 "X"s to indicate the tries
                  that have been used (7-2=5)          
*/
void printAttempts(int tries, int difficulty);

/*
    @param word       :   The string word from the dictionary
    @param letter     :   The char letter that that will be revealed
    @param(&) current :   The string representing a masked word
    @return           :   `true` if the `letter` exists in `word`,
                          otherwise return `false`  
    @post             :   If the given `letter` exists in `word`
                          reveal the `letter` in `current` masked word
                          and return `true`. Otherwise, return `false`

    For example : Let's say we have the following main function:
                  int main(){
                      string w = "g___";
                      cout << revealLetter("good", 'o', "g___") << endl;
                      cout <<  w << endl;
                  }
                  The first `cout` will print 1 because the letter 'o'
                  exists in "good". Thus, the function returned `true`.
                  The second `cout` will print "goo_". The variable `w`
                  has been modified by the function to reveal all the
                  `o`s in "good" resulting in "goo_"           
*/
bool revealLetter(string word, char letter, string &current)
```
Implement and test each function before moving on to the next. Once you have all the functions implemented correctly, try out your game by running `gameLoop()` from `main()` function. Submit only one `.cpp` file to gradescope without the `main()` function.

---

Every project starts somewhere. While the hangman game is functional, it can be improved significantly. For example: we can prevent users from entering letters that have been entered already, we can add a GUI to make the experience more user-friendly and the list goes on. You can add your own rules to the game to make something unique that you can put in your Portfolio to impress your friends and potential recruiters.

---
*Credits: Genady Maryash, Sadab Hafiz, Yoomin Song, Ryan Vaz*