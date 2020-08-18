#!/usr/bin/env python
# coding: utf-8

# In[7]:


s = 0
n = 0
for a in range(0,6):
    for b in range(0,6):
        for i in range(0,6):
            for j in range(0,6):
                d = abs(i - a) + abs(j - b)
                s = s+d
                n = n+1
a = s/1296
print( "The average distamce between the points is",a)


# In[ ]:




