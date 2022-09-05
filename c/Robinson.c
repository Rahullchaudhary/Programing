#include<stdio.h>
void main()
{
int num,fact,r,t,s=0,i;
printf("Enter Number:");
scanf("%d",&num);
t=num;
while(num>0)
{
r=num%10;
fact=1;
for(i=1;i<=r;i++)
{
fact=fact*i;
}
s=s+fact;
num=num/10;
}
if(t==s)
printf("\n\nRobinson Number\n\n");
else
printf("\n\nNot Robinson Number\n\n");
}
