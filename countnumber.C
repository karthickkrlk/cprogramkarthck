#include<stdio.h>
#include<conio.h>
void main()
{
long int a,b=0;
clrscr();
printf("\n Enter the number to be count:");
scanf("%ld",&a);
while(a>0)
{
a=a/10;
b=b+1;
}
printf("\n Number of the integers are:%ld",b);
getch ();
}
