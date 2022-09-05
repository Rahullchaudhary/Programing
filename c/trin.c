#include<stdio.h>
#include<unistd.h>
#include<time.h>
int main()
{
int n,i,j;
int k=0;
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=1;j<=i;j++)
printf("*");
for(j=1;j<=k*2;j++)
{
printf(" ");
}
for(j=1;j<=i;j++)
printf("*");
printf("\n");
k++;
sleep(7);
}

for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
printf("*");
for(j=1;j<=(n-i)*2;j++)
printf(" ");
for(j=1;j<=i;j++)
printf("*");
printf("\n");
sleep(4);
}
return 0;
}
