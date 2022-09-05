#include<stdio.h>
#include<unistd.h>
void main()
{
	int i,j;
	system("color 1f");
	//system("color A");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==0||j==0||i==2||(i==3&&j==2)||(i==4&&j==4)||(i==1&&j==4))
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
	sleep(1);
		
	}
	printf("\n");
	//printf("\n");
   system("color F2");
   sleep(4);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==0||j==0||i==2||j==4)
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
	
		sleep(1);
	}
	sleep(1);
	printf("\n");
	 system("color 5D");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j==0||i==2||j==4)
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
		 
		 sleep(1);
	}
	printf("\n");
	sleep(1);
	system("color 1B");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==4||j==0||j==4)
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
		sleep(1);
		
	}
	sleep(1);
	printf("\n");
	 system("color A7");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==4||j==0)
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
		sleep(1);
		 
	}
	system("color 4B");
}
