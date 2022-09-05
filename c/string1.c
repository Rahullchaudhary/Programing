#include<string.h>
#include<stdio.h>
void main()
{
	char s[5];
	printf("enter num:");
    fgets(s,sizeof(s)+1,stdin);
//	scanf("%s",&s);
    strrev(s);
	puts(s);
	//printf("%s",s);
}
