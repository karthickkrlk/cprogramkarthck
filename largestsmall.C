#include<stdio.h>
#include<conio.h>
int main()
{
int a[50],n,i,large,small;
clrscr();
printf("\n how many elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter the array:");
scanf("%d",&a[i]);
 }
large=small=a[0];

for(i=1;i<n;i++)
{
if(a[i]>large)
{
large=a[i];
}
if(a[i]<small)
{
small=a[i];
}
}

printf("\n the largest number is :%d",large);
printf("\n the smallest number is:%d",small);
return 0;
 }
