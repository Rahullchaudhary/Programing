list=[]
a=int(input())
b=int(input())
for n in range(a,b+1):
    fact=1
    for i in range(1,n+1):
        fact=fact*i
        list.append(fact)
print(list)
