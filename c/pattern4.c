#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(i==0||i==6||j==0||j==6)
			printf("4");
			else if(i==1||i==5||j==1||j==5)
			printf("3");
			else if(i==2||i==4||j==2||j==4)
			printf("2");
			else
			printf("1");
		}
		printf("\n");
	}
}
