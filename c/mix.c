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
	if(i>=j)
printf(" ");
else
printf("R ");
printf("A ");
printf("\n");

}
} 
