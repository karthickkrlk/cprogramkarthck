#include<stdio.h>
#include<conio.h>
void main()
{
int a[8]={1,6,3,9,7,4,2,8};
int i,c;
for(i=0;i<8;i++)
{
if(a[i]>a[i+1])
{
c=a[i];
a[i]=a[i+1];
a[i+1]=c;
 }}
printf("\n%dgreater number is",a[7]);
getch ();
}
