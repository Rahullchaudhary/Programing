for i in range(1,5):
    if(i==2 or i==3):
        print((4-i)*' ','*',' '*2,'*',end='',sep='')
    else:
        print((4-i)*' ','*'*4,end='',sep='')
    print()
