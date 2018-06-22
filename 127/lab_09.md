---
layout: myDefault
title: LAB 9
---

### [<span style="font-family:Arial">CSCI 127 &nbsp; Introduction to Computer Science</span>](../127_2018_summer.html)  
<span style="line-height:0.1; font-family:Arial; font-size:21.8px">Hunter College &nbsp; City University of New York</span> 

---  
  	
LAB 9
---

Today's lab will focus on mapping data, using pandas, numpy, and folium.

Software tools needed: web browser and Python IDLE programming environment with the pandas, numpy, and folium package installed.

### In-class Quiz

During lab, there is a [quiz](quizzes.html). The password to access the quiz will be given during lab. To complete the quiz, log on to Blackboard (see [Lab 1](lab_01.html) for details on using Blackboard).

### World Maps

We are going to use Python to make maps. Let's start by mapping cities of the world. Locations in the world are usually indicated by their latitude and longitude.

*   **Latitude** measures the number of degrees north or south of the equator. When written as a number, it ranges from -90 (the south pole) to +90 (the north pole).
*   **Longitude** measures the number of degrees east or west of the prime meridian. When written as a number, it ranges from -180 to +180.

We will use those ranges to be our coordinates: (-90, -180) to (90,180). Let's map some cities:

In the trinket below, map the following cities (GIS coordinates are rounded to the nearest whole number):

*   New York City (longitude: -74, latitude: 41),
*   Los Angeles (longitude: -118, latitude: 34),
*   Paris, France (longitude: 2, latitude:49),
*   Tokyo, Japan (longitude: 140, latitude: 35), and
*   Rio de Janeiro, Brazil (longitude: -43, latitude: -23) .

<iframe width="800" height="600" frameborder="1" src="https://trinket.io/embed/python/7705126110?start=result"></iframe><br>  

### Folium

[Folium](https://pypi.python.org/pypi/folium) is a Python package that uses the javascript [Leaflet.js](http://leafletjs.com) library to make beautiful interactive maps. Instead of popping up a matplotlib window, folium creates an **.html** file that you can open (and view interactively) with a browser. After the program runs, open the corresponding html file in a web browser to see your map.

(Folium is installed on the lab machines, To check to see if your home machine has it, type at the Python prompt: import folium  
If you get an error, go to the terminal, and download it:

pip install folium

and the package will download and install.)

#### Our First Map

<iframe width="800" height="400" frameborder="1" src="world.html"></iframe><br>  

To make a map in folium, the process is:

*   Write a program in Python, using folium.
*   Run the program, which outputs an .html file.
*   Open the .html file in a browser.

Here's our first program:

#Import the folium package for making maps
import folium

#Create a map, centered (0,0), and zoomed out a bit:
mapWorld = folium.Map(location=\[0, 0\],zoom_start=3)

#Save the map:
mapWorld.save(outfile='tempMap.html')

Save this file and run it. It will create a file called tempMap.html. Open your favorite browser (Chrome, Firefox, IE, etc.) and choose "Open File" and then choose the file tempMap.html. You should see a map of the world.

#### Map of New York City

Let's make another map, focused on New York City. To do that, when we set up the map object, we need to reset the location to New York City and the increase the zoom level:

import folium

mapCUNY = folium.Map(location=\[40.75, -74.125\], zoom_start=10)

Let's add in a marker for Hunter College:

folium.Marker(location = \[40.768731, -73.964915\], popup = "Hunter College").add_to(mapCUNY)

and create the .html file:

mapCUNY.save(outfile='nycMap.html')

Save your commands to a file and run via IDLE. Your program will create an HTML file called, nycMap.html. Open it in your favorite browser to make sure it creates a map of NYC with a marker for Hunter College. When you have a running program, see the [Programming Problem List](ps.html).

### Plotting from Files

We can combine the mapping of folium with the tools we have used for CSV files.

Let's make an interactive map of the CUNY campuses. We can download a CSV file from data.ny.gov:

*   [CUNY Campuses](https://data.ny.gov/Education/City-University-of-New-York-CUNY-University-Campus/i5b5-imzn/data)

(Export as a **.csv** file and save in the same directory as your programs. ) Open the file to make sure you have all the lines (should be 23) and to check if the column headings occur in the first row (they do, so no need to skip rows when reading in the file).

Let's use Pandas to read in the file. We will need to import pandas and folium:

import folium
import pandas as pd

To read in the CSV file, we'll use pandas' CSV reader. We'll print out the campus locations to make sure that all were read in:

cuny = pd.read_csv('cunyLocations.csv')
print (cuny\["Campus"\])

Note: we saved our CSV file to 'cunyLocations.csv'. If you saved it to a different name, change the input parameters for read_csv() to the name of your file.

Next, let's set up a map, centered on Hunter College:

mapCUNY = folium.Map(location=\[40.768731, -73.964915\])

We need to add markers for each campus. We're going to iterate through the rows of dataframe to create the markers:

for index,row in cuny.iterrows():
    lat = row\["Latitude"\]
    lon = row\["Longitude"\]
    name = row\["Campus"\]
    newMarker = folium.Marker(\[lat, lon\], popup=name)
    newMarker.add_to(mapCUNY)

For each row in the file, we find the latitude, longitude, and name of the campus, and use those to create a new marker which we add to our map. We repeat for each row, until we have made markers for all 23 campuses in the file.

Lastly, let's save our map:

mapCUNY.save(outfile='cunyLocations.html')

To view your map, open a browser. From the browser, open the file: cunyLocations.html.

### Command Line git

In [Lab 8](lab_08.html), we introduced github which can be used to share and store code, websites, etc. (roughly, a "Google Docs" for programs). The website for this course as well as all the programs are stored in repositories (or "repos") at github.

The github site has both a web browser interface (which we used last lab), and the option to use the command line interface to interact with the site. For this course, we will only retrieve code from existing repos (in future courses, they will introduce how to share your code and merge your changes with others).

From Program #35 onward, all sample programs are available at the class repository (repo):

> [https://github.com/stjohn/csci127](https://github.com/stjohn/csci127)

You can access programs by going to the website, or, using the following git command at the command line:

git clone https://github.com/stjohn/csci127

This command will make a copy of all the programs in the class repo in directory called, csci127, in your current working directory.

If you have that directory already and would like to update it with new files that have been (we periodically update the repo), you can 'fetch' the changes:

git fetch https://github.com/stjohn/csci127

### What's Next?

If you finish the lab early, now is a great time to get a head start on the programming problems due early next week. There's instructors to help you, and you already have Python up and running. The [Programming Problem List](assignments.html) has problem descriptions, suggested reading, and due dates next to each problem.
