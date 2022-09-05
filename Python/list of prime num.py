list=[]
a=int(input("Enter first number:"))
b=int(input("Enter second number:"))
for n in range(a,b+1):
    for i in range(2,n):
        if(n%i==0):
            break
    else:
        list.append(n)
print(list)
