#include<stdio.h>
#include<string.h>
void main()
{
char n[10],m[10],g[10];
printf("Enter your name:");
fgets(n,10,stdin);
printf("Enter your gender:");
fgets(g,10,stdin);
if("g==m||g==M")
printf("Welcome Mr.%s",n);
else
printf("Welcome Mrs.%s",n);
}
