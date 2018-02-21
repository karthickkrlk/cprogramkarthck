#include <stdio.h>

int main()
{
	int a,b,c;
	a=b=c=0;
	printf("\nBefor swapping:");
	scanf("%d%d",&a,&b);
         a=a^b;
         b=a^b;
         a=a^b;
	printf("\n After swapping:\t%d\t%d",a,b);
	return 0;
}
