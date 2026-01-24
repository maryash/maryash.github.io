---
layout: myDefault 
title: LAB 5  
---  

# LAB 5

Today's lab will be about self joins and provide a brief introduction to Flask

Let's not beat around the bush, and go straight to the point. We can use the same folder `subqueries` that we used in the previous lab. We only need to delete the csv files, and it will be ready to go. Alternatively, we can create a new folder named `flask` and move the existing database `dbeaverdatabase.db` into that folder, and create a new p=Python file called `app.py`

<p align="center">
<img src="lab5_01.png" alt="flask folder" width="200">
</p>

To recreate the table on page 59 of the book, use the following SQL script. If you forgot how to create a new table in DBeaver, check out [Lab2](https://maryash.github.io/354/labs/lab_02).

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

## Self join
Self joins are Cartesian product (every combination of rows from each table) followed by selecting a subset of those rows that satisfy some join condition.

So when we run
```
SELECT *
FROM Member m INNER JOIN Member c ON m.Coach = c.MemberID;
```
this is part of the Cartesian product that we are doing
<p align="center">
<img src="lab5_02.png" alt="self join" width="650">
</p>

The join condition `m.Coach = c.MemberID` then filters this result, keeping only the rows where a member’s coach matches another member’s `MemberID`:
<p align="center">
<img src="lab5_03.png" alt="result" width="550">
</p>

Since we are only interested in the first and last names of the coaches, we select only those columns. We also apply `DISTINCT` to avoid duplicate results:
```
SELECT DISTINCT c.FirstName, c.LastName
FROM Member m INNER JOIN Member c ON m.Coach = c.MemberID;
```

This is the result we see in DBeaver
<p align="center">
<img src="lab5_04.png" alt="result" width="350">
</p>

And this is the result we see when running the same query in Python from the terminal 

        import sqlite3

        conn = sqlite3.connect("dbeaverdatabase.db")
        cur = conn.cursor()

        cur.execute("""
        SELECT DISTINCT c.FirstName, c.LastName
        FROM Member m INNER JOIN Member c ON m.Coach = c.MemberID;
        """)

        rows = cur.fetchall()
        for first, last in rows:
        print(f"{first} {last}")

        conn.close()

<p align="center">
<img src="lab5_05.png" alt="result" width="550">
</p>

## Flask
In real applications, we don't just do queries in database tools like DBeaver or in the terminal. While running SQL directly is useful for learning and testing, most real-world applications access databases through code and display results in a user-friendly interface. Therefore, in this lab we will have a brief introduction to Flask. Flask acts as a simple bridge between the database and the user interface. It lets us take the results of a self join query and present them in a formatted web page.

### Installing flask

In the terminal, type the foolowing command
``` 
python -m pip install flask
```
