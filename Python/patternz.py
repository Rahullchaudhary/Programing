n=int(input("Enter pattern size:"))
for i in range(1,n):
    if(i!=1 and i!=(n-1)):
        print((n-1-i)*' ','*',' ',end='',sep='')
    else:
        print('*'*(n-1),end='',sep='')
    print()
