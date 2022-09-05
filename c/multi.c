#include<stdio.h>
void main()
{
	int i,j,k;
	int a[2][2],b[2][2],c[2][2]=0;
/*	printf("Enter the size of r and c of 1 matrix:");
	scanf("%d%d%",&r1,&c1);
	printf("Enter the size of r and c of 2 matrix:");
	scanf("%d%d%",&r2,&c2);
		int a[r1][c1],b[r2][c2],c[c1][r2];*/
		//if(c1==r2)
		//{
			printf("Enter the elements of 1 matrix:");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the elements of 2 matrix:");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
			scanf("%d",&b[i][j]);
			}
		}
		printf("Multiplication of 2 matrix:\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				c[i][j]=0;
				for(k=0;k<2;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%d",c[i][j]);
			}
		}
	//}
	//else
	//printf("Multiplication is not found try again:");
}
