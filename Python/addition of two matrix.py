m=int(input("Enter row size:"))
n=int(input("Enter column size:"))
a=[]
b=[]
c=[]
for i in range(m):
    l=[]
    for j in range(n):
        l.append(int(input("Enter element")))
    a.append(l)
for i in range(m):
    l=[]
    for j in range(n):
        l.append(int(input("Enter element")))
    b.append(l)
for i in range(m):
    l=[]
    for j in range(n):
        l.append(a[i][j]+b[i][j])
    c.append(l)
print(c)
    

