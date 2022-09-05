n=int(input("Enter number:"))
for row in range(1,n+1):
    for col in range(1,row+1):
        if(row==col or col==0):
            print("1",end="")
    print()
