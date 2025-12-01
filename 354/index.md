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
  
DATE&nbsp; | TOPIC | READINGS | SLIDES | ASSIGNMENTS 
 --- | --- | --- | --- | --- 
Week&nbsp;&nbsp;1|The E/R Model<br/>Weak Entity Sets<br/>The DB Environment|What Can Go Wrong|Mishandling Keywords and Categories 1<br/>Repeated Information 4<br/>Designing for a Single Report 6|4.1 The Entity/Relationship Model<br/>4.2 Design Principles<br/>4.4 Weak Entity Sets
Lab&nbsp;&nbsp;1|The SQLite Environment Tutorial|||
Week&nbsp;&nbsp;2|E/R Diagrams, Subclasses<br/>Relational Design<br/>Host Language Interface|Guided Tour of the Development Process|Initial Problem Statement 10<br/>Simple Data Model 12<br/>**Classes and Objects 12<br/>Relationships 13**<br/>Further Analysis: Revisiting the Use Cases 16<br/>Design<br/>Implementation  20<br/>**Interfaces for Input Use Cases<br/>21 Reports for Output Use Cases 22**|4.5 From E/R to Relational Designs<br/>4.6 From Subclass Structures to Relations<br/>4.7 Unified Modeling Language
Lab&nbsp;&nbsp;2|Host-Language Interface Python Tutorial|||
Week&nbsp;&nbsp;3|UML Diagrams, ODL<br/>Designs to Relations|Initial Requirements and Use Cases|Real and Abstract Views of a Problem 26<br/>**Data Minding 27<br/>Task Automation 28**<br/>What Does the User Do? 30<br/>What Data Are Involved? 30<br/>What Is the Objective of the System? 32<br/>What Data are Required to Satisfy the Objective? 33<br/>What are the Input Use Cases? 34<br/>What Is the First Data Model? 36<br/>What Are the Output Use Cases? 37<br/>More About Use Cases 38<br/>**Actors 38<br/>Exceptions and Extensions 39<br/>Use Cases for Maintaining Data 39<br/>Use Cases for Reporting Information 40**<br/>Finding Out More About the Problem 40<br/>What Have We Postponed? 41<br/>**Changing Prices 41<br/>Meals That Are Discontinued 41<br/>Quantities of Particular Meals 41|4.8 From UML Diagrams to Relations<br/>4.9 Object Definition Language<br/>4.10 From ODL to Relational Designs<br/>9.1 The Three-Tier Architecture
Lab&nbsp;&nbsp;3|Python Frontend Flask Tutorial|||
Week&nbsp;&nbsp;4|The Relational Model of Data<br/>Defining Schema|Learning from the Data Model|Review of Data Models 43<br/>Optionality: Should It Be 0 or 1? 46<br/>**Student Course Example 46<br/>Customer Order Example 47<br/>Insect Example 47**<br/>A Cardinality of 1: Might It Occasionally Be Two? 48<br/>**Insect Example 48<br/>**Sports Club Example 49**<br/>A Cardinality of 1: What About Historical Data? 50<br/>Sports Club Example 50<br/>Departments Example 51<br/>Insect Example 51**<br/>A Many–Many: Are We Missing Anything? 52<br/>**Sports Club Example 53<br/>Student Course Example 55<br/>Meal Delivery Example 55<br/>When a Many–Many Doesn’t Need an Intermediate Class 56**|2.1 An Overview of Data Models<br/>2.2 Basics of the Relational Model<br/>2.3 Defining Relation Schema in SQL<br/>7.1 Keys and Foreign Keys
Lab&nbsp;&nbsp;4|Introduction to 1st, 2nd, & 3rd Normal Forms|||
Week&nbsp;&nbsp;5|Simple Queries,  3-Tier Architecture<br/>Web Tier Flask Tutorial|Developing a Data Model|Attribute, Class, or Relationship? 59<br/>Two or More Relationships Between Classes 61<br/>Different Routes Between Classes 63<br/>**Redundant Information 64<br/>Routes Providing Different Information 65<br/>False Information from a Route (Fan Trap) 65<br/>Gaps in a Route Between Classes (Chasm Trap) 67**<br/>Relationships Between Objects of the Same Class 68<br/>Relationships Involving More Than Two Classes 69|6.1 Simple Queries in SQL<br/>6.2 Queries with More Than One Relation<br/>9.1 The Three-Tier Architecture
Lab&nbsp;&nbsp;5|Tutorial on 1st and 2nd NF|||
Week&nbsp;&nbsp;6|Algebraic Query Language|Generalization and Specialization|Classes or Objects with Much in Common 75<br/>Specialization 76<br/>Generalization 77<br/>Inheritance in Summary 79<br/>When Inheritance Is Not a Good Idea 80<br/>**Confusing Objects with Subclasses 80<br/>Confusing an Association with a Subclass 81**<br/>When Is Inheritance Worth Considering? 81<br/>Should the Superclass Have Objects? 83<br/>Objects That Belong to More Than One Subclass 84<br/>Composites and Aggregates 87<br/>It Isn’t Easy 89|2.4 An Algebraic Query Language<br/>5.1 Relational Operations on Bags
Lab&nbsp;&nbsp;6|Tutorial on Python-SQLite-Hosted-on-PythonAnywhere|||
Week&nbsp;&nbsp;8|Functional Dependencies, Normalization|From Data Model to Relational Database Design|Representing the Model 94<br/>Representing Classes and Attributes 94<br/>**Creating a Table 95<br/>Choosing Data Types 97<br/>Domains and Constraints 98<br/>Checking Character Fields 99**<br/>Primary Key 100<br/>**Determining a Primary Key 100<br/>Concatenated Keys 101**<br/>Representing Relationships 102<br/>**Foreign Keys 103<br/>Referential Integrity 104<br/>Representing 1–Many Relationships 105<br/>Representing Many–Many Relationships 106<br/>Representing 1–1 Relationships 108<br/>Representing Inheritance 109**|3.1 Functional Dependencies<br/>3.2 Rules on Functional Dependencies<br/>3.3&nbsp;Design&nbsp;of&nbsp;Relational&nbsp;Database&nbsp;Schemas
Lab&nbsp;&nbsp;7|Examples of real world DB<br/>requirements|||
Week&nbsp;&nbsp;7|Constraints, (Transactions)|Normalization|Update Anomalies 113<br/>**Insertion Problems 114<br/>Deletion Problems 114<br/>Dealing With Update Anomalies 115**<br/>Functional Dependencies 115<br/>**Definition of a Functional Dependency 115<br/>Functional Dependencies and Primary Keys 116**<br/>Normal Forms 118<br/>**First Normal Form 118<br/>Second Normal Form 119<br/>Third Normal Form 120<br/>Boyce–Codd Normal Form 122<br/>Data Models or Functional Dependencies? 122**<br/>Additional Considerations 123|7.2 Constraints on Attributes and Tuples<br/>7.3 Modification of Constraints<br/>6.6 Transactions in SQL
Lab&nbsp;&nbsp;8|Python: substantial host-language<br/>program integration|||
Week&nbsp;&nbsp;9|Subquerries, Database Modifications|More on Keys and Constraints|Choosing a Primary Key 129<br/>**More About ID Numbers 129<br/>Candidate Keys 130<br/>An ID Number or a Concatenated Key? 131**<br/>Unique Constraints 133<br/>Using Constraints Instead of Category Classes 135<br/>Deleting Referenced Records 137|6.3 Subqueries<br/>6.4 Full-Relation Operations<br/>6.5 Database Modifications
Lab&nbsp;&nbsp;9|Work with database Cursors|||
Week&nbsp;10|Decomposition,  BCNF and 3NF|Query Basics|Simple Queries on One Table 141<br/>**The Project Operation 142<br/>The Select Operation 142<br/>Aggregates 143<br/>Ordering 145**<br/>Queries with Two or More Tables 145<br/>**The Join Operation 145<br/>Set Operations 147**<br/>How Indexes Can Help 149<br/>**Indexes and Simple Queries 149<br/>Disadvantages of Indexes 151<br/>Types of Indexes 152**<br/>Views 152<br/>**Creating Views 153<br/>Uses for Views 153**|3.4 Decomposition: Good, Bad, and Ugly<br/>3.5 Third Normal Form
Lab&nbsp;10|Python: populating RDB from flat file / external data sources|||
Week&nbsp;11|Multivalued Dependencies, 4NF|Other Implementations||3.6 Multivalued Dependencies<br/>3.7 An Algorithm for Discovering MVD's
Lab&nbsp;11|Normalizing your project database into 4NF|||
Week&nbsp;12|Views, Indexes|* User Interface|Input Forms 157<br/>**Data Entry Forms Based on a Single Table 158<br/>Data Entry Forms Based on Several Tables 159<br/>Constraints on a Form 161<br/>Restricting Access to a Form 163**<br/>Reports 163<br/>**Basing Reports on Views 163<br/>Main Parts of a Report 164<br/>Grouping and Summarizing 164**|8.1 Virtual Views<br/>8.2 Modifying Views<br/>8.3 Indexes in SQL<br/>8.4 Selection of Indexes
Lab&nbsp;12|Judicious Use of Denormalization|||
Week&nbsp;13|Final Project Presentations|||
Week&nbsp;14|Semester Review|||
Week&nbsp;15|Final Exam|||
 |  |  |  | 
Week&nbsp;&nbsp;1 | The E/R Model<br/>Weak Entity Sets<br/>The DB Environment | 4.1 The Entity/Relationship Model<br/>4.2 Design Principles<br/>4.4 Weak Entity Sets |  | 
Lab&nbsp;&nbsp;1 | The SQLite Environment Tutorial |  |  | 
Week&nbsp;&nbsp;2 | E/R Diagrams, Subclasses<br/>Relational Design<br/>Host Language Interface | 4.5 From E/R to Relational Designs<br/>4.6 From Subclass Structures to Relations<br/>4.7 Unified Modeling Language  |  | 
Lab&nbsp;&nbsp;2 | Host-Language Interface Python Tutorial |  |  | 
Week&nbsp;&nbsp;3 | UML Diagrams, ODL<br/>Designs to Relations | 4.8 From UML Diagrams to Relations<br/>4.9 Object Definition Language<br/>4.10 From ODL to Relational Designs<br/>9.1 The Three-Tier Architecture |  | 
Lab&nbsp;&nbsp;3 | Python Frontend Flask Tutorial |  |  | 
Week&nbsp;&nbsp;4 | The Relational Model of Data<br/>Defining Schema | 2.1 An Overview of Data Models<br/>2.2 Basics of the Relational Model<br/>2.3 Defining Relation Schema in SQL<br/>7.1 Keys and Foreign Keys |  | 
Lab&nbsp;&nbsp;4 | Introduction to 1st, 2nd, & 3rd Normal Forms |  |  | 
Week&nbsp;&nbsp;5 | Simple Queries,  3-Tier Architecture<br/>Web Tier Flask Tutorial | 6.1 Simple Queries in SQL<br/>6.2 Queries with More Than One Relation<br/>9.1 The Three-Tier Architecture |  | 
Lab&nbsp;&nbsp;5 | Tutorial on 1st and 2nd NF |  |  | 
Week&nbsp;&nbsp;6 | Algebraic Query Language | 2.4 An Algebraic Query Language<br/>5.1 Relational Operations on Bags |  | 
Lab&nbsp;&nbsp;6 | Tutorial on Python-SQLite-Hosted-on-PythonAnywhere |  |  | 
Week&nbsp;&nbsp;8 | Functional Dependencies, Normalization | Update Anomalies 113<br/>Functional Dependencies 115<br/>Normal Forms 118<br/> |  | 3.1 Functional Dependencies<br/>3.2 Rules on Functional Dependencies<br/>3.3&nbsp;Design&nbsp;of&nbsp;Relational&nbsp;Database&nbsp;Schemas 
Lab&nbsp;&nbsp;7 | Examples of real world DB<br/>requirements |  |  | 
Week&nbsp;&nbsp;7 | Constraints, (Transactions) | Choosing a Primary Key 129<br/>Unique Constraints 133<br/>Instead of Category Classes<br/>Deleting Referenced Records |  | 7.2 Constraints on Attributes and Tuples<br/>7.3 Modification of Constraints<br/>6.6 Transactions in SQL 
Lab&nbsp;&nbsp;8 | Python: substantial host-language<br/>program integration |  |  | 
Week&nbsp;&nbsp;9 | Subquerries, Database Modifications | 6.3 Subqueries<br/>6.4 Full-Relation Operations<br/>6.5 Database Modifications |  | 
Lab&nbsp;&nbsp;9 | Work with database Cursors |  |  | 
Week&nbsp;10 | Decomposition,  BCNF and 3NF | 3.4 Decomposition: Good, Bad, and Ugly<br/>3.5 Third Normal Form |  | 
Lab&nbsp;10 | Python: populating RDB from flat file / external data sources |  |  | 
Week&nbsp;11 | Multivalued Dependencies, 4NF | 3.6 Multivalued Dependencies<br/>3.7 An Algorithm for Discovering MVD's |  | 
Lab&nbsp;11 | Normalizing your project database into 4NF |  |  | 
Week&nbsp;12 | Views, Indexes | 8.1 Virtual Views<br/>8.2 Modifying Views<br/>8.3 Indexes in SQL<br/>8.4 Selection of Indexes |  | 
Lab&nbsp;12 | Judicious Use of Denormalization |  |  | 
Week&nbsp;13 | Final Project Presentations |  |  | 
Week&nbsp;14 | Semester Review |  |  | 
Week&nbsp;15 | Final Exam |  |  | 


---    

### Instructor Evaluations:
**Computer: [www.hunter.cuny.edu/te](http://www.hunter.cuny.edu/te){:target="_blank"}**  

**Smartphone: [www.hunter.cuny.edu/mobilete](http://www.hunter.cuny.edu/mobilete){:target="_blank"}**
  
   
---  
     
<!-- 

 
 -->
  
---  
  

   

