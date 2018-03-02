#include<stdio.h>
#include<conio.h>
void main()
{
char str1[50],str2[50];
int a,b;
printf("\nEnter the first string:");
scanf("%s",&str1);
printf("\nEnter the second string:");
scanf("%s",&str2);
a=strlen(str1);
b=strlen(str2);
if(a>b)
{
printf("\n greatest string :%s",str1);
}
else if(a<b)
{
printf("\n greatest string :%s",str2);
}
else
{
printf("\n greatest string is:%s",str2);
}
getch();
}
