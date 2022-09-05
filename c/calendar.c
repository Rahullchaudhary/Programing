#include<stdio.h>
int main()
{
int i,n=1,j,c,d=1;
printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
printf("=================================\n");
//printf("Enter number:");
for(i=1;i<=n;i++)
{
printf(" ");
for(j=1;j<=n;j++)
{
if(d<=6){
	
printf("3%d",d);
printf("  ");

d++;}
}
printf("\n");
}

printf("=================================\n");
return 0;
}

