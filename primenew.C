#include<stdio.h>
int main()
{
	int r,i,count=0;
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		if(r%i==0)
		count++;
	}
	if(count==2)
	printf("prime");
	else
	printf("not a prime");
}
