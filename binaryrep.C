#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20];
int i,flag=0,m;
clrscr();
printf("\n Enter the element to check:");
gets(a);
m=strlen(a);
for(i=0;i<m;i++)
{
if((a[i]=='1')||(a[i]=='0'))
{
flag=1;
}
else
{
flag=0;
}
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
 }
 getch();
 }
