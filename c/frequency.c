#include<stdio.h>
#include<string.h>
void main()
{
	int c[256]={0},i=0;
    char s[100];
    puts("Enter String: ");
    gets(s);
    while(s[i]!='\0')
    c[(int)s[i]]++,i++;
    int j;
    for(j=0;j<256;j++)
    if(c[j]>0)
    printf(" '%c' : %d\n",j,c[j]);

}
