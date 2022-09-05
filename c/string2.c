#include<stdio.h>
#include<string.h>
void main()
{
  char s[100];
  int i,j,lenght;
  printf("Enter number:");
  gets(s);
  lenght=strlen(s);
  for(i=0;i<lenght;i++)
  {
    for(j=0;j<=i;j++)
    {
      printf("%c",s[j]);
    }
    printf("\n");
  }
}
