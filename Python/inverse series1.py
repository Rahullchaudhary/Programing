n=int(input())
sum=0
for j in range(1,n+1):
    fact=1
    for i in range(1,j+1):
        fact=fact*i
        sum=sum+n/fact
print(sum)
