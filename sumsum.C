#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,sum=0;
clrscr();
printf("\n Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter the number to be added:");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("\n the sum of the number%d",sum);

getch ();
}
