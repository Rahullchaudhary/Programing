n=int(input())
a=n**2
sum=0
while(a!=1):
    rem=a%10
    s=rem**2
    sum=sum+s
    a=a//10
if(sum==1):
    print("Happy number")
else:
    print("Not happy number")
    
