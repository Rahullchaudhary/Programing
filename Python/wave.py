n=int(input("Enter number:"))
for i in range(1,n+1):
    for j in range(1,i+1):
        print(' '*(n-i),'*'*(2*i-1),' '*(n-i),end='',sep='')
    print()
