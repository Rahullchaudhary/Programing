
#include<stdio.h>
int add(void);
void main()
{
  int s;
  s=add();
  printf("\t\t%d\n",s);
  printf("\t\tThanks:");
}
 int add()
{
  int a,b,c;
  printf("Enter numbers:");
  scanf("%d%d",&a,&b);
  c=a+b;
  return(c);
}
