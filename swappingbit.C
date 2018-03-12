#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("\n Enter the number for swapping:");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("\n The swapped number is%d\t%d:",a,b);
getch ();
}
