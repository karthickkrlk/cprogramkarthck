#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,sum=0,avg;
clrscr();
printf("\nEnter the array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter the number:");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 sum =sum+a[i];
 }
printf("\n Sum is%d",sum);
getch ();
}

