#include<stdio.h>
#include<math.h>
void main()
{
int a,b,s=0,i=0,r,t;
printf("Enter Number:");
scanf("%d",&t);
a=t;
b=t;
while(t>0)
{
i++;
t=t/10;
}
while(a>0)
{
r=a%10;
s=s+pow(r,i);
a=a/10;
}
if(s==b)
printf("Armstrong");
else
printf("Not Armstrong");
}
