n=int(input("Enter number:"))
c=0
for i in range(1,n+1):
    for j in range(1,i+1):
        print(j+c,end=" ")
    c=c+2*i-j
    print()
    
