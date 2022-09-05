#include<stdio.h>
void main()
{
int B;
char A;
scanf("%d",&A);
B=A;
(B>=65&&B<=90)?printf("it is upper case"):(B>=66&&B<=122)?printf("it is lower case"):printf("invalid character");
}