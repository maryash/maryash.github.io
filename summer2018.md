CSci 127: Introduction to Computer Science  
Hunter College, City University of New York  
Summer 2018  
---
This course presents an overview of computer science (CS) with an emphasis on problem-solving and computational thinking through 'coding': computer programming for beginners. Other topics include: organization of hardware, software, and how information is structured on contemporary computing devices. This course is pre-requisite to several introductory core courses in the CS Major. The course is also required for the CS minor. MATH 12500 or higher is strongly recommended as a co-req for intended Majors.

The course has lectures on Tuesday mornings and recitation sections offered throughout the week (you must register both for the lecture and a recitation section).

**Course Coordinator and Lecture Instructor

*Genady Maryash, office hours: after lecture on Tuesdays and before lecture on Thursdays

**Tutor/UTA Coordinator:

*Katherine Howitt

**Lab Hours:** There is a dedicated computer laboratory, North 1001E for this course:

*Staffed Hours: Monday-Friday, 9:30am to 9:30pm, when classes are in session.

**Lecture & Recitation Instructors:
|Sections: |Time:|Instructor:|E-mail:|
|--- |--- |--- |--- |
|Lecture|T,Th 1:30-3:04PM, HN510|Genady Maryash|gmaryash AT hunter cuny edu|
|1R01|M,W 9AM:50-11:24AM, HN1001E|Ms. Basak Taylan|btaylan AT gradcenter cuny edu|
|1R02|M,W 11:40AM-1:14PM, HN1001E|Ms. Katherine Howitt|kghowitt AT gmail com|
|1R03|M,W 1:30AM-3:04PM, HN1001E|Ms. Katherine Howitt|kghowitt AT gmail com|
|1R04|M,W 3:20PM-12:54PM, HN1001E|Ms. Katherine Howitt|kghowitt AT gmail com|

### Useful Links:

*   [Syllabus](s18/syl.html)
*   [Programming Assignments](s18/ps.html)
*   [Honors Section](s18/honors.html) Information
### Book & tutorial pages:
*   Python: [How to Think Like a Computer Scientist](https://interactivepython.org/runestone/static/thinkcspy/index.html) by Miller _et al_.
*   Logical Circuits: [Burch's Logic & Circuits](http://www.toves.org/books/logic/), [Explain Logic Gates](http://www.explainthatstuff.com/logicgates.html)
*   Machine Language: [U Idaho reference sheet](http://www.mrc.uidaho.edu/mrc/people/jff/digital/MIPSir.html), [MIPS Wikibooks](https://en.wikibooks.org/wiki/MIPS_Assembly/Instruction_Formats)
*   C++: [Cplusplus Tutorial](http://www.cplusplus.com/files/tutorial.pdf), [C++ Tutorials Point](https://www.tutorialspoint.com/cplusplus/index.htm), [The Rook's Guide to C++](https://rooksguide.files.wordpress.com/2013/12/rooks-guide-isbn-version.pdf)

### Outline:

 **Week:**

 **Topics:**

 **Handouts:**

 **Quiz Topics:**

 **Reading:**

**#1**

**Lecture:**  
30 January

Syllabus & Class Policies, Introductions,  
Introduction to Python: definite loops, simple output, primitive data types, overview of objects & modules;  
What is an algorithm?

[Syllabus](s18/syl.html),  
[Programming Assignments](s18/ps.html),  
[Hello, World](http://www.pythontutor.com/visualize.html#code=%23Name%3A%20%20Thomas%20Hunter%0A%23Date%3A%20%20September%201,%202017%0A%23This%20program%20prints%3A%20%20Hello,%20World!%0A%0Aprint%28%22Hello,%20World!%22%29&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Hexagon example](https://trinket.io/python/88a94dfc75),  
[Fancier hexagon](https://trinket.io/python/a3bede6db8),  
[Lecture Notes](s18/csci127S18Lecture1.pdf)

Think CS: [Chapter 1](http://interactivepython.org/runestone/static/thinkcspy/GeneralIntro/toctree.html) & [Chapter 4](http://interactivepython.org/runestone/static/thinkcspy/PythonTurtle/toctree.html)

**Recitations:**  
29-31 January, 1 February

Getting started with Python & IDLE;  
Using modules and definite loops

[Lab 1](s18/lab1.html)

[Academic Integrity](s18/quizzes.html#Q1)

**#2**

**Lecture:**  
6 February

Strings & Lists: looping through strings, console I/O, ASCII representation

[Loop Puzzle 1](http://pythontutor.com/visualize.html#code=%23Predict%20what%20will%20be%20printed%3A%0Afor%20i%20in%20range%284%29%3A%0A%20%20%20%20print%28'The%20world%20turned%20upside%20down'%29%0Afor%20j%20in%20%5B0,1,2,3,4,5%5D%3A%0A%20%20%20%20print%28j%29%20%20%20%0Afor%20count%20in%20range%286%29%3A%0A%20%20%20%20print%28count%29%0Afor%20color%20in%20%5B'red',%20'green',%20'blue'%5D%3A%0A%20%20%20%20print%28color%29%20%20%20%20%20%20%0Afor%20i%20in%20range%282%29%3A%0A%20%20%20%20for%20j%20in%20range%282%29%3A%0A%20%20%20%20%20%20%20%20print%28'Look%20around,'%29%0A%20%20%20%20print%28'How%20lucky%20we%20are%20to%20be%20alive!'%29&cumulative=false&heapPrimitives=false&mode=edit&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Loop Puzzles 2](http://pythontutor.com/visualize.html#code=%23Predict%20what%20will%20be%20printed%3A%0A%0Afor%20num%20in%20%5B2,4,6,8,10%5D%3A%0A%20%20%20%20print%28num%29%0A%20%20%20%20%0Asum%20%3D%200%0Afor%20x%20in%20range%280,12,2%29%3A%0A%20%20%20%20print%28x%29%0A%20%20%20%20sum%20%3D%20sum%20%2B%20x%0A%0Aprint%28x%29%0A%0Afor%20c%20in%20%22ABCD%22%3A%0A%20%20%20%20print%28c%29%0A&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Caesar Cipher example](http://pythontutor.com/visualize.html#code=%23Predict%20what%20will%20be%20printed%3A%0A%0Afor%20c%20in%20range%2865,90%29%3A%0A%20%20%20%20print%28chr%28c%29%29%0A%20%20%20%20%0Amessage%20%3D%20%22I%20love%20Python%22%0AnewMessage%20%3D%20%22%22%0Afor%20c%20in%20message%3A%0A%20%20%20%20print%28ord%28c%29%29%20%20%20%23Print%20the%20Unicode%20of%20each%20number%0A%20%20%20%20print%28chr%28ord%28c%29%2B1%29%29%20%20%20%20%23Print%20the%20next%20character%0A%20%20%20%20newMessage%20%3D%20newMessage%20%2B%20chr%28ord%28c%29%2B1%29%20%23add%20to%20the%20new%20message%0Aprint%28%22The%20coded%20message%20is%22,%20newMessage%29%0A%0Aword%20%3D%20%22zebra%22%0AcodedWord%20%3D%20%22%22%0Afor%20ch%20in%20word%3A%0A%20%20%20%20offset%20%3D%20ord%28ch%29%20-%20ord%28'a'%29%20%2B%201%20%23how%20many%20letters%20past%20'a'%0A%20%20%20%20wrap%20%3D%20offset%20%25%2026%20%20%23if%20larger%20than%2026,%20wrap%20back%20to%200%0A%20%20%20%20newChar%20%3D%20chr%28ord%28'a'%29%20%2B%20wrap%29%20%20%23compute%20the%20new%20letter%0A%20%20%20%20print%28wrap,%20chr%28ord%28'a'%29%20%2B%20wrap%29%29%20%20%20%20%23print%20the%20wrap%20%26%20new%20letter%0A%20%20%20%20codedWord%20%3D%20codedWord%20%2B%20newChar%20%23add%20the%20newChar%20to%20the%20coded%20word%0A%20%20%20%20%0Aprint%28%22The%20coded%20word%20%28with%20wrap%29%20is%22,%20codedWord%29%0A&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[input() example](http://pythontutor.com/visualize.html#code=mess%20%3D%20input%28'Please%20enter%20a%20message%3A'%29%0Aprint%28%22You%20entered%22,%20mess%29&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Lecture notes](s18/csci127S18Lecture2.pdf)

Think CS: [Chapter 2](http://interactivepython.org/runestone/static/thinkcspy/SimplePythonData/toctree.html) & [Chapter 3](http://interactivepython.org/runestone/static/thinkcspy/Debugging/toctree.html)

**Recitations:**  
5-8 February

String methods; Problem solving and the design process (simple parsing and translating)

[Lab 2](s18/lab2.html)

[Loops & Turtles](s18/quizzes.html#Q2)

12 February

No Classes: Lincoln's Birthday (observed)

**#3**

**Lecture:**  
13 February

Files & 2D Arrays, Hexadecimal notation  
CS Survey: [Prof. William Sakas](http://www.hunter.cuny.edu/cs/Faculty/Sakas/) (computational linguistics)

[Slicing Challenges](http://www.pythontutor.com/visualize.html#code=for%20d%20in%20range%2810,%200,%20-1%29%3A%0A%20%20%20%20print%28d%29%0Aprint%28%22Blast%20off!%22%29%0A%0Afor%20num%20in%20range%285,8%29%3A%0A%20%20%20%20print%28num,%202*num%29%0A%20%20%20%20%0As%20%3D%20%22City%20University%20of%20New%20York%22%0Aprint%28s%5B3%5D,%20s%5B0%3A3%5D,%20s%5B%3A3%5D%29%0Aprint%28s%5B5%3A8%5D,%20s%5B-1%5D%29%0A%0Anames%20%3D%20%5B%22Eleanor%22,%20%22Anna%22,%20%22Alice%22,%20%22Edith%22%5D%0Afor%20n%20in%20names%3A%0A%20%20%20%20print%28n%29&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Color Challenges](https://trinket.io/python/8e9edc0a1b?runMode=console), [Lecture notes](s18/csci127S18Lecture3.pdf)  

Think CS: [Section 8.10](http://interactivepython.org/runestone/static/thinkcspy/MoreAboutIteration/2DimensionalIterationImageProcessing.html) & [Chapter 11](http://interactivepython.org/runestone/static/thinkcspy/Files/toctree.html),  
[Numpy tutorial (DataCamp)](https://www.datacamp.com/community/tutorials/python-numpy-tutorial)

**Recitations:**  
13-15,20 February

Arrays and images in [numpy](http://www.numpy.org), hexadecimal representation of colors (image processing)

[Lab 3](s18/lab3.html)

[Strings & Lists](s18/quizzes.html#Q3)

19 February

No Classes: Presidents' Day

20 February

Classes follow Monday schedule

**#4**

**Lecture:**  
27 February

More on Lists & Arrays; Decisions;  
CS Survey: [Citi Bike's Bike Angels Team](http://bikeangels.citibike.com)

[Loop & Slice Challenges](http://pythontutor.com/visualize.html#code=word%20%3D%20%22Hunter%22%0Afor%20i%20in%20range%282,10,3%29%3A%0A%20%20%20%20for%20c%20in%20word%3A%0A%20%20%20%20%20%20%20%20print%28i,c,%20end%20%3D%20%22%22%29%0A%20%20%20%20print%28%29%0A%20%20%20%20%0Apali%20%3D%20%22a%20man%20a%20plan%20a%20canal%20Panama%22%0Aprint%28pali%5B0%5D,%20pali%5B-1%5D%29%0Aprint%28pali%5B2%3A5%5D,%20pali%5B-4%3A-1%5D%29%0A%0AqPop%20%3D%20%5B152999,284041,469042,1079129,1297634,%0A%20%20%20%201550849,1809578,1986473,1891325,1951598,%0A%20%20%20%202229379,2230722%5D%0Aprint%28%22Queens%20population%20in%201900%3A%22,%20qPop%5B0%5D%29%0Aprint%28%22Since%202000%3A%22,%20qPop%5B-3%3Alen%28qPop%29%5D%29&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Decision Challenges](http://www.pythontutor.com/visualize.html#code=yearBorn%20%3D%20int%28input%28'Enter%20year%20born%3A%20'%29%29%0Aif%20yearBorn%20%3C%201946%3A%0A%20%20%20%20print%28%22Greatest%20Generation%22%29%0Aelif%20yearBorn%20%3C%3D%201964%3A%0A%20%20%20%20print%28%22Baby%20Boomer%22%29%0Aelif%20yearBorn%20%3C%3D%201984%3A%0A%20%20%20%20print%28%22Generation%20X%22%29%0Aelif%20yearBorn%20%3C%3D%202004%3A%0A%20%20%20%20print%28%22Millennial%22%29%0Aelse%3A%0A%20%20%20%20print%28%22TBD%22%29%0A%20%20%20%20%0Ax%20%3D%20int%28input%28'Enter%20number%3A%20'%29%29%0Aif%20x%20%25%202%20%3D%3D%200%3A%0A%20%20%20%20print%28'Even%20number'%29%0Aelse%3A%0A%20%20%20%20print%28'Odd%20number'%29&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%221966%22,%223%22%5D&textReferences=false),  
[turtleString.py](f17/turtleString.py),  
[Lecture notes](s18/csci127S18Lecture4.pdf)

Think CS: [Chapter 7](http://interactivepython.org/runestone/static/thinkcspy/Selection/toctree.html) & [Chapter 11](http://interactivepython.org/runestone/static/thinkcspy/Files/toctree.html)

**Recitations:**  
21-22,26-27 February

Programming with decisions & files (flood maps)

[Lab 4](s18/lab4.html)

[Colors & Images in numpy](s18/quizzes.html#Q4)

**#5**

**Lecture:**  
6 March

Logical Expressions, Circuits;  
[Open Data Week](http://www.open-data.nyc)

[Types & Decisions Challenges](http://pythontutor.com/visualize.html#code=%23What%20are%20the%20types%3A%0Ay1%20%3D%202017%0Ay2%20%3D%20%222018%22%0Aprint%28type%28y1%29%29%0Aprint%28type%28%22y1%22%29%29%0Aprint%28type%282017%29%29%0Aprint%28type%28%222017%22%29%29%0Aprint%28type%28y2%29%29%0Aprint%28type%28y1/4.0%29%29%0A%0Ax%20%3D%20int%28y2%29%20-%20y1%0Aif%20x%20%3C%200%3A%0A%20%20%20%20print%28y2%29%0Aelse%3A%0A%20%20%20%20print%28y1%29%0A%20%20%20%20%0Acents%20%3D%20432%0Adollars%20%3D%20cents%20//%20100%0Achange%20%3D%20cents%20%25%20100%0Aif%20dollars%20%3E%200%3A%0A%20%20%20%20print%28'%24'%2Bstr%28dollars%29%29%0Aif%20change%20%3E%200%3A%0A%20%20%20%20quarters%20%3D%20change%20//%2025%0A%20%20%20%20pennies%20%3D%20change%20%25%2025%0A%20%20%20%20print%28quarters,%20%22quarters%22%29%0A%20%20%20%20print%28%22and%22,%20pennies,%20%22pennies%22%29%0A%0A%0A&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Logical Operators Challenges](http://pythontutor.com/visualize.html#code=origin%20%3D%20%22Indian%20Ocean%22%0Awinds%20%3D%20100%0A%0Aif%20%28winds%20%3E%2074%29%3A%0A%20%20%20%20print%28%22Major%20storm,%20called%20a%20%22,%20end%3D%22%22%29%0A%20%20%20%20if%20origin%20%3D%3D%20%22Indian%20Ocean%22%20or%20origin%20%3D%3D%20%22South%20Pacific%22%3A%0A%20%20%20%20%20%20%20%20print%28%22cyclone.%22%29%0A%20%20%20%20elif%20origin%20%3D%3D%20%22North%20Pacific%22%3A%0A%20%20%20%20%20%20%20%20print%28%22typhoon.%22%29%0A%20%20%20%20else%3A%0A%20%20%20%20%20%20%20%20print%28%22hurricane.%22%29%0A%0Avisibility%20%3D%200.2%0Awinds%20%3D%2040%0Aconditions%20%3D%20%22blowing%20snow%22%0A%0A%0Aif%20%28winds%20%3E%2035%29%20and%20%28visibility%20%3C%200.25%29%20and%20%5C%0A%20%20%20%20%20%20%28conditions%20%3D%3D%20%22blowing%20snow%22%20or%20conditions%20%3D%3D%20%22heavy%20snow%22%29%3A%0A%20%20%20%20print%28%22Blizzard!%22%29%0A%0A&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Basic Gates](http://www.neuroproductions.be/logic-lab/index.php?id=80205),  
[Circuit Challenges](http://www.neuroproductions.be/logic-lab/index.php?id=80206),  
[Lecture notes](s18/csci127S18Lecture5.pdf)

Think CS: [Chapter 7](http://interactivepython.org/runestone/static/thinkcspy/Selection/toctree.html),  
[Burch's Logic & Circuits](http://www.toves.org/books/logic/), [Explain Logic Gates](http://www.explainthatstuff.com/logicgates.html)

**Recitations:**  
28 February, 1,5-6 March

More on Decisions (snow pack);  
Circuits & Logical Expressions

[Lab 5](s18/lab5.html)

[Decisions & Color](s18/quizzes.html#Q5)

**#6**

**Lecture:**  
13 March

Accessing formatted data; Functions  
CS Survey: [Prof. Katherine St. John](https://stjohn.github.io) (computational biology)

[Arithmetic Challenges](http://pythontutor.com/visualize.html#code=x%20%3D%206%0Ay%20%3D%20x%20%25%204%0Aw%20%3D%20y**3%0Az%20%3D%20w%20//%202%0Aprint%28x,y,w,z%29%0Ax,y%20%3D%20y,w%0Aprint%28x,y,w,z%29%0Ax%20%3D%20y%20/%202%0Aprint%28x,y,w,z%29%0A&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[List/String Challenges](http://pythontutor.com/visualize.html#code=sports%20%3D%20%5B%22Field%20Hockey%22,%22Swimming%22,%22Water%20Polo%22%5D%0Amess%20%3D%20%22Qoauxca%20BrletRce%20crcx%20qvBnqa%20ocUxk%22%0Aresult%20%3D%20%22%22%0Afor%20i%20in%20range%28len%28mess%29%29%3A%0A%20%20%20%20if%20i%20%25%203%20%3D%3D%200%3A%0A%20%20%20%20%20%20%20%20print%28mess%5Bi%5D%29%0A%20%20%20%20%20%20%20%20result%20%3D%20result%20%2B%20mess%5Bi%5D%0Aprint%28sports%5B1%5D,%20result%29%0A&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Lecture notes](s18/csci127S18Lecture6.pdf)

Think CS: [Chapter 6](http://interactivepython.org/runestone/static/thinkcspy/Functions/toctree.html),  
[10-minutes to Pandas Tutorial](https://pandas.pydata.org/pandas-docs/stable/10min.html),  
[DataCamp Pandas Tutorial](https://www.datacamp.com/community/tutorials/pandas-tutorial-dataframe-python#gs.hnyRaik),  
[Ubuntu Terminal Reference Sheet](https://help.ubuntu.com/community/UsingTheTerminal)

**Recitations:**  
7-8,12-13 March

CSV files via [pandas](http://www.pandas.org) (population change);  
Shell Scripts

[Lab 6](s18/lab6.html)

[Circuits, Truth Tables, & Logical Expressions](s18/quizzes.html#Q6)

**#7**

**Lecture:**  
20 March

More on Functions & Open data;  
CS Survey: Mitsue Iwata, [NYC Open Data Team](https://www1.nyc.gov/site/analytics/about/meet-team.page)

[Motto Challenge,  
](http://pythontutor.com/visualize.html#code=motto%20%3D%20%22Mihi%20Cura%20Futuri%22%0Al%20%3D%20len%28motto%29%0Afor%20i%20in%20range%28l%29%3A%0A%20%20%20%20print%28motto%5Bi%5D%29%0Afor%20j%20in%20range%28l-1,-1,-1%29%3A%0A%20%20%20%20print%28motto%5Bj%5D%29%0A%20%20%20%20%0A&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false)[quarterImage.py](f17/quarterImage.py),  
[Hello with main()](http://pythontutor.com/visualize.html#code=%23Name%3A%20%20your%20name%20here%0A%23Date%3A%20%20March%202017%0A%23This%20program,%20uses%20functions,%0A%23%20%20%20%20%20says%20hello%20to%20the%20world!%0A%0Adef%20main%28%29%3A%0A%20%20%20%20%20print%28%22Hello,%20World!%22%29%0A%0Aif%20__name__%20%3D%3D%20%22__main__%22%3A%0A%20%20%20%20%20main%28%29&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Prep #1.2](http://pythontutor.com/visualize.html#code=a%20%3D%204%0Ab%20%3D%20a**2%0Ac%20%3D%20b%20%25%205%0Ad%20%3D%20b%20//%205%0Aprint%28a,b,c,d%29%0Aa,b%20%3D%20b,c%0Aprint%28a,b,c,d%29%0Aa%20%3D%20b%20%25%202%0Aprint%28a,b,c,d%29&cumulative=false&curInstr=9&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Total & Tax Challenge](http://pythontutor.com/visualize.html#code=def%20totalWithTax%28food,tip%29%3A%0A%20%20%20%20total%20%3D%200%0A%20%20%20%20tax%20%3D%200.0875%0A%20%20%20%20total%20%3D%20food%20%2B%20food%20*%20tax%0A%20%20%20%20total%20%3D%20total%20%2B%20tip%0A%20%20%20%20return%28total%29%0A%20%20%20%20%0Alunch%20%3D%20float%28input%28'Enter%20lunch%20total%3A%20'%29%29%0AlTip%20%3D%20float%28input%28'Enter%20lunch%20tip%3A'%20%29%29%0AlTotal%20%3D%20totalWithTax%28lunch,%20lTip%29%0Aprint%28'Lunch%20total%20is',%20lTotal%29%0A%0Adinner%3D%20float%28input%28'Enter%20dinner%20total%3A%20'%29%29%0AdTip%20%3D%20float%28input%28'Enter%20dinner%20tip%3A'%20%29%29%0AdTotal%20%3D%20totalWithTax%28dinner,%20dTip%29%0Aprint%28'Dinner%20total%20is',%20dTotal%29&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Lecture notes](s18/csci127S18Lecture7.pdf)

Think CS: [Chapter 6](http://interactivepython.org/runestone/static/thinkcspy/Functions/toctree.html),  
[10-minutes to Pandas Tutorial](https://pandas.pydata.org/pandas-docs/stable/10min.html),  
[DataCamp Pandas Tutorial](https://www.datacamp.com/community/tutorials/pandas-tutorial-dataframe-python#gs.hnyRaik)

**Recitations:**  
14-15,19-20 March

OpenData NYC (shelter data);  
Using main() functions;  
Python from the command line

[Lab 7](s18/lab7.html)

[Formatted Data & Shell Commands](s18/quizzes.html#Q7)

**#8**

**Lecture:**  
27 March

Parameters & Functions;  
CS Survey: Anna Whitney, Storage Infrastructure Team, Google NYC

[Greet Example](http://pythontutor.com/iframe-embed.html#code=%23Greet%20loop%20example%0A%0Adef%20greetLoop%28person%29%3A%0A%20%20%20%20print%28%22Greetings%22%29%0A%20%20%20%20for%20i%20in%20range%285%29%3A%0A%20%20%20%20%20%20%20%20print%28%22Hello%22,%20person%29%0A%20%20%20%20%20%20%20%20%0AgreetLoop%28%22Thomas%22%29&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Happy Example,  
](http://pythontutor.com/iframe-embed.html#code=%23%20From%20%22Teaching%20with%20Python%22%20by%20John%20Zelle%0A%0Adef%20happy%28%29%3A%0A%20%20%20%20print%28%22Happy%20Birthday%20to%20you!%22%29%0A%0Adef%20sing%28P%29%3A%0A%20%20%20%20happy%28%29%0A%20%20%20%20happy%28%29%0A%20%20%20%20print%28%22Happy%20Birthday%20dear%20%22%20%2B%20P%20%2B%20%22!%22%29%0A%20%20%20%20happy%28%29%0A%0A%0Asing%28%22Fred%22%29%0Asing%28%22Thomas%22%29%0Asing%28%22Hunter%22%29&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false)[Jam Example,  
](http://pythontutor.com/iframe-embed.html#code=def+prob4()%3A%0A++++verse+%3D+%22jam+tomorrow+and+jam+yesterday,%22%0A++++print(%22The+rule+is,%22)%0A++++c+%3D+mystery(verse)%0A++++w+%3D+enigma(verse,c)%0A++++print(c,w)%0Adef+mystery(v)%3A%0A++++print(v)%0A++++c+%3D+v.count(%22jam%22)%0A++++return(c)%0Adef+enigma(v,c)%3A%0A++++print(%22but+never%22,+v%5B-1%5D)%0A++++for+i+in+range(c)%3A%0A++++++++print(%22jam%22)%0A++++return(%22day.%22)%0Aprob4()&origin=opt-frontend.js&cumulative=false&heapPrimitives=false&textReferences=false&py=3&rawInputLstJSON=%5B%5D&curInstr=0&codeDivWidth=350&codeDivHeight=400)[Decisions & Functions Example,  
](http://www.pythontutor.com/iframe-embed.html#code=%23Fall+2013+Final+Exam,+5%0A%0Adef+kuwae(+inLst+)%3A%0A++++tot+%3D+1%0A++++for+item+in+inLst%3A%0A++++++++tot+%3D+tot+*+item%0A++++return+tot%0A%0Adef+foo(+inLst+)%3A%0A++++if+(+inLst%5B-1%5D+%3E+inLst%5B0%5D+)%3A%0A++++++++return+kuwae(+inLst+)%0A++++else%3A%0A++++++++return+-1%0A++++++++%0Afoo(+%5B2,+4,+6,+8%5D+)%0A%0Afoo(+%5B4002,+328,+457,+1%5D+)%0A&mode=display&origin=opt-frontend.js&cumulative=false&heapPrimitives=false&textReferences=false&py=3&rawInputLstJSON=%5B%5D&curInstr=0&codeDivWidth=350&codeDivHeight=400)[Foo example](http://pythontutor.com/iframe-embed.html#code=%20%23From%20Sample%20Exam,%20F%202014%0A%20%0Adef%20bar%28n%29%3A%0A%20%20%20%20if%20n%20%3C%3D%208%3A%20%0A%20%20%20%20%20%20%20%20return%201%0A%20%20%20%20else%3A%0A%20%20%20%20%20%20%20%20return%200%0A%0Adef%20foo%28l%29%3A%0A%20%20%20%20n%20%3D%20bar%28l%5B-1%5D%29%0A%20%20%20%20return%20l%5Bn%5D%0A%20%20%20%20%0Ar%20%3D%20foo%28%5B1,2,3,4%5D%29%0Aprint%28%22Return%3A%20%20%22,%20r%29%0A%0Ar%20%3D%20foo%28%5B1024,512,256,128%5D%29%0Aprint%28%22Return%3A%20%20%22,%20r%29&codeDivHeight=400&codeDivWidth=350&cumulative=false&curInstr=0&heapPrimitives=false&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Sisters Example](http://pythontutor.com/iframe-embed.html#code=%23Sisters%20Example%20from%20Spring%202015,%20%233%0A%0Adef%20prob4%28amy,%20beth%29%3A%0A%20%20%20%20if%20amy%20%3E%204%3A%0A%20%20%20%20%20%20%20%20print%28%22Easy%20case%22%29%0A%20%20%20%20%20%20%20%20kate%20%3D%20-1%0A%20%20%20%20else%3A%0A%20%20%20%20%20%20%20%20print%28%22Complex%20case%22%29%0A%20%20%20%20%20%20%20%20kate%20%3D%20helper%28amy,beth%29%0A%20%20%20%20return%28kate%29%0A%0Adef%20helper%28meg,jo%29%3A%0A%20%20%20%20s%20%3D%20%22%22%0A%20%20%20%20for%20j%20in%20range%28meg%29%3A%0A%20%20%20%20%20%20%20%20print%28j,%20%22%3A%20%22,%20jo%5Bj%5D%29%0A%20%20%20%20%20%20%20%20if%20j%20%25%202%20%3D%3D%200%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20s%20%3D%20s%20%2B%20jo%5Bj%5D%0A%20%20%20%20%20%20%20%20%20%20%20%20print%28%22Building%20s%3A%22,%20s%29%0A%20%20%20%20return%28s%29%0A%20%20%20%20%20%0Ar%20%3D%20prob4%284,%22city%22%29%0Aprint%28%22Return%3A%20%20%22,%20r%29%0A%0Ar%20%3D%20prob4%282,%22university%22%29%0Aprint%28%22Return%3A%20%20%22,%20r%29%09%20%20%20%20%20&codeDivHeight=400&codeDivWidth=350&cumulative=false&curInstr=0&heapPrimitives=false&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Lecture notes](s18/csci127S18Lecture8.pdf)

Think CS: [Chapter 6](http://interactivepython.org/runestone/static/thinkcspy/Functions/toctree.html)

**Recitations:**  
21-22, 26-27 March

Binning data (parking tickets);  
Top-down design (herd of turtles);  
github  

[Lab 8](s18/lab8.html)

[Functions & More Pandas](s18/quizzes.html#Q8)

30 March - 6 April

Spring Break: No Classes

11 April

Classes follow Friday schedule

**#9**

**Lecture:**  
10 April

Programming with Functions & Decisions, Top-down Design, Code Reuse

[Dessert Exam Questions](http://pythontutor.com/visualize.html#code=%23Fall%202012,%20%235,%20version%201%0Adef%20enigma1%28x,y,z%29%3A%0A%20%20%20%20if%20x%20%3D%3D%20len%28y%29%3A%0A%20%20%20%20%20%20%20%20return%28z%29%0A%20%20%20%20elif%20x%20%3C%20len%28y%29%3A%0A%20%20%20%20%20%20%20%20return%28y%5B0%3Ax%5D%29%0A%20%20%20%20else%3A%0A%20%20%20%20%20%20%20%20s%20%3D%20cont1%28z%29%0A%20%20%20%20%20%20%20%20return%28s%2By%29%0Adef%20cont1%28st%29%3A%0A%20%20%20%20r%20%3D%20%22%22%0A%20%20%20%20for%20i%20in%20range%28len%28st%29-1,-1,-1%29%3A%0A%20%20%20%20%20%20%20%20r%20%3D%20r%20%2B%20st%5Bi%5D%0A%20%20%20%20return%28r%29%0A%20%20%20%20%0Aenigma1%287,%22caramel%22,%22dulce%20de%20leche%22%29%0Aenigma1%283,%22cupcake%22,%22vanilla%22%29%0Aenigma1%2810,%22pie%22,%22nomel%22%29&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[num2words example](http://pythontutor.com/visualize.html#code=%23Numbers%20-%3E%20words%20example%20from%20lecture%0A%23Fill%20in%20the%20function%0A%0Adef%20num2words%28num%29%3A%0A%20%20%20%20word%20%3D%20%22%22%0A%20%20%20%20%0A%20%20%20%20%23%20FILL%20IN%20CODE%20%23%0A%20%20%20%20%0A%20%20%20%20return%28word%29%0A%20%20%20%20%0A%23Sample%20calls%20to%20function%3A%0Aprint%281,%20%22is%22,%20num2words%281%29%29%0Aprint%286,%20%22is%22,%20num2words%286%29%29&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Koalas](http://koalastothemax.com),  
[Lecture notes](s18/csci127S18Lecture9.pdf)

Think CS: [Chapter 6](http://interactivepython.org/runestone/static/thinkcspy/Functions/toctree.html),  
[folium tutorial](http://python-visualization.github.io/folium/docs-master/quickstart.html#Getting-Started)

**Recitations:**  
28-29 March, 9-11 April

Folium/leaflet.js (mapping CUNY locations); Finding errors;  
command line git

[Lab 9](s18/lab9.html)

[Parameters & Functions](s18/quizzes.html#Q9)

**#10**

**Lecture:**  
17 April

Indefinite Loops; Simulations  
CS Surveys: [Prof. Susan Epstein](http://www.cs.hunter.cuny.edu/~epstein/) (machine learning)

[Distance Check](http://pythontutor.com/visualize.html#code=dist%20%3D%20int%28input%28'Enter%20distance%3A%20'%29%29%0Awhile%20dist%20%3C%200%3A%0A%20%20%20%20print%28'Distances%20cannot%20be%20negative.'%29%0A%20%20%20%20dist%20%3D%20int%28input%28'Enter%20distance%3A%20'%29%29%0A%0Aprint%28'The%20distance%20entered%20is',%20dist%29&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%223%22%5D&textReferences=false),  
[Nums & While](http://pythontutor.com/visualize.html#code=%23Spring%202012%20Final%20Exam,%20%238%0A%0Anums%20%3D%20%5B1,4,0,6,5,2,9,8,12%5D%20%0Aprint%28nums%29%0Ai%3D0%0Awhile%20i%20%3C%20len%28nums%29-1%3A%0A%20%20%20%20if%20nums%5Bi%5D%20%3C%20nums%5Bi%2B1%5D%3A%0A%20%20%20%20%20%20%20%20nums%5Bi%5D,%20nums%5Bi%2B1%5D%20%3D%20nums%5Bi%2B1%5D,%20nums%5Bi%5D%0A%20%20%20%20i%3Di%2B1%20%0A%20%20%20%20%20%20%20%20%0Aprint%28nums%29%0A%0A&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Max Num](http://pythontutor.com/visualize.html#code=nums%20%3D%20%5B1,4,10,6,5,42,9,8,12%5D%20%0A%0AmaxNum%20%3D%200%0Afor%20n%20in%20nums%3A%0A%20%20%20%20if%20n%20%3E%20maxNum%3A%0A%20%20%20%20%20%20%20%20maxNum%20%3D%20n%0Aprint%28'The%20max%20is',%20maxNum%29&cumulative=false&curInstr=26&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Search](http://pythontutor.com/visualize.html#code=def%20search%28nums,%20locate%29%3A%0A%20%20%20%20found%20%3D%20False%0A%20%20%20%20i%20%3D%200%0A%20%20%20%20while%20not%20found%20and%20i%20%3C%20len%28nums%29%3A%0A%20%20%20%20%20%20%20%20print%28nums%5Bi%5D%29%0A%20%20%20%20%20%20%20%20if%20locate%20%3D%3D%20nums%5Bi%5D%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20found%20%3D%20True%0A%20%20%20%20%20%20%20%20else%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20i%20%3D%20i%2B1%0A%20%20%20%20return%28found%29%0A%20%20%20%20%0Anums%3D%20%5B1,4,10,6,5,42,9,8,12%5D%0Aif%20search%28nums,6%29%3A%0A%20%20%20%20print%28'Found%20it!%206%20is%20in%20the%20list!'%29%0Aelse%3A%0A%20%20%20%20print%28'Did%20not%20find%206%20in%20the%20list.'%29&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=3&rawInputLstJSON=%5B%5D&textReferences=false),  
[Random Walk](https://trinket.io/python/ab6cddc880),  
[Lecture notes](s18/csci127S18Lecture10.pdf)

Think CS: [Chapter 8](http://interactivepython.org/runestone/static/thinkcspy/MoreAboutIteration/toctree.html)

**Recitations:**  
12,16-18 April

Program design with indefinite loops; Writing functions; unit testing (simple recommender system);

[Lab 10](s18/lab10.html)

[More on Functions & Top-down Design](s18/quizzes.html#Q10)

**#11**

**Lecture:**  
24 April

Machine Language Overview

[WeMIPS Emulator](http://rivoire.cs.sonoma.edu/cs351/wemips/),  
[Lecture notes](s18/csci127S18Lecture11.pdf)

[U Idaho reference sheet](http://www.mrc.uidaho.edu/mrc/people/jff/digital/MIPSir.html), [MIPS Wikibooks](https://en.wikibooks.org/wiki/MIPS_Assembly/Instruction_Formats)

**Recitations:**  
19,23-25 April

Simplified machine language

[Lab 11](s18/lab11.html)

[Indefinite Loops & Simulations](s18/quizzes.html#Q11)

**#12**

**Lecture:**  
1 May

Introduction to C++: program structure, data representation and I/O.

[cin/cout example](https://onlinegdb.com/ByzFa5TkG),  
[convert example](https://onlinegdb.com/BkT2_jT1z),  
[loops example](https://onlinegdb.com/HktpcoT1f),  
[growth example](https://onlinegdb.com/Byx-niaJz),  
[nested loops](https://onlinegdb.com/Sy13ToTyG),  
[Lecture notes](s18/csci127S18Lecture12.pdf)

[Cplusplus Tutorial](http://www.cplusplus.com/files/tutorial.pdf),  
[C++ Tutorials Point](https://www.tutorialspoint.com/cplusplus/index.htm),  
[The Rook's Guide to C++](https://rooksguide.files.wordpress.com/2013/12/rooks-guide-isbn-version.pdf)

**Recitations:**  
26,30 April, 1-2 May

Using gcc

[Lab 12](s18/lab12.html)

[Simplified Machine Language](s18/quizzes.html#Q12)

**#13**

**Lecture:**  
8 May

C++ control structures

[Decision example (C++)](https://onlinegdb.com/Hk_q0V8xf),  
[Logical Expressions (C++)](https://onlinegdb.com/H1ewPmSUlz),  
[Input Checking (C++)](https://onlinegdb.com/rJttLSLgG),  
[Input Checking, II (C++)](https://onlinegdb.com/Bkn8DB8eG),  
[Growth Example (C++)](https://onlinegdb.com/rk86urUlf),  
[USGS Hawai'i Earthquakes](https://volcanoes.usgs.gov/observatories/hvo/hvo_earthquakes.html), [Turtle Quakes Demo](https://trinket.io/python/c06d30262b)  
[NYC Urban Forest: Street Trees](https://tree-map.nycgovparks.org),  
[Lecture notes](s18/csci127S18Lecture13.pdf)

[Cplusplus Tutorial](http://www.cplusplus.com/files/tutorial.pdf),  
[C++ Tutorials Point](https://www.tutorialspoint.com/cplusplus/index.htm),  
[The Rook's Guide to C++](https://rooksguide.files.wordpress.com/2013/12/rooks-guide-isbn-version.pdf)

**Recitations:**  
3,7-9 May

Control Structures in C++

[Lab 13](s18/lab13.html)

[Introduction to C++](s18/quizzes.html#Q13)

**#14**

**Lecture:**  
15 May

Review

[Final Exam Information](s18/final/final.html)

**Recitations:**  
10,14-16 May

Review

[End-of-semester Survey](s18/quizzes.html#Q14)

Tuesday, 22 May 2018  
9:00 - 11:00 am

Final Exam

_(This file was last modified on 28 May 2018.)_
