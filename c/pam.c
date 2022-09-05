
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==n-n||j==n-1||(i==4&&j==4))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
