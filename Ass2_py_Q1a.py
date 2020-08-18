#!/usr/bin/env python
# coding: utf-8

# In[7]:


a = 0
n = 0
for i in range(1,7):
    for j in range(1,7):
        d = i - j
        if(d<0):d = (-1)*d
        a = a + d
        n = n+1
a = a/n
print("The average distance between the points is ", a , ".",)
#The average distance between the points is 1.94444.


# In[ ]:




