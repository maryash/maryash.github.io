---
layout: myDefault 
title: LAB 3  
---  

# LAB 3

<p align="center">
<img src="Python.png" alt="Python" width="450">
</p>

Today’s lab will focus on using Python as the host-laguage interface.  
Software tools needed: DBeaver and Visual Studio Code.

## Create the tables in DBeaver

As we learned in [Lab 2](https://maryash.github.io/354/labs/lab_02$0), lets create the following tables in DBeaver:

<p align="center">
<img src="lab3_01.png" alt="Member Table" width="450">
</p>

<p align="center">
<img src="lab3_02.png" alt="Type Table" width="450">
</p>

## Join queries using Python

1. Lets open VSCode, and create a python file called `lab3.py` and save this file on your desktop. 

    If you don't have VS Code installed, follow this short [youtube video](https://www.youtube.com/watch?v=qj5JLEQLelk$0) for installation instructions.

2. We have to connect to the database that we created in DBeaver using Python:  

    ``` sql
        import sqlite3
        
        conn = sqlite3.connect("dbeaverdatabase.db")
        cur = conn.cursor()
    ```

3. Lets execute a CROSS JOIN and display the results using the following code:

    ```sql
        cur.execute("""
        SELECT *
        FROM Member m CROSS JOIN Type t;
        """)
        
        rows = cur.fetchall()
        for row in rows:
            print(row)
    ```

4. Close the connection
    ```sql
        conn.close()
    ```

5. Run the program with 
    ```sql
        python lab3.py
    ```

Your complete `lab3.py` file should look like this:

    ```sql
        import sqlite3
        
        conn = sqlite3.connect("dbeaverdatabase.db")
        cur = conn.cursor()
        
        cur.execute("""
        SELECT *
        FROM Member m CROSS JOIN Type t;
        """)
        
        rows = cur.fetchall()
        for row in rows:
            print(row)
        
        conn.close()
    ```

It will display
<p align="center">
<img src="lab3_03.png" alt="CROSS JOIN" width="450">
</p>

### INNER JOIN

Now it is your turn to try an INNER JOIN. Your result should look like the following:

<p align="center">
<img src="lab3_04.png" alt="INNER JOIN" width="450">
</p>

### OUTER JOINS
For outer joins, the idea is similar to the inner join.

##### LEFT OUTER JOIN
<p align="center">
<img src="lab3_04.png" alt="LEFT OUTER JOIN" width="450">
</p>

##### RIGHT OUTER JOIN
<p align="center">
<img src="lab3_05.png" alt="RIGHT OUTER JOIN" width="450">
</p>

##### FULL OUTER JOIN
<p align="center">
<img src="lab3_06.png" alt="FULL OUTER JOIN" width="450">
</p>










