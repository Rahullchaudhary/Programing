#include<stdio.h>
int main()
{
int size;
printf("enter umber:");
scanf("%d",&size);
int a[size];
for(int i=1;i<=size;i++)
{
scanf("%d",&a[i]);
printf("%d\n",a[i]);
}
return 0;
}