l=input().split( )
for i in range(len(l)):
    l[i]=int(l[i])
min=l[0]
for i in range(1,len(l)):
    if(l[i]<min):
        min=l[i]
print(min)
