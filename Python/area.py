a=int(input("Enter first side dimenson:"))
b=int(input("Enter second side dimenson:"))
c=int(input("Enter third side dimenson:"))
if (a>0 and b>0 and c>0 and (a+b)>c and (b+c)>a and (c+a)>b):
	s=(a+b+c)/2
	area=(s*(s-a)*(s-b)*(s-c))**(0.5)
	print("Area of the tringle is",area)
else:
	print("Invaid tringle:")
