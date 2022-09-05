#include<stdio.h>
#include<string.h>
void main()
{
int a=100,b;
int *ptr;
ptr=&a;
//b=strlen(a);
///puts(b);
printf("value of a: %d\n",a);
printf("address of a: %d\n",&a);
printf("value of a: %d\n",*ptr);
printf("address of a: %d\n",ptr);
printf("address of ptr: %d\n",&ptr);
}
