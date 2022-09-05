sum=0
n=int(input("Enter number:"))
a=b=n
digits=0
while(n!=0):
    n=n//10
    digits=digits+1
while(a!=0):
    rem=a%10
    sum=sum+rem**digits
    a=a//10
if(sum==b):
    print(sum,"is armstrong.")
    
else:
    print(sum,"is not armstrong.")
    
