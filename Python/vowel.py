n=[]
vowel=['a','e','i','o','u']
l=input("Enter a string:")
for i in l:
    if(i in vowel):
        if(l.count(i)==1):
            n.append(i)
print(n)
