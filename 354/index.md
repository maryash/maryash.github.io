---
layout: myDefault
title: CSCI 395 MAIN PAGE
---

**[CSCI 39500 &nbsp; &nbsp; DATABASE DESIGN &nbsp; &nbsp; HUNTER COLLEGE &nbsp; &nbsp; CITY UNIVERSITY OF NEW YORK](index.html)**  
[**SYLLABUS**](syllabus.html){:target="_blank"}&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
[**PROGRAMMING GUIDELINES**](programming_guidelines.html){:target="_blank"}&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
[**GRADESCOPE**](https://www.gradescope.com/courses/ "Entry Code "){:target="_blank"}  
  
**LECTURE AND LAB** &nbsp; Genady Maryash &nbsp; gmaryash@hunter.cuny.edu  
Mondays and Wednesdays 8:30 AM - 9:45 AM on line  
  
**TEXTBOOK**  
Clare Churcher "Beginning Database Design" 2nd (2012) Edition — either book or PDF.  
Additional requireded readings and tutorials will be provided on this course webpage.  
  
**REQUIRED SUPPLIES**  
You will write/draw all homeworks, tests, and exams with pen on paper in the exact maner that I demand; quality of presentation of your work is a large part of each grade.  You MUST buy this [PARTICULAR GRID PAPER](https://www.amazon.com/gp/product/B001IZKYYS/ref=ox_sc_act_title_2?smid=A36N3VFG4OZIHD){:target="_blank"} and these [0.7mm BLACK **Pilot FriXion** PENS](https://www.amazon.com/gp/product/B009QYH52C/ref=ox_sc_act_title_1?smid=ATVPDKIKX0DER){:target="_blank"}.  I do not allow any other paper or pens/pencils.  Scanner app: [ 🍏 ](https://apps.apple.com/fr/app/scanner-app-genius-scan/id377672876){:target="_blank"} / [ 🤖 ](https://play.google.com/store/apps/details?id=com.thegrizzlylabs.geniusscan.free&hl=en){:target="_blank"}  
      
**COURSE OUTLINE**  
  
DATE | LECTURE | LAB&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  
 --- | --- | --- 
Week&nbsp;&nbsp;1<br/>What Can Go Wrong<br/><br/>Lab&nbsp;&nbsp;&nbsp;&nbsp;1<br/>The SQLite Environment Tutorial|Mishandling Keywords and Categories 1<br/>Repeated Information 4<br/>Designing for a Single Report 6|| 
Week&nbsp;&nbsp;2<br/>Guided Tour of the Development Process<br/><br/>Lab&nbsp;&nbsp;&nbsp;&nbsp;2<br/>Host-Language Interface Python Tutorial|Initial Problem Statement 10<br/>Simple Data Model 12<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Classes and Objects 12<br/>&nbsp;&nbsp;&nbsp;&nbsp;Relationships 13*<br/>Further Analysis: Revisiting the Use Cases 16<br/>Design 19<br/>Implementation 20<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Interfaces for Input Use Cases 21<br/>&nbsp;&nbsp;&nbsp;&nbsp;Reports for Output Use Cases 22*|| 
Week&nbsp;&nbsp;3<br/>Initial Requirements and Use Cases<br/><br/>Lab&nbsp;&nbsp;&nbsp;&nbsp;3<br/>Python Frontend Flask Tutorial|Real and Abstract Views of a Problem 26<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Data Minding 27<br/>&nbsp;&nbsp;&nbsp;&nbsp;Task Automation 28*<br/>What Does the User Do? 30<br/>What Data Are Involved? 30<br/>What Is the Objective of the System? 32<br/>What Data are Required to Satisfy the Objective? 33<br/>What are the Input Use Cases? 34<br/>What Is the First Data Model? 36<br/>What Are the Output Use Cases? 37<br/>More About Use Cases 38<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Actors 38<br/>&nbsp;&nbsp;&nbsp;&nbsp;Exceptions and Extensions 39<br/>&nbsp;&nbsp;&nbsp;&nbsp;Use Cases for Maintaining Data 39<br/>&nbsp;&nbsp;&nbsp;&nbsp;Use Cases for Reporting Information 40*<br/>Finding Out More About the Problem 40<br/>&nbsp;&nbsp;&nbsp;&nbsp;What Have We Postponed? 41<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Changing Prices 41<br/>&nbsp;&nbsp;&nbsp;&nbsp;Meals That Are Discontinued 41<br/>&nbsp;&nbsp;&nbsp;&nbsp;Quantities of Particular Meals 41*|| 
Week&nbsp;&nbsp;4<br/>Learning from the Data Model<br/><br/>Lab&nbsp;&nbsp;&nbsp;&nbsp;4<br/>Introduction to 1st, 2nd, & 3rd Normal Forms|Review of Data Models 43<br/>Optionality: Should It Be 0 or 1? 46<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Student Course Example 46<br/>&nbsp;&nbsp;&nbsp;&nbsp;Customer Order Example 47<br/>&nbsp;&nbsp;&nbsp;&nbsp;Insect Example 47*<br/>A Cardinality of 1: Might It Occasionally Be Two? 48<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Insect Example 48<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Sports Club Example 49*<br/>A Cardinality of 1: What About Historical Data? 50<br/>&nbsp;&nbsp;&nbsp;&nbsp;Sports Club Example 50<br/>&nbsp;&nbsp;&nbsp;&nbsp;Departments Example 51<br/>&nbsp;&nbsp;&nbsp;&nbsp;Insect Example 51*<br/>A Many–Many: Are We Missing Anything? 52<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Sports Club Example 53<br/>&nbsp;&nbsp;&nbsp;&nbsp;Student Course Example 55<br/>&nbsp;&nbsp;&nbsp;&nbsp;Meal Delivery Example 55<br/>&nbsp;&nbsp;&nbsp;&nbsp;When&nbsp;a&nbsp;Many&#8209;Many&nbsp;Doesn’t&nbsp;Need&nbsp;an&nbsp;Intermediate&nbsp;Class&nbsp;56*|| 
Week&nbsp;&nbsp;5<br/>Developing a Data Model<br/><br/>Lab&nbsp;&nbsp;&nbsp;&nbsp;5<br/>Tutorial on 1st and 2nd NF|Attribute, Class, or Relationship? 59<br/>Two or More Relationships Between Classes 61<br/>Different Routes Between Classes 63<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Redundant Information 64<br/>&nbsp;&nbsp;&nbsp;&nbsp;Routes Providing Different Information 65<br/>&nbsp;&nbsp;&nbsp;&nbsp;False Information from a Route (Fan Trap) 65<br/>&nbsp;&nbsp;&nbsp;&nbsp;Gaps in a Route Between Classes (Chasm Trap) 67*<br/>Relationships Between Objects of the Same Class 68<br/>Relationships Involving More Than Two Classes 69|| 
Week&nbsp;&nbsp;6<br/>Generalization and Specialization<br/><br/>Lab&nbsp;&nbsp;&nbsp;&nbsp;6<br/>Tutorial on Python-SQLite-Hosted-on-PythonAnywhere|Classes or Objects with Much in Common 75<br/>Specialization 76<br/>Generalization 77<br/>Inheritance in Summary 79<br/>When Inheritance Is Not a Good Idea 80<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Confusing Objects with Subclasses 80<br/>&nbsp;&nbsp;&nbsp;&nbsp;Confusing an Association with a Subclass 81*<br/>When Is Inheritance Worth Considering? 81<br/>Should the Superclass Have Objects? 83<br/>Objects That Belong to More Than One Subclass 84<br/>Composites and Aggregates 87<br/>It Isn’t Easy 89|| 
Week&nbsp;&nbsp;8<br/>From Data Model to Relational Database Design<br/><br/>Lab&nbsp;&nbsp;&nbsp;&nbsp;7<br/>Examples of real world DB<br/>requirements|Representing the Model 94<br/>Representing Classes and Attributes 94<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Creating a Table 95<br/>&nbsp;&nbsp;&nbsp;&nbsp;Choosing Data Types 97<br/>&nbsp;&nbsp;&nbsp;&nbsp;Domains and Constraints 98<br/>&nbsp;&nbsp;&nbsp;&nbsp;Checking Character Fields 99*<br/>Primary Key 100<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Determining a Primary Key 100<br/>&nbsp;&nbsp;&nbsp;&nbsp;Concatenated Keys 101*<br/>Representing Relationships 102<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Foreign Keys 103<br/>&nbsp;&nbsp;&nbsp;&nbsp;Referential Integrity 104<br/>&nbsp;&nbsp;&nbsp;&nbsp;Representing 1–Many Relationships 105<br/>&nbsp;&nbsp;&nbsp;&nbsp;Representing Many–Many Relationships 106<br/>&nbsp;&nbsp;&nbsp;&nbsp;Representing 1–1 Relationships 108<br/>&nbsp;&nbsp;&nbsp;&nbsp;Representing Inheritance 109*|| 
Week&nbsp;&nbsp;7<br/>Normalization|Update Anomalies 113<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Insertion Problems 114<br/>&nbsp;&nbsp;&nbsp;&nbsp;Deletion Problems 114<br/>&nbsp;&nbsp;&nbsp;&nbsp;Dealing With Update Anomalies 115*<br/>Functional Dependencies 115<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Definition of a Functional Dependency 115<br/>&nbsp;&nbsp;&nbsp;&nbsp;Functional Dependencies and Primary Keys 116*<br/>Normal Forms 118<br/>&nbsp;&nbsp;&nbsp;&nbsp;*First Normal Form 118<br/>&nbsp;&nbsp;&nbsp;&nbsp;Second Normal Form 119<br/>&nbsp;&nbsp;&nbsp;&nbsp;Third Normal Form 120<br/>&nbsp;&nbsp;&nbsp;&nbsp;Boyce–Codd Normal Form 122<br/>&nbsp;&nbsp;&nbsp;&nbsp;Data Models or Functional Dependencies? 122*<br/>Additional Considerations 123<br/><br/>Lab&nbsp;&nbsp;&nbsp;&nbsp;8<br/>Python: substantial host-language<br/>program integration|| 
Week&nbsp;&nbsp;9<br/>More on Keys and Constraints<br/><br/>Lab&nbsp;&nbsp;&nbsp;&nbsp;9<br/>Work with database Cursors|Choosing a Primary Key 129<br/>&nbsp;&nbsp;&nbsp;&nbsp;*More About ID Numbers 129<br/>&nbsp;&nbsp;&nbsp;&nbsp;Candidate Keys 130<br/>&nbsp;&nbsp;&nbsp;&nbsp;An ID Number or a Concatenated Key? 131*<br/>Unique Constraints 133<br/>Using Constraints Instead of Category Classes 135<br/>Deleting Referenced Records 137|| 
Week&nbsp;10<br/>Query Basics<br/>Lab&nbsp;10<br/>Python: populating RDB from flat file / external data sources|Simple Queries on One Table 141<br/>&nbsp;&nbsp;&nbsp;&nbsp;*The Project Operation 142<br/>&nbsp;&nbsp;&nbsp;&nbsp;The Select Operation 142<br/>&nbsp;&nbsp;&nbsp;&nbsp;Aggregates 143<br/>&nbsp;&nbsp;&nbsp;&nbsp;Ordering 145*<br/>Queries with Two or More Tables 145<br/>&nbsp;&nbsp;&nbsp;&nbsp;*The Join Operation 145<br/>&nbsp;&nbsp;&nbsp;&nbsp;Set Operations 147*<br/>How Indexes Can Help 149<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Indexes and Simple Queries 149<br/>&nbsp;&nbsp;&nbsp;&nbsp;Disadvantages of Indexes 151<br/>&nbsp;&nbsp;&nbsp;&nbsp;Types of Indexes 152*<br/>Views 152<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Creating Views 153<br/>&nbsp;&nbsp;&nbsp;&nbsp;Uses for Views 153*|| 
Week&nbsp;11<br/>Other Implementations<br/>Lab&nbsp;11<br/>Normalizing your project database into 4NF|Object–Oriented Implementation 169<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Classes and Objects 169<br/>&nbsp;&nbsp;&nbsp;&nbsp;Complex Types and Methods 171<br/>&nbsp;&nbsp;&nbsp;&nbsp;Collections of Objects 173<br/>&nbsp;&nbsp;&nbsp;&nbsp;Representing Relationships 173<br/>&nbsp;&nbsp;&nbsp;&nbsp;OO Environments 175*<br/>Implementing a Data Model in a Spreadsheet 176<br/>&nbsp;&nbsp;&nbsp;&nbsp;*1–Many Relationships 177<br/>&nbsp;&nbsp;&nbsp;&nbsp;Many–Many Relationships 180*<br/>Implementing in XML 181<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Representing Relationships 183<br/>&nbsp;&nbsp;&nbsp;&nbsp;Defining XML types 185*<br/>Querying XML 186<br/>NoSQL 186|| 
Week&nbsp;12<br/>User InterfaceLab&nbsp;12<br/>Judicious Use of Denormalization|Input Forms 157<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Data Entry Forms Based on a Single Table 158<br/>&nbsp;&nbsp;&nbsp;&nbsp;Data Entry Forms Based on Several Tables 159<br/>&nbsp;&nbsp;&nbsp;&nbsp;Constraints on a Form 161<br/>&nbsp;&nbsp;&nbsp;&nbsp;Restricting Access to a Form 163*<br/>Reports 163<br/>&nbsp;&nbsp;&nbsp;&nbsp;*Basing Reports on Views 163<br/>&nbsp;&nbsp;&nbsp;&nbsp;Main Parts of a Report 164<br/>&nbsp;&nbsp;&nbsp;&nbsp;Grouping and Summarizing 164*|| 
Week&nbsp;13<br/>Final Project Presentations|| 
Week&nbsp;14<br/>Semester Review|| 
Week&nbsp;15<br/>Final Exam|| 

---    



 --- | --- 
The E/R Model<br/>Weak Entity Sets<br/>The DB Environment|4.1 The Entity/Relationship Model<br/>4.2 Design Principles<br/>4.4 Weak Entity Sets 
E/R Diagrams, Subclasses<br/>Relational Design<br/>Host Language Interface|4.5 From E/R to Relational Designs<br/>4.6 From Subclass Structures to Relations<br/>4.7 Unified Modeling Language 
UML Diagrams, ODL<br/>Designs to Relations|4.8 From UML Diagrams to Relations<br/>4.9 Object Definition Language<br/>4.10 From ODL to Relational Designs<br/>9.1 The Three-Tier Architecture 
The Relational Model of Data<br/>Defining Schema|2.1 An Overview of Data Models<br/>2.2 Basics of the Relational Model<br/>2.3 Defining Relation Schema in SQL<br/>7.1 Keys and Foreign Keys 
Simple Queries,  3-Tier Architecture<br/>Web Tier Flask Tutorial|6.1 Simple Queries in SQL<br/>6.2 Queries with More Than One Relation<br/>9.1 The Three-Tier Architecture 
Algebraic Query Language|2.4 An Algebraic Query Language<br/>5.1 Relational Operations on Bags
Functional Dependencies, Normalization|3.1 Functional Dependencies<br/>3.2 Rules on Functional Dependencies<br/>3.3&nbsp;Design&nbsp;of&nbsp;Relational&nbsp;Database&nbsp;Schemas 
Constraints, (Transactions)|7.2 Constraints on Attributes and Tuples<br/>7.3 Modification of Constraints<br/>6.6 Transactions in SQL 
Subquerries, Database Modifications|6.3 Subqueries<br/>6.4 Full-Relation Operations<br/>6.5 Database Modifications
Decomposition,  BCNF and 3NF|3.4 Decomposition: Good, Bad, and Ugly<br/>3.5 Third Normal Form
Multivalued Dependencies, 4NF|3.6 Multivalued Dependencies<br/>3.7 An Algorithm for Discovering MVD's 

---    

### Instructor Evaluations:
**Computer: [www.hunter.cuny.edu/te](http://www.hunter.cuny.edu/te){:target="_blank"}**  

**Smartphone: [www.hunter.cuny.edu/mobilete](http://www.hunter.cuny.edu/mobilete){:target="_blank"}**
  
   
---  
     
<!-- 

 
 -->
  
---  
  

   

