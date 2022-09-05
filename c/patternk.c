
#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(j==0||(i==0&&j==3)||(i==1&&j==2)||(i==2&&j==1)||(i==4&&j==1)||(i==5&&j==2)||(i==6&&j==3))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
