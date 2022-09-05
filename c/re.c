#include<stdio.h>
int main(void)
{
int readnum,i,numprinted;
int numbers[50];
printf("You may enter upto 50 integers:\n");
printf("How many would you like to enter?");
scanf("%d",&readnum);
if(readnum>50)
readnum=50;
printf("\nEnter your number:\n");
for( i=0;i<readnum;i++)
     scanf("%d",&numbers[i]);
printf("\nYour numbers reversed are:\n");
for( i=readnum-1,numprinted=0;i>=0;i--)
{
printf("%3d",numbers[i]);
if(numprinted<9)
numprinted++;
else
{
//printf("\n");
numprinted=0;
}
}
}
