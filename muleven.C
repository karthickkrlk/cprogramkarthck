#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,mul=0;
clrscr();
printf("\n Enter the number to be multiplied:");
scanf("%d",&a);
printf("\n enter tghe number to be multiplied:");
scanf("%d",&b);
{
mul=a*b;
}
printf("\n product is:%d",mul);
if(mul%2==0)
{
printf("\n the number is even");
}
else
{
printf("\n the number is odd");
}
getch();

}
