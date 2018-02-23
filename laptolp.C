#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[1000];
int i,a;
printf("\n Enter the string:");
gets(str);
printf("\n Enter the range:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
printf(" %s\n\t",str);
}
getch();
}
