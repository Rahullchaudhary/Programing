
#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(i==0||j==3||(i==6&&j==2)||(i==6&&j==1)||(i==6&&j==0)||(i==5&&j==0)||(j==0&&i==4)||(i==3&&j==0))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
