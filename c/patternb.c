#include<stdio.h>
void main()
{
	int i,j;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
	if(i==0)
	printf("*");
else if(j==0||i==2)
printf("*");
else if(i==4)
printf("*");
else if(j==4)
printf("*");
else
printf(" ");
}
printf("\n");
}
}
