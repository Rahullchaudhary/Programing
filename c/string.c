#include<stdio.h>
#include<string.h>
void main()
{
	char s[5];
	printf("enter the char:");
	fgets(s,sizeof(s),stdin);
	puts(s);
}
