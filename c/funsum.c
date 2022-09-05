#include<stdio.h>
void main()
{
add();
add();
add();
}
add()
{
int a,b,s=0;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
s=a+b;
printf("%d\n\n",s);
}
