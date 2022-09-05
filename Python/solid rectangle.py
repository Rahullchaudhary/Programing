for row in range(1,10):
    for col in range(1,10):
        if(row==1 or row==9 or col==1 or col==9):
            print('*',end='')
        else:
            print(' ',end='')
    print()
