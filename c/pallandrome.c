#include<stdio.h>
void main()
{
int n,t,s=0,r;
printf("Enter Number:");
scanf("%d",&n);
t=n;
while(n>0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
if(t==s)
printf("\n\nPallandrome");
else
printf("\n\nNot Pallandrome");
}
