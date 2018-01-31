#include<stdio.h>
int main()
{
 int s,b,i;
 
   printf("enter the numbers ");
   scanf("%d%d",&s,&b);
      printf("even number between %d%d :",s,b);
   for(i=s;i<b;i++)
{
    if(i%2==0)
    {
     printf("\n %d",i);   
    }
}
return 0;
}
