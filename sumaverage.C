#include<stdio.h>
#include<conio.h>
int main()
{
int a[50],i,n,sum=0,
int avg;
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
 avg=sum/n;
 }
printf("\n Sum is%d",sum);
printf("\n average is%d",avg);
return 0;
}

