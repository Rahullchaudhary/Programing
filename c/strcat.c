#include<stdio.h>
#include<string.h>
void main()
{
	char s1[5],s2[5]={"Hello"};
	printf("Enter the string:");
	fgets(s1,s1+1,stdin);
	strcat(s2,s1);
	puts(s2);
}
