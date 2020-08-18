#!/usr/bin/env python
# coding: utf-8

# In[18]:


A = [1,2,3]
B = [1,-2,1]
a = A[0]*B[0] + A[1]*B[1] + A[2]*B[2]
print(a)

C = []
for i in range(0,3):
    a = A[i]+B[i]
    C.insert(i,str(a))
    C[i] = int(C[i])

print("The vector obtained by adding A and B is" ,C)
#The dot product of two vectors is 0.
#The vector obtained by adding A and B is [2,0,4]


# In[ ]:




