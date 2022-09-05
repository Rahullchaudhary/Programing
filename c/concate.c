#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,l,m,l1;
	char s1[100],s2[100];
	memset(s1,0,sizeof(s1));
	memset(s2,0,sizeof(s2));
	printf("\nEnter 1 string:");
	fgets(s1,sizeof(s1),stdin);
	printf("\nEnter 2 string:");
	fgets(s2,sizeof(s2),stdin);
	l=strlen(s1);
	m=strlen(s2);
	for(i=0;i<l-1;i++)
	for(j=0;j<m-1;j++)
	{
		s1[i]=s2[j];
	}
	puts("After concate:");
	puts(s1);
}
