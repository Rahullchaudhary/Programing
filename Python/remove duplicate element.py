l=[1,2,3,4,5,6,2,3,56,1,3]
t=[]
for i in l:
    if i not in t:
        t.append(i)
print(t)
