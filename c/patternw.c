#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j==0||j==4||(i==4&&j==0)||(i==3&&j==1)||(i==2&&j==2)||(j==3&&i==3)||(i==4&&j==4))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
