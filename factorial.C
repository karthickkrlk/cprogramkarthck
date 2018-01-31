#include<stdio.h>
void main()
{
	int a,i,c=1;
	printf("enter a number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		c=c*i;
	}
	printf("%d",c);
}
