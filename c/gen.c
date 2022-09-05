#include<stdio.h>
#include<string.h>
void main()
{
	char n[10],g[10],m[5];
	puts("Enter your name:");
	fgets(n,10,stdin);
	puts("Enter your gender:");
	fgets(g,10,stdin);
	//strlen(a)=g;
	//printf("%d",g);
	if(g==m)
	printf("Welcome Mr.%s",n);
	else
	printf("Welcome Mrs.%s",n);
}
