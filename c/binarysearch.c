#include<stdio.h>
void main()
{
  int n,num,beg,end,mid;
  printf("Enter total elements:");
  scanf("%d",&n);
  int a[n];
  int t=1;
  while(t)
  {
    printf("Enter elements");
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
      printf("Find number you want to find:");
      scanf("%d",&num);
      beg=0;
      end=n-1;
      while(beg<end)
      {
        mid=(beg+end)/2;
        if(num<a[mid])
        end=mid-1;
        else if(num>a[mid])
        beg=mid+1;
        else if(num==a[mid])
        break;
      }
      if(num==a[mid])
      printf("Found");

      else
      printf("Not found");
      printf("\n");
      t--;
      return 0;
    }
}
