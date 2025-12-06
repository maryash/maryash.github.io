---
layout: myDefault 
title: LAB 1  
---  

LAB 1  
---  

Today’s lab will focus on downloading and setting up SQLiteStudio.  
Software tools needed: web browser.

### Downloading SQLiteStudio

We will be using SQLiteStudio, a GUI database browser that lets you work with SQLite databases without having to use the terminal.

To install and launch it:

1. Navigate to the [SQLiteStudio website](https://sqlitestudio.pl/) and download the installer based on your operating system.

2. Once the file has downloaded, open it. You should see an image with the SQLiteStudio icon. Double-click the icon to launch the application.

*You may encounter a security warning while opening. If so, go to Settings → Privacy & Security and click on “Open Anyway”*

3. Follow the prompts to complete the setup, including accepting the license agreement. After installation, launch SQLiteStudio. You should see the main interface, ready for use.

### Using SQLiteStudio

1. Create a new database by clicking on the database icon with a plus sign in the top bar (Control + O). Fill it out with the following information:

   Database Type: SQLite 3  
   File: Select “Create a new database file,” then click the folder icon and choose where you want your database to be stored.  
   Name: `mydatabase`

2. On the left-side panel, right-click on `mydatabase` and select "Connect to the database".

3. Right-click on "Tables" and select "Create table", then name it `Member`.

4. Click on the column icon to add columns to the *Member* table.  
   Set up the first column as follows:

   Name: MemberID  
   Data Type: INTEGER  
   Select "Primary Key" and "Not NULL"

 Click OK to save the column, and repeat this process for the remaining columns.

 ![Member Table](MemberTable.png)

5. Once the columns are created, we can add tuples to the `Member` table. To add tuples, click on the "Data" tab, then click the green **+** icon to insert a new row  
   Enter the following data:  

Click on the ✅ icon to save the changes.
