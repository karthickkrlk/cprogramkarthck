#include<stdio.h>
int main()
{
int b,e;
long long result=1;
printf("\n enter the base number:");
scanf("%d",&e);
printf("\n enter the base number:");
scanf("%d",&b);
while(e!=0)
{
result*=b;
--e;
}
printf("\n answer =%lld",result);
return 0;
}
