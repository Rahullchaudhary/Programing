#include<stdio.h>
#include<string.h>
void main()
{
	char s[5];
	printf("enter number:");
	fgets(s,sizeof(s)+1,stdin);
	strupr(s);
	puts(s);
}
