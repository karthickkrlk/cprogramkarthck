#include<stdio.h>
#include<conio.h>
void main()
{
	int s,d;
	int x=0;
	printf("enter the number");
	scanf("%d",&s);
	while(s>0)
	{
		d=s%10;
		x=x*10+d;
		d=d/10;
	}
	
	if(x==d)
	printf("%d is a palindrome",d);
	else
	printf("%d is not a palindrome",d);
}
