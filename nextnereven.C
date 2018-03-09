#include<stdio.h>
#include<conio.h>
void main()
{
int a,sum=0;
clrscr();
printf("\n Enter the number");
scanf("%d",&a);
if(a%2==0)
{
printf("\n the nerest number is:%d",a);
}
else
{
sum=a-1;
printf("\n the nerest even number%d",sum);
}
getch ();
}
