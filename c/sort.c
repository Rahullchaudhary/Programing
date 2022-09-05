#include<stdio.h>
void main()
{
  int i,a[],round ,temp;
//  printf("Enter the elements:");
  //scanf("%d",&n);
  //int a[n];
//bubble_sort(a 12);
  for(i=0;i<12;i++)
  {
    printf("%d",a[i]);
  for(round=1;round<11;round++)
  {
    for(i=0;i<11-round;i++)
    {
      if(a[i]>a[i+1])
      {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
      }
    }
  }
}
}
