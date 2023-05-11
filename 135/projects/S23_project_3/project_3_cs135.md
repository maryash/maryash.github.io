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
<a href="https://www.youtube.com/watch?v=q9Vjfi0Slbw">
    <img src="gotta-catch-em-all.gif" alt="profemon" width="600" style="display:block;margin-left:auto;margin-right:auto;"/>
</a>

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
<a href="https://www.youtube.com/watch?v=q9Vjfi0Slbw">
    <img src="maryash-pokeball.gif" alt="cheer" width="600" style="display:block;margin-left:auto;margin-right:auto;"/>
</a>

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

<div id="profemon-members" class="code language-plaintext" onclick="selectText(this.id)" style="border-style: double; padding:10px;">- The name of the profémon
- The level of the profémon
- The required experience to level up
- The current experience
- The maximum health level
- The specialty of the profémon
- A 'Skill' array of size 3 containing skills learned by the profémon
</div>  

The `Profemon` class must have the following in it's `public` access modifier:

<div style="border-style: double; padding:10px;">
<div id="profemon-default" class="code language-c++" onclick="selectText(this.id)" style="margin-bottom:10px;">/*
    @post       :   Initializes the name of the profémon
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
    @return     :   name of the profémon
*/
std::string getName();</div>
<div id="profemon-get-specialty" class="code language-c++" onclick="selectText(this.id)">/*
    @return     :   specialty of the profémon
*/
Specialty getSpecialty();</div>
<div id="profemon-get-level" class="code language-c++" onclick="selectText(this.id)">/*
    @return     :   level of the profémon
*/
int getLevel();</div>
<div id="profemon-get-maxh" class="code language-c++" onclick="selectText(this.id)">/*
    @return     :   maximum health of the profémon
*/
double getMaxHealth();</div>
<div id="profemon-set-name" class="code language-c++" onclick="selectText(this.id)">/*
    @post       :   set the name of the profémon 
                    equal to the given parameter
*/
void setName(std::string name);</div>
<div id="profemon-levelup" class="code language-c++" onclick="selectText(this.id)">/*
    @param      :   experience points earned by the profémon 
    @post       :   Increase the profémon's level based on
                    the given 'exp'. The profémon will level
                    up if it reaches the required experience.
                    Depending on the profémon's specialty,
                    the required experience goes up by a certain
                    amount everytime the profémon levels up.
                    'ML' required experience goes up by 10,
                    'SOFTWARE' goes up by 15, and 'HARDWARE'
                    goes up by 20. Make sure to update the
                    required, current experience and level
                    private data members accordingly. The given 
                    'exp' can result in the profémon leveling 
                    up multiple times
  
  For example   :   starting at lvl 0, calling 'levelUp(115)'
                    on different types of profémon would result
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
                    the specialty of the profémon 
    @post       :   if the given slot is valid(0,1,2) and the
                    skill specialty matched with the profémon,
                    add the 'skill' to the 'slot' index of the
                    learned skills array                
*/
bool learnSkill(int slot, Skill skill);</div>

<div id="profemon-print" class="code language-c++" onclick="selectText(this.id)">/*
    @param      :   bool indicating whether or not the profémon's 
                    skills should be printed
    @post       :   Prints the profémon's information in a
                    specific format. Additionally, lists
                    the profémon's skills if the given 
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

[Here is a sample main file. Make sure to add your own code to test all functions.](./main_TaskA.cpp)

Compile your code locally using:
```bash
g++ skill.cpp profemon.cpp main.cpp
```

---

## Task B: Profémon Trainers
<a href="https://www.youtube.com/watch?v=q9Vjfi0Slbw">
    <img src="profedex.png" alt="profedex" width="600" style="display:block;margin-left:auto;margin-right:auto;"/>
</a>

In the world of Profémon, trainers are always busy training their beloved profémons for the battles to come. They are looking to challenge departments to a profémon battle and gain a degree. Departments are trainers who specialize in a single type of profémon. Since we have a working profémon class, it's time to implement the `Trainer` class and some department classes which will inherit from the `Trainer` class.

Each trainer has a team of three profémons and a profédex. The profédex serves as a storage for all the profémons collected by the trainer. Each trainer also has a profémon which they choose to accompany them on their adventures!

Since the Department classes will inherit from the `Trainer`, the `Trainer` class should have the following `protected` data members:
<div id="trainer-members" class="code language-plaintext" onclick="selectText(this.id)" style="border-style: double; padding:10px;">- The name of the Profémon
- A vector of profémons which represents a profedéx
- A profémon array of size 3 which represents the trainer's current team
- A pointer to a profémon which is currently selected from the team
</div>  

The `Trainer` class must have the following in it's `public` access modifier:

<div style="border-style: double; padding:10px;">
<div id="trainer-default" class="code language-c++" onclick="selectText(this.id)" style="margin-bottom:10px;">/*
    @post       :   Initializes the pointer to the currently
                    selected profémon as 'nullptr'
*/  
Trainer();</div>
<div id="trainer-parameterized" class="code language-c++" onclick="selectText(this.id)">/*
    @param      :   a vector of profémons
    @post       :   Adds the profémons from given parameter
                    vector to the team and the profédex. If
                    the team is full, add the profémons to 
                    the profedéx. Maintain the order of the 
                    given 'profemons' vector. Assume that 
                    the parameter vector has atleast one
                    item. Select the profémon at 0 index of
                    the team array to accompany the trainer
*/
Trainer(std::vector &lt;Profemon&gt; profemons);</div>
<div id="trainer-contains" class="code language-c++" onclick="selectText(this.id)">/*
    @param      :   the name of a profémon
    @return     :   'true' if profémon with given name is in 
                    the team or profedex, otherwise 'false'   
    @post       :   return 'true' if the profémon with the name
                    same as the given parameter is found either
                    in current team, or in the profédex. Return
                    false if the profémon is not found
*/
bool contains(std::string name);</div>
<div id="trainer-add" class="code language-c++" onclick="selectText(this.id)">/*
    @param      :   a profémon that is to be added
    @return     :   boolean indicating successful add operation
    @post       :   Add the given parameter profémon to the team
                    or the profedex. Only add the profemon to
                    profédex if the current team is full. If the 
                    profémon is being added to the team, add it 
                    to the smallest index possible. The profémon 
                    can't be added if another profémon with the
                    same name already exists in the team or 
                    the profédex 
*/
bool addProfemon(Profemon profemon);</div>
<div id="trainer-remove" class="code language-c++" onclick="selectText(this.id)">/*
    @param      :   the name of the profémon that is to be removed
    @return     :   boolean indicating successful remove operation
    @post       :   remove the profémon with the given name from
                    the current team or the profédex. If the profémon
                    is removed from the profédex, make sure the order
                    of the remaining profémons is maintained. If the 
                    profémon is on the team, it should be swapped 
                    with an empty profémon object. The profémon 
                    cannot be removed if no profémon with the given 
                    name exists in the team or the profédex.

    Hint        :   What is the default value of the profémons in an    
                    empty array of 'Profemon' objects?
*/
bool removeProfemon(std::string name);</div>
<div id="trainer-set-team" class="code language-c++" onclick="selectText(this.id)">/*
    @param      :   integer representing a slot in the team (0,1 or 2)
    @param      :   name of the profémon that is to be added to the team
    @post       :   assuming that a profémon with the given 'name' exists
                    in the profédex and given 'slot' is valid (0,1,2), add
                    the profémon to the team at the given slot. If the slot
                    already contains a profémon, swap the profémon with the
                    profémon that is being added to the team. If the 'slot'
                    doesn't contain a profémon, move the profémon from the
                    profédex to the slot

For example :

    Let's suppose the current team array is: ["Enxhi", "Undefined", "Kimberly"]
    And profédex is: ["Sadab", "Yoomin", "Zilola", "Brandon"]

    If we call 'setTeamMember(1,"Yoomin")', the team and profédex becomes:
    Team: ["Enxhi", "Yoomin", "Kimberly"]
    Profédex: ["Sadab", "Zilola", "Brandon"]
    The profémon is moved to the team's empty slot (Undefined means empty)

    However, if we call 'setTeamMember(0,"Zilola")':
    Team: ["Zilola", "Undefined", "Kimberly"]
    Profédex: ["Sadab", "Yoomin", "Enxhi", "Brandon"]
    The profémon is swapped with the profémon in slot 0
*/
void setTeamMember(int slot, std::string name);</div>
<div id="trainer-choose" class="code language-c++" onclick="selectText(this.id)">/*
    @param      :   integer representing a slot in the team (0,1 or 2)
    @return     :   'true' if the profémon at given slot is successfully
                    chosen. Otherwise, return 'false'
    @post       :   choose a profemon to accompany the Trainer from the
                    team (refers to the pointer Profemon data member).
                    The profémon cannot be chosen if the given slot
                    doesn't contain a profémon. Assume that the given
                    'slot' is valid(0,1,2)

    Hint        :   What is the name of the objects in an empty
                    profémon array?
*/
bool chooseProfemon(int slot);</div>
<div id="trainer-get-current" class="code language-c++" onclick="selectText(this.id)">/*
    @return     :   profémon that is currently accompanying the trainer
*/
Profemon getCurrent();</div>
<div id="trainer-print-team" class="code language-c++" onclick="selectText(this.id)">/*
    @post       :   prints profémons in the profédex in a specific format

Format :
(Profemon1Name) [(Specialty)] | lvl (Level) | exp (CurrentExp)/(RequiredExp) | hp (MaxHP)
(empty line)
(Profemon2Name) [(Specialty)] | lvl (Level) | exp (CurrentExp)/(RequiredExp) | hp (MaxHP)
(empty line)
. . . PRINT ALL THE PROFEMONS IN THE PROFEDEX . . .
(ProfemonName) [(Specialty)] | lvl (Level) | exp (CurrentExp)/(RequiredExp) | hp (MaxHP)
(empty line)

For example:
Maryash [SOFTWARE] | lvl 2 | exp 30/80 | hp 13500

Saad [HARDWARE] | lvl 3 | exp 20/110 | hp 15000

Raja [ML] | lvl 1 | exp 10/60 | hp 35000


Hint : The format looks familiar from Task A doesn't it?
*/
void printProfedex();</div>

<div id="trainer-print-profedex" class="code language-c++" onclick="selectText(this.id)">/*
    @post       :   prints profémons in the team in a specific format.
                    Do not print "Undefined" profémons

Format :
(Profemon1Name) [(Specialty)] | lvl (Level) | exp (CurrentExp)/(RequiredExp) | hp (MaxHP)
    (SkillNameSlot0) [(Uses)] : (description of skill in slot 0)
    (SkillNameSlot1) [(Uses)] : (description of skill in slot 1)
    (SkillNameSlot2) [(Uses)] : (description of skill in slot 2)
(empty line)
(Profemon2Name) [(Specialty)] | lvl (Level) | exp (CurrentExp)/(RequiredExp) | hp (MaxHP)
    (SkillNameSlot0) [(Uses)] : (description of skill in slot 0)
    (SkillNameSlot1) [(Uses)] : (description of skill in slot 1)
    (SkillNameSlot2) [(Uses)] : (description of skill in slot 2)
(empty line)
(Profemon3Name) [(Specialty)] | lvl (Level) | exp (CurrentExp)/(RequiredExp) | hp (MaxHP)
    (SkillNameSlot0) [(Uses)] : (description of skill in slot 0)
    (SkillNameSlot1) [(Uses)] : (description of skill in slot 1)
    (SkillNameSlot2) [(Uses)] : (description of skill in slot 2)
(empty line)
*/
void printTeam();</div>
</div>

<a href="https://www.youtube.com/watch?v=q9Vjfi0Slbw">
    <img src="csdep.png" alt="csdepartment" width="600" style="display:block;margin-left:auto;margin-right:auto;"/>
</a>

Since you've been working so hard on this project, we will gift you the header file for the departments!

<div id="department-header" class="code language-c++" onclick="selectText(this.id)" style="border-style: double; padding:10px;">// This is an introductory comment
#ifndef DEPARTMENT
#define DEPARTMENT

#include "trainer.hpp"

class MLDepartment: public Trainer{
    public:
        MLDepartment(std::vector&lt;Profemon&gt; profemons);
        bool addProfemon(Profemon profemon);
};

class SoftwareDepartment: public Trainer{
    public:
        SoftwareDepartment(std::vector&lt;Profemon&gt; profemons);
        bool addProfemon(Profemon profemon);
};

class HardwareDepartment: public Trainer{
    public:
        HardwareDepartment(std::vector&lt;Profemon&gt; profemons);
        bool addProfemon(Profemon profemon);
};

#endif</div>  

Use a single `.cpp` file to implement all the department classes' functions and constructors. For each of the derived classes, you need to change the implementation of the constructors and the `addProfemon()` function so that only the profémons of that particular specialty is added. For example: the `MLDepartment` can only have profémons of  `ML` specialty. For the parameterized constructor, the given parameter vector can have profémons of all specialties. Add only the specialty that the Department specializes in. You can assume that the parameter vector will have atleast one profémon of correct specialty.

Submit the following files to gradescope:

`profemon.hpp`, `profemon.cpp`, `skill.hpp`, `skill.cpp`, `trainer.hpp`, `trainer.cpp`, `department.hpp`, `department.cpp` 

Modify the main file from Task A to test your classes.

Compile your code locally using:
```bash
g++ skill.cpp profemon.cpp trainer.cpp department.cpp main.cpp
```

---

*Credits: Genady Maryash, Ryan Vaz, Yoomin Song, Sadab Hafiz*

<script>
  document.querySelectorAll('div.code').forEach(el => {
    hljs.highlightElement(el);
  });
</script>
