---
layout: myDefault 
title: LAB 5  
---  

# LAB 5

Today's lab will be about self joins and a brief introduction to Flask

Let's not beat around the bushes, and go straight to the point. We can use the same folder `subqueries` that we used in the previous lab. We only need to delete the csv files, and it is good to go. Or we can create a new folder named `flask` and move the existing database `dbeaverdatabase.db` to the folder, and create a new python file `app.py`

<p align="center">
<img src="lab5_01.png" alt="flask folder" width="350">
</p>

To recreate the table on page 59 of the book, use the following SQL script. If you forgot how to create a new table in DBeaver, checkout [Lab2](https://maryash.github.io/354/labs/lab_02).

        PRAGMA foreign_keys = ON;

        DROP TABLE IF EXISTS Member;

        CREATE TABLE Member (
        MemberID   INTEGER PRIMARY KEY,
        LastName   TEXT NOT NULL,
        FirstName  TEXT NOT NULL,
        Handicap   INTEGER,
        MemberType TEXT,
        Gender     TEXT,
        Coach      INTEGER,
        FOREIGN KEY (Coach) REFERENCES Member(MemberID)
        );

        INSERT INTO Member (MemberID, LastName, FirstName, Handicap, MemberType, Gender, Coach) VALUES
        (118, 'McKenzie', 'Melissa', 30, 'Junior', 'F', 153),
        (138, 'Stone', 'Michael', 30, 'Senior', 'M', NULL),
        (153, 'Nolan', 'Brenda', 11, 'Senior', 'F', NULL),
        (176, 'Branch', 'Helen', NULL, 'Social', 'F', NULL),
        (178, 'Beck', 'Sarah', NULL, 'Social', 'F', NULL),
        (228, 'Burton', 'Sandra', 26, 'Junior', 'F', 153),
        (235, 'Cooper', 'William', 14, 'Senior', 'M', 153),
        (239, 'Spence', 'Thomas', 10, 'Senior', 'M', NULL),
        (258, 'Olson', 'Barbara', 16, 'Senior', 'F', NULL),
        (286, 'Pollard', 'Robert', 19, 'Junior', 'M', 235),
        (290, 'Sexton', 'Thomas', 26, 'Senior', 'M', 235),
        (323, 'Wilcox', 'Daniel', 3, 'Senior', 'M', NULL),
        (331, 'Schmidt', 'Thomas', 25, 'Senior', 'M', 153),
        (332, 'Bridges', 'Deborah', 12, 'Senior', 'F', 235),
        (339, 'Young', 'Betty', 21, 'Senior', 'F', NULL),
        (414, 'Gilmore', 'Jane', 5, 'Junior', 'F', 153),
        (415, 'Taylor', 'William', 7, 'Senior', 'M', 235),
        (461, 'Reed', 'Robert', 3, 'Senior', 'M', 235),
        (469, 'Willis', 'Carolyn', 29, 'Junior', 'F', NULL),
        (487, 'Kent', 'Susan', NULL, 'Social', 'F', NULL);






install flask
``` 
python -m pip install flask
```
