#include<stdio.h>
void main()
{
int i,n,item,pos;
printf("enter size");
scanf("%d",&n);
int a[n];
printf("enter element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter value to insert");
scanf("%d",&item);
printf("enter position");
scanf("%s",&pos);
for(i=n-1;i>=pos-1;i--)
{
a[i+1]=a[i];
}
a[i+1]=item;
 n++;
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
