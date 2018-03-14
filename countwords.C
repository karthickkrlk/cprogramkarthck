#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
 char a[20];
 int m,b=0,i;
 clrscr();
 printf("\n Enter the word to be counted:");
 gets(a);
 m=strlen(a);
 for(i=0;i<m;i++)
{
 if(a[i]==' ')
 {
 b++;
 }
 }
 printf("\n number is:%d",b+1);


getch();
 }
