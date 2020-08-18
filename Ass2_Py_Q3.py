#!/usr/bin/env python
# coding: utf-8

# In[7]:


import csv
arrM = []
arrN = []
arrP = []
arrA = []
arrQ = []
for i in range(0,3):
    arrP.insert(i,[0,0,0])
    arrA.insert(i,[0,0,0])
    arrQ.insert(i,[0,0,0])
#1st matrix   
with open('M.csv') as csvdf:
    csvr = csv.reader(csvdf)
    for row in csvr:
        for i in range(0,3):
            row[i] = int(row[i])
        arrM.append(row)
print("The M matrix is:")
for i in range(0,3):
    print(arrM[i])
#Second matrix
with open('N.csv') as csvDF:
    columns = csv.reader(csvDF)
    for col in columns:
        for i in range(0,3):
            col[i] = int(col[i])
        arrN.append(col)
print("The N matrix is:")
for i in range(0,3):
    print(arrN[i])
#multiplication M*N
for a in range(0,3):
    for b in range(0,3):
        for i in range(0,3):
            x = arrM[a][i]*arrN[i][b]
            arrP[a][b] = arrP[a][b] + x
print("The product M*N matrix is:")
for i in range(0,3):
    print(arrP[i])
#A matrix
for i in range(0,3):
    for j in range(0,3):
        if(i == j):
            arrA[i][j] = -1
        else:
            arrA[i][j] = 0
print("The A matrix is:")
for i in range(0,3):
    print(arrP[i])
    
#multiplication M*A

for a in range(0,3):
    for b in range(0,3):
        for i in range(0,3):
            x = arrM[a][i]*arrA[i][b]
            arrQ[a][b] = arrQ[a][b] + x

print("The product M*A is:")
for i in range(0,3):
    print(arrQ[i])
#RESULT:
"""The M matrix is:
[1, 1, 1]
[1, 1, 1]
The N matrix is:
[-1, -1, -1]
[-1, -1, -1]
[-1, -1, -1]
The product M*N matrix is:
[-3, -3, -3]
[-3, -3, -3]
[-3, -3, -3]
The A matrix is:
[-3, -3, -3]
[-3, -3, -3]
[-3, -3, -3]
The product M*A is:
[-1, -1, -1]
[-1, -1, -1]
[-1, -1, -1]"""


# In[ ]:





# In[ ]:




