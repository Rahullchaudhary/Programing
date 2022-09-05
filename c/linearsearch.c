#include<stdio.h>
void main()
{
  int a[5],i,item,c=0;
  printf("Enter the elements:");
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nEnter the value you want to search:");
  scanf("%d",&item);
  for(i=0;i<5;i++)
  {
    if(item==a[i])
    {
      c=1;
      printf("\nIndex value of %d=%d",item ,i);
      printf("\nPosition of %d=%d",item,i+1);
      break;
    }
  }
  if(c==0)
  printf("\n%d is not found try again",item);
}
