
for i in [1,2,3,4,5]:
    print('R'*i)

for i in range(1,6):
    print(str(i)*i)
d='H'
for i in range(5,0,-1):
    print(str(i)*i)
g='U'
for i in range(5,0,-1):
    print(str(i)*(6-i))
for i in range(5):
    print(' '*(4-i),'R'*(i+1),sep=' ')

for i in range(6):
    print(' '*(5-i),str(i)*i,sep=' ')
s='12345'
for i in range(5):
    print(s[0:5-i])
for i in range(5):
    print((4-i)*' ','*'*(2*i+1),sep=' ')

 
