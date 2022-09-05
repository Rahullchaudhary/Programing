#include<stdio.h>
void main()
{
int i,j,n,s;
printf("Enter number:");
scanf("%d",&n);
s=n;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
printf(" ");
for(int k=n;k>=1;k--)
printf(" R  ");
//printf(" A  ");
printf("\n");
}
//s++;
}
//int m=1;
//for(int i=n-1;i>=1;i++)
//{
//for(int j=1;j<=m;j--)
//printf(" ");
//for(int k=1;k<=i;k++)
//printf("R ");
//printf("A");
//printf("\n");
//if(m<n)
//m++;
//}
//}
