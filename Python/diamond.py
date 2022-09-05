n=int(input("Entre pattern size:"))
for i in range(1,n+1):
    print((n-i)*' ','*'*(2*i-1),sep='')
for i in range(1,n):
    print(' '*i,'*'*(2*n-1-2*i),sep='')
