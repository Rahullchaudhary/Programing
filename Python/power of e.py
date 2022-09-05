#program for e**x
x=int(input("Enter number:"))
n=int(input("Enter number:"))
sum=0
for i in range(n):
    fact=1
    for j in range(1,i+1):
        fact=fact*j
    sum=sum+(i**x)/fact
print(sum)
