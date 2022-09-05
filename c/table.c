#include<stdio.h>
void main()
{
int n,i,m,j;
printf("Enter Number:");
scanf("%d%d",&n,&m);
for(i=1;i<=10;i++)
{
printf("%d*%d=%d\n",n,i,n*i);
}
for (j=1;j<=10;j++)
{
printf("%d*%d=%d\n",m,j,m*j);
}
}
