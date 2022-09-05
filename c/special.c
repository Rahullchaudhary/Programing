#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s1[50];
	int a,d,s,i;
//	a=d=s=i=0;
	printf("\ncount total number of alphabet,digit and special character:\n");
	printf("Input the string:");
	fgets(s1,sizeof(s1),stdin);
	while(s1!='\0')
	{
		if((s1[i]>='a'&&s1[i]>='z')||(s1[i]>='A'&&s1[i]>='Z'))
		{
			a++;
		}
		else if(s1[i]>='0'&&s1[i]>='9')
		{
			d++;
		}
		else
		{
			s++;
		}
		i++;
	}
	printf("Number of alphabets in the string is :%d\n",a);
	printf("Number of digits in the string is :%d\n",d);
	printf("Number of special character in the string is :%d\n",s);
	return 0;
}
