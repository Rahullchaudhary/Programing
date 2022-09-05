n=int(input("Enter size"))
for row in range(1,n):
    for column in range(1,n):
        if(column<=row):
            print(1,end='')
    print()
