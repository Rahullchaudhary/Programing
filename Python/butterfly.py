for row in range(1,18):
    for col in range(1,18):
        if(col==1 or col==17 or row==col or col+row==18 or (col==9 and row==2) or ((col==10 or col==8) and row==3) or ((col==7 or col==11) and row==4) or ((col==6 or col==12) and row==5) or ((col==7 or col==11) and row==6) or ((col==8 or col==10) and row==7) or (col==9 and row==8) or (col==9 and row==10) or((col==8 or col==10) and row==11) or ((col==7 or col==11) and row==12) or ((col==6 or col==12) and row==13) or ((col==7 or col==11) and row==14) or ((col==8 or col==10) and row==15) or (col==9 and row==16) or (col==9 and row==4)):
            print("*",end='')
        else:
            print(' ',end='')
    print()
