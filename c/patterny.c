#include<stdio.h>
void main()
{
    int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if((i==0&&j==0)||(i==1&&j==1)||(i==2&&j==2)||(i==1&&j==3)||(i==0&&j==4)||(i==3&&j==2)||(i==4&&j==2))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
