#include<stdio.h>
#include<unistd.h>
#include<time.h>
void main()
{
	int i,j;
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(i==0||j==0||(i==6&&j==1)||(i==6&&j==2)||(i==5&&j==2)||(i==4&&j==2)||(i==4&&j==3)||(i==4&&j==4)||(i==4&&j==5)||(i==4&&j==6)||(i==5&&j==6)||(i==6&&j==6))
			printf("*");
			else
			printf(" ");
	}
	printf("\n");
	sleep(5);
}
}
