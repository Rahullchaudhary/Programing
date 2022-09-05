n=int(input("Enter number:"))
s=0
c=0
while(n!=0):
    rem=n%10
    s=s+rem
    n=n//10
    if(s>9):
        s=s%10
        s=s//10
if(s<9):
    print(s)
else:
    print("is",c)
