
#include<stdio.h>
int add(int,int);
void main()
{
  int s,x,y;
  printf("Enter the numbers:");
  scanf("%d%d",&x,&y);
  s=add(x,y);
    printf("\t\t%d\n",s);
  printf("\t\tThanks:");
}
 int add(int x,int y)
{
  int c;
      c=x+y;
  return(c);
}
