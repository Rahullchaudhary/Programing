a=int(input("Enter table number:"))
n=int(input())
for x in range(a,n+1):
    for y in range(1,11):
        print('{:8}'.format(x*y),end='')
    print()
