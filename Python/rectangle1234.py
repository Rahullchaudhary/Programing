
for row in range(1,8):
    for col in range(1,8):
        if(row==1 or col==1 or row==7 or col==7):
            print('4',end='')
        elif(row==2 or row==6 or col==2 or col==6):
            print('3',end='')
        elif(row==3 or row==5 or col==3 or col==5):
            print('2',end='')
        else:
            print('1',end='')
    print()
