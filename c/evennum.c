#include<stdio.h>
void main()
{
int n,i,m,j;
printf("Enter size:");
scanf("%d",&n);
for(i=0;i<=n;i++);
{
  for(j=0;j<=i;j++)
  {
printf("Enter the number:");
scanf("%d",&m);
if(m%2==0)
printf("Even number:\n\n");
else
printf("Odd number:\n\n");
}
printf("\n");
}
}
