
#include<stdio.h>
void main()
{
  int x,y;
  void add(int,int);
  printf("Enter the numbers:");
  scanf("%d%d",&x,&y);
  add(x,y);
  printf("Thanks:");
}
 void add(int a, int b)
{
  int c;
  c=a+b;
  printf("Sum of a and b:%d\n",c);
}
