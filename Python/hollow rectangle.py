for row in range(1,4):
    for col in range(1,7):
        if(row==1 or col==1 or row==3 or col==6):
            print('*',end=' ')
        else:
            print(' ',end='')
    print()
