#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter pattern size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==n-n||j==n-n||i==n-n/2)
			printf("*");
		}
		printf("\n");
	}
}
