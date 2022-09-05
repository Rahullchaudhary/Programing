#include<stdio.h>
void main()
{
int n,i,c=0;
printf("Enter Number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
c+=1;
}
if(c==2)
printf("Number is prime\n\n");
else
printf("\n\nNumber is not prime\n\n");
}
