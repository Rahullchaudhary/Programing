#include<stdio.h>
void main()
{
int n,i;
printf("Enter Number:");
scanf("%d",&n);
for(i=1;i<=n;i++);
{
if(n%2==0)
printf("\n\nNumber is even\n\n");
else
printf("\n\nNumber is odd\n\n");
}
}