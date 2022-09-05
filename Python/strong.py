n=int(input("Enter number"))
s=0
a=n
while(n!=0):
    fact=1
    rem=n%10
    n=n//10
    for i in range(1,rem+1):
        fact=fact*i
    s=s+fact
if(s==a):
    print("Strong number")
else:
    print("Not Strong number")
