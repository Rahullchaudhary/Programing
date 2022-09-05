#include<stdio.h>
void main()
{
int n,s;
scanf("%d",&n);
s=n-1;
for(int i=1;i<=n;i++)//1
{
for(int k=1;k<=s;k++)
printf(" ");
for(int j=1;j<=i;j++)
printf("* ");
printf("\n");
s--;
}
int ss=1;
for(int i=n-1;i>=1;i--)//2
{
for(int k=1;k<=ss;k++)
printf(" ");
for(int j=1;j<=i;j++)
printf("* ");
printf("\n");
if(ss<n)
ss++;
}
}
