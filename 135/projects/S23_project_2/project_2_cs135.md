---  
layout: myDefault
title: PROJECT 2
---   
<p style="text-align: center; font-style: italic;">Important</p>
You must start working on the projects as soon as they are assigned to detect any problems and to address them with us well before the deadline so that we have time to get back to you before the deadline.  

**There will be no extensions and no negotiation about project grades after the submission deadline.**

---

# Project 2: Dynamic Playlists

_**Congrats to everyone who finished Project 1. You can't celebrate yet however because we have more projects for you!**_
<p align="center">
    <img src="sweetvictory.gif" alt="victory" width="600"/>
</p>

## Introduction

This project will test your knowledge about dynamic memory allocation and classes. While working on this project, you will realize the usefulness of dynamically allocated arrays and classes.

Things you need to know for this project: 
- [Arrays](https://www.geeksforgeeks.org/arrays-in-c-cpp/)
- [Functions](https://www.geeksforgeeks.org/functions-in-cpp/)
- [Global-Variables](https://www.geeksforgeeks.org/scope-of-variables-in-c/)
- [String-Manipulation](https://www.geeksforgeeks.org/substring-in-cpp/)
- [Data-only classes](https://www.w3schools.com/cpp/cpp_classes.asp)
- [Pointers](https://maryash.github.io/135/slides/MyPointers.pdf)
- [Dynamically Allocated Arrays](https://www.guru99.com/cpp-dynamic-array.html)

---
## Implementation:


**Work incrementally!** Work through the tasks sequentially (implement and test). Only move on to a task when you are positive that the previous one has been completed correctly. Remember that the **function prototypes and global-variables must be exactly as specified in this project specification**. Lastly, **do NOT use EOF(End of File), vector, or any library that we haven't learned yet in class.** If you don't understand this project specification and its requirements, ask for clarification before you proceed. **TEST YOUR CODE BEFORE SUBMITTING!!!**

---

<link rel="stylesheet" href="//cdnjs.cloudflare.com/ajax/libs/highlight.js/11.7.0/styles/default.min.css">
<script src="//cdnjs.cloudflare.com/ajax/libs/highlight.js/11.7.0/highlight.min.js"></script>
<script>
  function selectText(containerid) {
    if (document.selection) { // IE
        var range = document.body.createTextRange();
        range.moveToElementText(document.getElementById(containerid));
        range.select();
    } else if (window.getSelection) {
        var range = document.createRange();
        range.selectNode(document.getElementById(containerid));
        window.getSelection().removeAllRanges();
        window.getSelection().addRange(range);
    }
  }
</script>
<style>
  div.code{
    font-family: monospace;
    display: block;
    font-family: monospace;
    white-space: pre;
    margin: 1em 0;
  }
</style>

## Task A: Dynamically Allocated Playlists
<p align="center">
    <img src="question.jpg" alt="question" width="600"/>
</p>

We will be making a playlist system to keep the order of songs. Similar to Project 1, we will be using global arrays to store song information. The difference is, these arrays are going to be dynamically allocated!

<div id="g_vars" class="code language-c++" onclick="selectText(this.id)" style="border-style: double; padding:10px;">int g_curr_size = 2;
int g_number_of_songs = 0;

string *g_song_names = new string[g_curr_size];
string *g_artist_names = new string[g_curr_size];
int *g_song_durations = new int[g_curr_size];
string *g_genres = new string[g_curr_size];</div>

Create a C++ file and add the following functions:
<div style="border-style: double; padding:10px;">
<div id="allocateNew" class="code language-c++" onclick="selectText(this.id)" style="margin-bottom:10px;">/*
    @post             :   Replace the old global
                          dynamically allocated arrays
                          with new dynamically allocated
                          arrays of twice the size 
                          ('g_curr_size' * 2). Update
                          'g_curr_size' accordingly.
                          Make sure you copy the contents
                          of the older arrays. Do this
                          for the following global-arrays:
                          'g_song_names', 'g_artist_names', 
                          'g_song_durations', 'g_genres'
*/
void allocateNew();</div>
<div id="readSongs" class="code language-c++" onclick="selectText(this.id)">/*
    @param            :   The string with the 'filename'
    @post             :   Reads the song, artists,
                          song durations and genres into 
                          the global-arrays and set the 
                          value of 'g_number_of_songs'
                          to the number of songs read.
                          Call 'allocateNew()' to allocate 
                          an array of larger size if the 
                          dynamic arrays reach full 
                          capacity.
*/
void readSongs(string filename);</div>
</div>

Here's an example text file:
<div id="exampleText" class="code language-plaintext" onclick="selectText(this.id)" style="border-style: double; padding:10px;">Song Name:Artist Name-GENRE-1 mins
A Tale of 2 Citiez:Ryan Vaz-Jazz-2 mins
Don't Stop the Music:Bode Chiu-Pop-1 mins
Africa:Baolin Cheng-Rock-3 mins
Back to December:Meheraan Khan-Hiphop-3 mins
Y'all Been Warned:Tony Wang-Rnb-4 mins
Outside:Georgina Woo-Pop-12 mins
One Last Time:Kazi Mansha-Rnb-1 mins
Maps:Ashfak Uddin-Metal-2 mins
In the End:Mohammed Slim-Hiphop-301 mins
N.Y. State of Mind:Rawad Yakub-Classical-35 mins
Renegade:Zakaria Almardaee-Metal-3 mins
You Know You Like It:Justin Lau-Pop-2 mins
A Place for My Head:Bryant Zheng-Jazz-4 mins
No Title:Isabel Stec-Pop-3 mins</div>

Example:

Calling `readSongs()` on the above text file will modify the global variables like this:

<div id="exampleOutput" class="code language-plaintext" onclick="selectText(this.id)" style="border-style: double; padding:10px;">g_curr_size      : 16

g_number_of_songs: 15

g_song_names     : [ "Song Name", "A Tale of 2 Citiez", "Don't Stop the Music", "Africa", 
                    "Back to December", "Y'all Been Warned", "Outside", "One Last Time", 
                    "Maps", "In the End", "N.Y. State of Mind", "Renegade",
                    "You Know You Like It", "A Place for My Head", "No Title" ]

g_artist_names   : [ "Artist Name", "Ryan Vaz", "Bode Chiu", "Baolin Cheng", 
                    "Meheraan Khan", "Tony Wang", "Georgina Woo", "Kazi Mansha", 
                    "Ashfak Uddin", "Mohammed Slim", "Rawad Yakub", "Zakaria Almardaee", 
                    "Justin Lau", "Bryant Zheng", "Isabel Stec" ]

g_song_durations : [ 1, 2, 1, 3, 3, 4, 12, 1, 2, 301, 35, 3, 2, 4, 3 ]

g_genres         : [ "GENRE", "Jazz", "Pop", "Rock", "Hiphop", "Rnb", "Pop", "Rnb", "Metal", 
                    "Hiphop", "Classical", "Metal", "Pop", "Jazz", "Pop" ]</div>

*Hint: [Click here if you want to learn a neat trick that will help you with Task A](http://proto007.pythonanywhere.com/counter)*

Make sure your program produces the correct output by testing the functions and global-variables using `main()` function. 

**Note: Only submit single `.cpp` file to gradescope.**

---

## Task B: Playlist filters
<p align="center">
    <img src="patrick.jpg" alt="patrick" width="600"/>
</p>

Let's learn more about our playlists. Add and implement the following functions:

<div style="border-style: double; padding:10px;">
<div id="getGenreSongs" class="code language-c++" onclick="selectText(this.id)" style="margin-bottom:10px;">/*
    @param genre              :   A string representing a genre
    @param(&) genreCount      :   An integer that will keep track of the number of songs
    @return                   :   A pointer to a dynamically allocated array of strings 
    @post                     :   Return a pointer to a dynamically allocated array of strings
                                  containing the names of the songs of given 'genre' and 
                                  update 'genreCount' to be the number of songs found.
                                  Return a pointer to an empty dynamically allocated array
                                  if no songs are found of the given 'genre'
    
    For example : Let's say we have the following 'g_song_names':
                  ["Killshot", "Takeover", "Spectre", "Ether", "No Title"]
                  
                  Let's say we have the following 'g_genres':
                  ["HipHop", "HipHop", "EDM", "HipHop", "JPop"]
                  
                  We try the following code with the above global-arrays:
                  int main(){
                    int count = 0;
                    string * genreSongs = getGenreSongs("HipHop", count);
                  }

                  In this case, 'genreSongs' will be pointing to the following:
                  ["Killshot", "Takeover", "Ether"]
                  The value of 'count' will be updated to 3 because there
                  are three "HipHop" songs on the playlist 
*/
string * getGenreSongs(string genre, int &genreCount);</div>
<div id="getSongsFromDuration" class="code language-c++" onclick="selectText(this.id)" style="margin-bottom:10px;">/*
    @param duration             :   The integer duration of the songs
    @param(&) durationsCount    :   An integer that will keep track of the number of songs
    @param filter               :   An integer(0, 1 or 2) representing the comparision filter
                                    0 = greater-than, 1 = less-than, 2 = equal-to
    @return                     :   A pointer to a dynamically allocated array of strings 
    @post                       :   Return a pointer to a dynamically allocated array of strings
                                    of songs that are either greater-than, less-than or equal-to
                                    the given 'duration' based on given 'filter'. Update parameter
                                    'durationsCount' with the number of songs found. Return a 
                                    pointer to an empty dynamically allocated array if no songs
                                    are found with the given parameters

    For example : Let's say we have the following 'g_song_names':
                  ["Major Crimes", "Never Fade Away", "Circus Minimus", "4aem", "Reaktion"]

                  Let's say we have the following 'g_song_durations':
                  [3, 4, 3, 5, 2]

                  We try the following code with the above global-arrays:
                  int main(){
                    int greater = 0;
                    int less = 0;
                    int equal = 0;
                    string * longSongs = getSongsFromDuration(3, greater, 0);
                    string * shortSongs = getSongsFromDuration(3, less, 1);
                    string * mediumSongs = getSongsFromDuration(3, equal, 2);
                  }

                  After running the above code, 'longSongs' will be:
                  ["Never Fade Away", "4aem"]
                  The value of 'greater' will be 2 because there are two songs 
                  greater than 3 mins duration

                  Similarly, 'shortSongs' will be:
                  ["Reaktion"]
                  The value of 'less' will be 1 because there is only one song 
                  less than 3 mins duration

                  Finally, 'mediumSongs' will be:
                  ["Major Crimes", "Circus Minimus"]
                  The value of 'equal' will be 2 because there are 2 songs
                  equal to 3 mins duration      
*/
string * getSongsFromDuration(int duration, int &durationsCount, int filter);</div>
<div id="getUniqueArtists" class="code language-c++" onclick="selectText(this.id)" style="margin-bottom:10px;">/*
    @param      :   An integer that will keep track of unique artists
    @return     :   A pointer to a dynamically allocated array of strings 
    @post       :   Return a pointer to a dynamically allocated array of strings
                    containing the names of unique artists in 'g_artist_names'
                    and update 'uniqueCount' parameter to be the number of
                    unique artists found
    
    For example : Let's say we have the following 'g_artist_names':
                  ["Eminem", "Eminem", "Jay Z", "Jay Z", "Nas"]
                  
                  We try the following code with this 'g_artist_names':
                  int main(){
                    int count = 0;
                    string * uniques = getUniqueArtists(count);
                  }

                  In this case, 'uniques' will be pointing to the following:
                  ["Eminem", "Jay Z", "Nas"]
                  The value of 'count' will be updated to 3 because there
                  are three unique artists on the playlist     
*/
string * getUniqueArtists(int &uniqueCount);</div>
<div id="getFavoriteArtist" class="code language-c++" onclick="selectText(this.id)">/* 
    @return     :   A string with the artist with most songs in playlist
    @post       :   Find the artist with the most songs in the playlist
                    If there are multiple such artists, return any one of them.
                    Return "NONE" if the playlist is empty

    For example : Let's say we have the following 'g_artist_names':
                  ["J. Cole", "J. Cole", "Kendrick", "Kendrick", "Kendrick"]
                  The favorite artist here is "Kendrick" because he has 3 songs
                  However, consider the following 'g_artist_names':
                  ["J. Cole", "J. Cole", "Kendrick", "Kendrick", "Drake"]
                  In this case, the favorite artist is either "J.Cole" or "Kendrick"
                  because both artists have 2 songs which is greater than any 
                  other artists in the playlist
*/
string getFavoriteArtist();</div>
</div>

**Note: For functions that return a pointer to a dynamic array, use `g_number_of_songs` as the size**

Feel free to write any helper functions to make your lives easier. Test your functions thoroughly using `main()`. Submit a single `.cpp` file with the functions.

---

## Task C: Combine

<p align="center">
    <img src="drummer.png" alt="drums" width="600"/>
</p>

Classes are a wonderful way to group data together. Instead of using four dymanic arrays, what if we had a single dynamic array of `Song` objects?

- In a new `.cpp` file, define a class called `Song` with the following public data members:
<div id="data_members" class="code language-c++" onclick="selectText(this.id)" style="border-style: double; padding:10px;">string name;
string artist;
int duration;
string genre;</div>

- Add the following global variables in your file:
<div id="g_vars_c" class="code language-c++" onclick="selectText(this.id)" style="border-style: double; padding:10px;">int g_capacity = 2;
int g_size = 0;

Song *g_songs = new Song[g_capacity];</div>

- Change the functions from Task A as follows:
<div style="border-style: double; padding:10px;">
<div id="allocateNewC" class="code language-c++" onclick="selectText(this.id)" style="margin-bottom:10px;">/*
    @post             :   Replace the old global
                          dynamically allocated array
                          'g_songs' with new dynamically
                          allocated array of twice the 
                          capacity ('g_capacity' * 2). 
                          Update 'g_capacity' accordingly.
                          Make sure you copy the contents
                          of the old array to the new one.
*/
void allocateNew();</div>
<div id="readSongsC" class="code language-c++" onclick="selectText(this.id)">/*
    @param            :   The string with the 'filename'
    @post             :   Reads the song, artists,
                          song durations and genres into 
                          the 'g_songs' and sets the 
                          value of 'g_size' to the number 
                          of songs read. Call 'allocateNew()' 
                          where necessary similar to Task A.
*/
void readSongs(string filename);</div>
</div>

- Since we are using a single dynamic array of objects, the functions from task B will need to be implemented differently:
<div id="taskC_functions" class="code language-c++" onclick="selectText(this.id)" style="border-style: double; padding:10px;">// Now returns a dynamic array of 'Song' objects instead of a 'string' objects
Song * getSongsFromDuration(int duration, int &durationsCount, int filter);
Song * getGenreSongs(string genre, int &genreCount);

// Change the implementation since we are using 'Song' class
string * getUniqueArtists(int &uniqueCount);
string getFavoriteArtist();</div>

The functionality of the above functions remain unchanged from Task A and Task B. Take a look at Task A and B specification if necessary.

Only submit a single `.cpp` file to gradescope with all the functions

---

*Credits: Genady Maryash, Yoomin Song, Sadab Hafiz, Ryan Vaz*

<script>
  document.querySelectorAll('div.code').forEach(el => {
    hljs.highlightElement(el);
  });
</script>
