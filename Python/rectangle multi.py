for row in range(1,10):
    for col in range(1,10):
        if(row==1 or row==9 or col==1 or col==9 or row+col==10 or row==col):
            print('*',end='')
        else:
            print(' ',end='')
    print()
