m=int(input("Enter row size:"))
n=int(input("Enter column size:"))
list=[]
for i in range(m):
    l=[]
    for j in range(n):
        l.append(int(input("Enter element")))
    list.append(l)
print(list)
