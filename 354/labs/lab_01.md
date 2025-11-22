---
layout: myDefault 
title: LAB 1  
---  
  
LAB 1  
---  

Today’s lab will focus on setting up an environment for SQLite in VS Code.

Software tools needed: VS Code.


### Using SQLite

We will be using SQLite since it is a simple tool for learning SQL and databases without worrying about servers or accounts setup.
On macOS, SQLite is preinstalled. 

To verify its presence and check the version, open your terminal and run the following command:

*   Click the icon of the terminal. It will launch a terminal window in which you can type commands.
*   In the terminal window, type:
    
	    sqlite3 --version
    
    (followed by an enter/return).
    
    If it is installed, you will see the version number.


Instead of using the shell window (where we can try things immediately), we will use a graphical tool called SQLite extension in VS Code.

1.  First, let's open VS Code. If you do not have VS Code installed yet, follow these instructions to download it [Download VS Code](https://www.youtube.com/watch?v=2-s90N2K1_s)
2.  Open VS Code and click on “Open Folder” on your left screen, and create a folder called “Database” and open it. Inside the created folder in VS Code, create files called “mydatabase.db” and “mysql.sql” by clicking on the New File icon.
    
3.  On the left sidebar, click on the Extensions icon which is a square formed by four squares. In the search box at the top, type:

        SQLite
4.  Install SQLite extension. Once it is installed, lets reload the window because some extensions do not start until VS Code restarts. Command + Shift + P, and type:

        Developer: Reload Window
    (followed by an Enter/Return)

5.  Open the SQL file you created earlier, and type the following SQL commands into it:
    ```
    -- It inserts student table to the database
    CREATE TABLE student(
    student_ID INT NOT NULL PRIMARY KEY,
    first_name TEXT NOT NULL,
    last_name TEXT NOT NULL
    );


    -- It inserts this tuple into the student table
    INSERT INTO student(student_ID, first_name, last_name) VALUES (1, 'John', 'Smith');


    -- Query
    SELECt * FROM student;

    ```
6. To execute the code, right-click anywhere inside the SQL file and select “Run Query”. On the right side of your screen, you will see the table that you created along with the tuple that you inserted into the table.
