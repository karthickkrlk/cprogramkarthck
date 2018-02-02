#include<stdio.h>
void main()
{
int min,hr,total_hr;
clrscr;
print("\nEnter the min:");
scanf("%d",&min);
total_hr=(min/12)%min;
printf("\n total time in hr:",total_hr);
getch();
}
