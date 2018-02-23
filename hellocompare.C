#include<stdio.h>
int main()
{
	char str1[20],str2[20];
	int a,b;
	printf("\nEnter the string 1");
	scanf("%d",str1);
	printf("\nEnter the string 2");
	scanf("%d",str2);
	a=strlen(str1);
	b=strlen(str2);
	if(a>b)
	{
		printf("\n %s",str1);
	}
		else if(a<b)
	{
		printf("\n %s",str1);
	}
	return 0;
}
