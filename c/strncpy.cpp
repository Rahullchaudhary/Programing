#include<stdio.h>
#include<string.h>
void main()
{
	char s1[5],s2[5]={"Hello"};
	printf("Enter size of char:");
	fgets(s1,s1+1,stdin);
	strncat(s2,s1 2);
	puts(s2);
}
