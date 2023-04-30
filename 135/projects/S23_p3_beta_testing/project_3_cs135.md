---  
layout: myDefault
title: PROJECT 3
---   
<p style="text-align: center; font-style: italic;">Important</p>
You must start working on the projects as soon as they are assigned to detect any problems and to address them with us well before the deadline so that we have time to get back to you.

**Plenty of time will be provided for the completion of the project. Don't wait for the last minute. There will be no extension or negotiation about project grades after the submission deadline.**

---

# Project 3: Profémon!

_**Well done! You've made it to the final project of the semester! Time to take the stage with your Profémons and prepare for the final battle!**_
<p align="center">
    <img src="gotta-catch-em-all.gif" alt="profemon" width="600"/>
</p>

## Introduction

In project 2, you learned how classes can be helpful to group data together into one package. However, classes can offer so much more than that! This project will test your knowledge about classes through the application of object-oriented programming. 

Things you need to know for this project:
- [Classes](https://maryash.github.io/135/slides/9.1-2%20Object%20Oriented%20Programming%20_%20Implementing%20a%20Simple%20Class.pdf)
- [Enums](https://maryash.github.io/135/slides/Enums.pdf)
- [Member-Functions](https://maryash.github.io/135/slides/9.3-5%20Specifying%20the%20Public%20Interface%20_%20Designing%20the%20Data%20Representation%20_%20Member%20Functions.pdf)
- [Constructors](https://maryash.github.io/135/slides/9.6%20Constructors.pdf)
- [Inheritence](https://maryash.github.io/135/slides/10.1%20Inheritance%20Hierarchies.pdf)
- [Derived-Classes](https://maryash.github.io/135/slides/10.2%20Implementing%20Derived%20Classes.pdf)
- [Separate-Compilation](https://maryash.github.io/135/slides/9.9%20Separate%20Compilation.pdf)
  
---
## Implementation:


**Work incrementally!** Work through the tasks sequentially (implement and test). Only move on to a task when you are positive that the previous one has been completed correctly. Remember that the **function prototypes and global-variables must be exactly as specified in this project specification**. Lastly, **do NOT use any libraries that we haven't learned yet in class.** If you don't understand this project specification and its requirements, ask for clarification before you proceed. **TEST YOUR CODE BEFORE SUBMITTING!!!**

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

## Task A: Gotta Catch Em' All
<p align="center">
    <img src="maryash-pokeball.gif" alt="cheer" width="600"/>
</p>

Define and implement the `Skill` and `Profemon` class with a header and a source file (From now on, when you implement a class, assume you will implement two files: `.hpp` and `.cpp`).

The `Skill` class must have the following information stored in their private member variables:

<div id="skill-members" class="code language-plaintext" onclick="selectText(this.id)" style="border-style: double; padding:10px;">- The name of the skill
- The description of the skill
- The total number of times the skill can be used 
- An integer that represents the specialty of the skill (0, 1 or 2)
</div>  

The `Skill` class must have the following in it's `public` access modifier:

<div style="border-style: double; padding:10px;">
<div id="skill-default" class="code language-c++" onclick="selectText(this.id)" style="margin-bottom:10px;">/*
    @post       :   Initializes the name and 
                    description of the skill as 
                    "Undefined". Initializes the 
                    total uses of the skill and
                    the skill specialty as -1 
*/  
Skill();</div>
<div id="skill-parameterized" class="code language-c++" onclick="selectText(this.id)">/*
    @post       :   Parameterized constructor that
                    sets the corresponding data members
                    equal to the respective parameters
*/
Skill(std::string name, std::string description, int specialty, int uses);</div>
<div id="skill-get-name" class="code language-c++" onclick="selectText(this.id)">/*
    @return     :   name of the skill
*/
std::string getName();</div>
<div id="skill-get-description" class="code language-c++" onclick="selectText(this.id)">/*
    @return     :   description of the skill
*/
std::string getDescription();</div>
<div id="skill-get-total" class="code language-c++" onclick="selectText(this.id)">/*
    @return     :   total uses of the skill
*/
int getTotalUses();</div>
<div id="skill-get-specialty" class="code language-c++" onclick="selectText(this.id)">/*
    @return     :   specialty of the skill 
*/
int getSpecialty();</div>
<div id="skill-set-name" class="code language-c++" onclick="selectText(this.id)">/*
    @post       :   set the name of the skill 
                    equal to the given parameter
*/
void setName(std::string name);</div>
<div id="skill-set-description" class="code language-c++" onclick="selectText(this.id)">/*
    @post       :   set the description of the skill 
                    equal to the given parameter
*/
void setDescription(std::string description);</div>
<div id="skill-set-total" class="code language-c++" onclick="selectText(this.id)">/*
    @post       :   set the total uses of the skill
                    equal to the given parameter
*/
void setTotalUses(int uses);</div>
<div id="skill-set-specialty" class="code language-c++" onclick="selectText(this.id)">/*
    @return     :   Return 'true' if the given parameter 
                    is either 0, 1 or 2. Otherwise,
                    return 'false'
    @post       :   set the specialty of the skill
                    equal to the given parameter only
                    if the given parameter is valid (0,1,2)
                    Return 'true' if the specialty
                    is successfully updated 
*/
bool setSpecialty(int specialty);</div>
</div>

The header file of the `Profemon` class must have an enumeration type called "Specialty" with three possible values: `ML`, `SOFTWARE`, and `HARDWARE` in this exact order. The `enum` should be defined outside the class.

The `Profemon` class must have the following information stored in their private member variables:

<div id="profemon-members" class="code language-plaintext" onclick="selectText(this.id)" style="border-style: double; padding:10px;">- The name of the Profémon
- The level of the Profémon
- The required experience to level up
- The current experience
- The maximum health level
- The specialty of the Profémon
- A 'Skill' array of size 3 containing skills learned by the Profémon
</div>  

The `Profemon` class must have the following in it's `public` access modifier:

<div style="border-style: double; padding:10px;">
<div id="profemon-default" class="code language-c++" onclick="selectText(this.id)" style="margin-bottom:10px;">/*
    @post       :   Initializes the name of the Profémon
                    as "Undefined"
*/  
Profemon();</div>
<div id="profemon-parameterized" class="code language-c++" onclick="selectText(this.id)">/*
    @post       :   Initializes the name, max health 
                    and specialty as the corresponding
                    parameters. Set the required 
                    experience equal to 50. 
                    Initializes the current experience
                    and level as 0
*/  
Profemon(std::string name, double max_health, Specialty specialty);</div>
<div id="profemon-get-name" class="code language-c++" onclick="selectText(this.id)">/*
    @return     :   name of the Profémon
*/
std::string getName();</div>
<div id="profemon-get-specialty" class="code language-c++" onclick="selectText(this.id)">/*
    @return     :   specialty of the Profémon
*/
Specialty getSpecialty();</div>
<div id="profemon-get-level" class="code language-c++" onclick="selectText(this.id)">/*
    @return     :   level of the Profémon
*/
int getLevel();</div>
<div id="profemon-get-maxh" class="code language-c++" onclick="selectText(this.id)">/*
    @return     :   maximum health of the Profémon
*/
double getMaxHealth();</div>
<div id="profemon-set-name" class="code language-c++" onclick="selectText(this.id)">/*
    @post       :   set the name of the Profémon 
                    equal to the given parameter
*/
void setName(std::string name);</div>
<div id="profemon-levelup" class="code language-c++" onclick="selectText(this.id)">/*
    @param      :   experience points earned by the Profémon 
    @post       :   Increase the Profémon's level based on
                    the given 'exp'. The Profémon will level
                    up if it reaches the required experience.
                    Depending on the Profémon's specialty,
                    the required experience goes up by a certain
                    amount everytime the Profémon levels up.
                    'ML' required experience goes up by 10,
                    'SOFTWARE' goes up by 15, and 'HARDWARE'
                    goes up by 20. Make sure to update the
                    required, current experience and level
                    private data members accordingly. The given 
                    'exp' can result in the Profémon leveling 
                    up multiple times
  
  For example   :   starting at lvl 0, calling 'levelUp(115)'
                    on different types of Profémon would result
                    in the following:

                    ML:
                      - new level: 2
                      - current exp: 5
                      - required exp: 70

                    SOFTWARE:
                      - new level: 2
                      - current exp: 0
                      - required exp: 80

                    HARDWARE:
                      - new level: 1
                      - current exp: 65
                      - required exp: 70

                    As stated above, each specialty has 
                    a different speed of leveling up
*/
void levelUp(int exp);</div>
<div id="profemon-learnskill" class="code language-c++" onclick="selectText(this.id)">/*
    @param      :   the skill slot or index
    @param      :   the new skill to be learned 
    @return     :   return 'true' if the skill has been successfully 
                    learned. Return 'false' if 'slot' parameters is 
                    not within the valid range(0,1,2) or the 
                    specialty of the 'skill' does not match 
                    the specialty of the Profémon 
    @post       :   if the given slot is valid(0,1,2) and the
                    skill specialty matched with the Profémon,
                    add the 'skill' to the 'slot' index of the
                    learned skills array                
*/
bool learnSkill(int slot, Skill skill);</div>

<div id="profemon-print" class="code language-c++" onclick="selectText(this.id)">/*
    @param      :   bool indicating whether or not the Profémon's 
                    skills should be printed
    @post       :   Prints the Profémon's information in a
                    specific format. Additionally, lists
                    the Profémon's skills if the given 
                    'print_skills' parameter is true. Only 
                    print the skills that are not "Undefined"
Format:
(ProfemonName) [(Specialty)] | lvl (Level) | exp (CurrentExp)/(RequiredExp) | hp (MaxHP)
    (SkillNameSlot0) [(Uses)] : (description of skill in slot 0)
    (SkillNameSlot1) [(Uses)] : (description of skill in slot 1)
    (SkillNameSlot2) [(Uses)] : (description of skill in slot 2)

For example:
Maryash [SOFTWARE] | lvl 2 | exp 30/80 | hp 13500
    OOP [30] : a programming paradigm based on the concept of objects
    Vector [30] : a c++ dynamic array library
    Pointer [10] : a pointer stores a memory address

Note: There are four spaces before the each line of skills.
      The last line prints an endline.
*/
void printProfemon(bool print_skills);</div>
</div>

You will submit the following files to gradescope:

`profemon.hpp`, `profemon.cpp`, `skill.hpp`, `skill.cpp`

[Here is a sample main file. Make sure to add your own code to test all functions.](./main.cpp)

Compile your code locally using:
```bash
g++ skill.cpp profemon.cpp main.cpp
```

---

*Credits: Genady Maryash, Ryan Vaz, Yoomin Song, Sadab Hafiz*

<script>
  document.querySelectorAll('div.code').forEach(el => {
    hljs.highlightElement(el);
  });
</script>
