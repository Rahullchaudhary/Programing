#include<stdio.h>
#include<string.h>
void main()
{
	char s[5];
	printf("enter number:");
	fgets(s,5+1,stdin);
	strrev(s);
	puts(s);
}
