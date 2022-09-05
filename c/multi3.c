#include<stdio.h>
void main()
{
int i,n,j,k;
printf("Enter the size:");
scanf("%d",&n);
int a[n][n],b[n][n],c[n][n],g[n][n];
printf("enter the elements of a matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of b matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
}
}
printf("Resultant matrix of a and b::c=\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d  ",c[i][j]);
}
printf("\n");
}


int d[n][n],e[n][n],f[n][n];
printf("enter the elements of d matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&d[i][j]);
}
}
printf("enter the elements of e matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&e[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
f[i][j]=0;
for(k=0;k<n;k++)
{
f[i][j]+=d[i][k]*e[k][j];
}
}
}
printf("Resultant matrix of d and e::f=\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d  ",f[i][j]);
}
printf("\n");
}


for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
g[i][j]=0;
for(k=0;k<n;k++)
{
g[i][j]+=c[i][k]*f[k][j];
}
}
}
printf("Resultant matrix of c and f::g=\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d  ",g[i][j]);
}
printf("\n");
}
}
