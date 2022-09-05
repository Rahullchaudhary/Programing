#include<stdio.h>
void main()
{
int c1[10],c2[10],i,s1,s2;
s1=s2=0;
printf("voting begins:");
for(i=1;i<=10;i++)
{
printf("class %d votes for c1 c2:",i);
scanf("%d%d",&c1[i],&c2[i]);
s1+=c1[i];
s2+=c2[i];
}
for(i=1;i<=10;i++)
{
if(c1[i]>c2[i])
{
printf("\n c1 is winner !!!,class%d,vote%d",i,c1[i]);
}
else if(c1[i]==c2[i])
{
printf("\n tie both winner !!!,class%d,vote c1:%d,c2:%d",i,c1[i],c2[i]);
}
else
{
printf("\n c2 is winner !!!,class%d,vote%d",i,c2[i]);
}
}
if(s1>s2)
printf("\n Over all Winner is c1,total votes%d",s1);
else
printf("\n Over all Winner is c2,total votes%d",s2);
}
