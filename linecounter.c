#include<stdio.h>
int main()
{
	char a[100];
	int b=0,c=1,i;
           gets (a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]=='.')
		b=++c;
	}
	printf("%d",b);
}
