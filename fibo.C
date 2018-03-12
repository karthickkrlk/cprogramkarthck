#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,b1=0,b2=1,b3;
clrscr();
printf("\nEnter the term:");
scanf("%d",&n);
printf("Fibonacci series :");
for(i=1;i<=n;++i)

{
printf("%d",b1);
b3=b1+b2;
b1=b2;
b2=b3;
}

getch();
}
