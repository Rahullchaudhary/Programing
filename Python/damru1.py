n=int(input("Enter pattern size:"))
for j in range(1,n+1):
    if(j!=n):
        print("*"*j," "*(n-j),(n-j)*" ","*"*j,sep="")
    else:
        print("*"*n,"*"*n,sep="")
for i in range(1,n+1):
    if(i!=1):
        print((n+1-i)*"*",(i-1)*" ",(i-1)*" ",(n+1-i)*"*",sep="")
