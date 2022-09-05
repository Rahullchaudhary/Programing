#include<stdio.h>
int main()
{
int n;
printf("\n enter array size:");
scanf("%d",&n);
int a[n],temp,min;
printf("\n Enter array elements:");
for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(int i=0;i<n-1;i++)
  {
    min=i;
    for(int j=1+i;j<n;j++)
    if(a[j]<a[min])
    min=j;
    if(a[i]>a[min])
    {
      temp=a[i];
      a[i]=a[min];
      a[min]=temp;
    }
  }
  printf("\nSorted array:\n");
  for(int i=0;i<n;i++)
  printf("%d\t",a[i]);
  /*int s,beg,mid,end;
  beg=0;
  end=n-1;
  printf("\n Enter elements to serach:");
  scanf("%d",&s);
  while(beg<=mid)
  {
    mid=(beg+end)/2;
    if(s<a[mid])
    end=mid+1;
    else if(s>a[mid])
    beg=mid-1;
    else if(s==a[mid])
    break;
  }
  if(s==a[mid])
  printf("Found at position %d",mid+1);
  else
  printf("Not found");
  return 0;*/
}
