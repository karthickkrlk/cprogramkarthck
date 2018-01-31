#include<stdio.h>
void main()
{
int num,original num,remainder,result=0;
printf("\n enter a three digit number:");
scanf("%d",&num);
original num=num;
while(original num!=0)
{
remainder=original num%10;
result=remainder *remainder*remainder;
original num/=10;
}
if(result==num)
printf("\n armstrong number");
printf("\n not an armstrong number");
getch();
}
