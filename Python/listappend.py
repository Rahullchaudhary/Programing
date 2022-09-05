l=input().split()
t=[]
for i in range(len(l)):
    l[i]=int(l[i])
for i in range(len(l)):
    if(type(l[i])==type(1)):
        t.append(l[i])
print(t)
