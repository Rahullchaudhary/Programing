#include<stdio.h>
void main()
{
int n,c,r;
printf("Enter Number:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=1;c<=n;c++)
{
printf("%d",c);
}
printf("\n");
}
}
