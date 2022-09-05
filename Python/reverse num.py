a=0
n=int(input("Enter number:"))
rev=0
while(n!=0):
    a=n%10
    rev=rev*10+a
    n=n//10
print("Reverse number:",rev)
