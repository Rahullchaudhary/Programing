#include<stdio.h>
void main()
{
int readnum;
int a[50];
printf("you may enter up to 50:\n");
scanf("%d",&readnum);
if (readnum>50)
readnum=50;
printf("\nEnter your number:\n");
for(int i=0;i<readnum;i++)
scanf("%d",&a[i]);
printf("\n your num reversed are:\n");
for(int i=readnum-1,numprinted=0;i>=0;i--)
{
printf("%d\t",a[i]);
if(numprinted<9)
numprinted++;
else
{
numprinted=0;
}
}
}
