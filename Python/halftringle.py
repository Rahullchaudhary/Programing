n=int(input("Enter the pattern size:"))
for i in range(1,n):
    print('*'*(n-i),i*' ')
for i in range(1,n+1):
    print('*'*i,(n-i)*' ')
