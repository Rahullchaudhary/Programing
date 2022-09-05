#include<stdio.h>
void main()
{
int a;
printf("Enter number:");
scanf("%d",&a);
for(int b=1;b<=a;b++)
{
for(int c=1;c<=b;c++)
printf("%d",c);
printf("\n");
}
}
