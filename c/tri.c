#include<stdio.h>
void main()
{
int i,n,j,k;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=i;j<n;j++)
printf(" ");
for(k=1;k<=i;k++)
{
printf("#");
}
printf("\n");
}
}
/*for(i=1;i<=n;i++)
{
for(j=1;j<=(n-i)*2;j++)
{
printf("%d ",j);
}
printf("\n");
}
}*/
