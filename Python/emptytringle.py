n=int(input("Enter pattern size:"))
space=1
for i in range(1,n+1):
    if(i!=1):
        print(' '*(n-i),'*',' '*space,'*',sep='')
        space=space+2
    else:
        print(' '*(n-i),'*',sep='')
space=2*n-5
for i in range(n-1,0,-1):
    if(i!=1):
        print(' '*(n-i),'*',' '*space,'*',sep='')
        space=space-2
    else:
        print(' '*(n-i),'*',sep='')
