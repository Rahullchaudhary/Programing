n=int(input("Enter pattern size:"))
for j in range(1,n+1):
    print('*'*j,' '*(n-j),(n-j)*' ','*'*j,sep='')
for i in range(1,n+2):
    print((n+1-i)*'*',(i-1)*' ',(i-1)*' ',(n+1-i)*'*',sep='')
