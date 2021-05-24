#Utility to convert data from txt file into csv using numpy
#data in the input file is written in one column
import numpy as np

#total number of lines in the txt file
with open('ml.txt') as infile:
    i = 1
    for line in infile:
        i=i+1

#making a table with dimensions [i x 9]
#i rows, 9 columns
dataArray = np.zeros((i,9))
x = []

#reading the file
file_in = open('ml.txt', 'r')
for y in file_in.readlines():
    if(float(y) != 888): #removing lines with special symbols, in this case '888'
        x.append(float(y))

#building a csv table
l = 1
j = 0
for item in x:
    if(j==9):
        j=0
        l = l+1
    dataArray[l,j] = item
    j = j+1

#savind csv
np.savetxt("result_.csv", dataArray, delimiter=", ", header="C1, C2, C3, C4, C5, C6, C7, C8, C9")
