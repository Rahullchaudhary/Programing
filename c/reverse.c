#include<stdio.h>
void main()
{
int  a[5],i;
printf("enter the elements:");
for(int i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
printf("_______");
for(int i=4;i>=0;i--)
{
printf("%d\t",a[i]);
}
}
