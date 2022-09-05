#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
(a>b)?printf("a is greater"):printf("b is greater");
(a>b)?((a>c)?printf("a is greater"):printf("c is greater")):((b>c)?printf("b is greater"):printf("c is greater"));
}