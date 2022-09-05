a,b,c,d=map(int,input().split())
max=d if d>a else a if a>b else b if b>c  else c
print(max)
