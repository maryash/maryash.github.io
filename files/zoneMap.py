#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Mar 14 12:15:09 2017

@author: stjohn

This program requires two input files:
   zoneDist.csv:  which contains the zoning information from the city
      with unique IDs added for each district
   zoningIDs.json: the geometric shapes of each district with the
      unique IDs added 
"""



#Import useful libraries:
import folium
import pandas as pd


#Read in the zoning CSV file 
zones = pd.read_csv('zoneDist.csv')
print(zones)



#Define a function that will filter zone districts into categmanories:
    
def filterDist(dist):
    #If has a residential designation:
    if "R" in dist:
        return 0
    #If it's not residential but has a commercial designation:
    elif "C" in dist:
        return 10
    else:  #everything else, most likely manufacturing
        return 20

        
#Apply the filter to our dataframe to create a new column:
zones['District Type'] = zones['Zoning District'].apply(filterDist)
print(zones)

#Create choropleth map:

mapZones = folium.Map(location=[40.71, -74.00], 
                      zoom_start=11, 
                      tiles = 'Cartodb Positron')
mapZones.choropleth(geo_path='zoningIDs.json', 
                  data=zones,
                  columns=['arbID', 'District Type'],
                  key_on='feature.properties.arbID',
                  fill_color='YlOrRd', fill_opacity=0.7, line_opacity=0.3
                  )


#Create the html file with the map:
mapZones.save(outfile='zoning2.html')
