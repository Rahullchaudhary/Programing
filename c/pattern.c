
#include<stdio.h>
 int main()
 {
 int n,s; 
// int z;
printf("Enter pattern size: ");
 scanf("%d",&n);
 s=n;
 

  
for(int i=1;i<=n;i++)
  
{



 for(int k=1;k<=s;k++) 
{
 printf(" "); 
} 


for(int j=1;j<=i;j++) 

{
 printf("%d ",j); 
 //printf("*");
}


 printf("\n"); 
s--; 

}
//scanf("%d",&z);
 
return 0; 
}  
