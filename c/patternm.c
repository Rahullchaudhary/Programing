
#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(j==0||j==6||(i==1&&j==1)||(i==2&&j==2)||(i==3&&j==3)||(i==2&&j==4)||(i==1&&j==5))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
