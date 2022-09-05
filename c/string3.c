#include<stdio.h>
#include<string.h>
void main()
{
  char a[100];
  int i=0;
  puts("Enter string:");
  gets(a);
  while(a[i]!='\0')
  {
    if(a[i]>='a'&&a[i]<='z')
    a[i]=a[i]-32;
    i++;
  }
  puts(a);
}
