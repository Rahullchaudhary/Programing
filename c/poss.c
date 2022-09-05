#include<stdio.h>
void main()
{
int a[10],i;
printf("Enter The Elements:\n");
for(int i=0;i<=9;i++)
{
scanf("%d",&a[i]);
if(a[i]<0)
{
printf("Negative%d\t",i,a[i]);
}
else
{
printf("Positive%d\t",i,a[i]);
}
}
}
