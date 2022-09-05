#include<stdio.h>
void main()
{
char a[4][4];
int i,j;
printf("Enter The Elements:");
for(i=0;i<4;i++)
{
scanf("%c%c%c%c",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
}
for(j=0;j<4;j++)
scanf("%c%c%c%c",&a[j][0],&a[j][1],&a[j][2],&a[j][3]);
}
printf("%d%d%d%d",a[i][0][j][0]);
#include<stdio.h>
void main()
{
char a[4][4];
int i,j;
printf("Enter The Elements:");
for(i=0;i<4;i++)
{
scanf("%c%c%c%c",&a[i][0]][j][0]],&a[i][j],&a[i][j],&a[i][j]);
for(j=0;j<4;j++)
printf("%c%c%c%c",a[i][j],a[i][j],a[i][j],a[i][j]);
}
printf("\n");
}
}
