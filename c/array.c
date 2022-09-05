#include<stdio.h>
void main()
{
int a[5];
printf("enter the elements:");
for(int i=1;i<5;i++)
{
scanf(" %d",&a[i]);
}
printf("-----------");
for(int i=5;i>=1;i--)
{
printf("%d",a[i]);
}
}