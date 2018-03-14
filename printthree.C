
#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
char b[20];
clrscr();
printf("\n Enter the element to be printed:");
scanf("%d",&a);
printf("\n Enter the character to be printed:");
scanf("%s",b);
for(i=0;i<a;i++)
{
 printf("\t %c",b[i]);
}
getch ();
}
