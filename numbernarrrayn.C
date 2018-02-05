#include<stdio.h>
void main()
{
    int i,j,a[5],n;
    printf("enter the value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nthe number and index is %d \t %d",a[i],i);
    }
}
getch();
}
