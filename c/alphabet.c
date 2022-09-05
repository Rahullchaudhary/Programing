#include<stdio.h>
void main()
{
  char c='A';
  printf("Alphabet A to Z:\n");
  while(c<='z')
  {
    printf("'%c':%d\n",c,c);
    c++;
  }
}
