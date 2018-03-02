#include<stdio.h>
#include<string.h>
void main()
{
char str1[50],str2[50];
int a,b;
clrscr();
printf("\nEnter the first string:-");
gets(str1);
printf("\nEnter the second string:-");
gets(str2);
strcat(str1,str2);
printf("\n %s",str1);
getch();
}
