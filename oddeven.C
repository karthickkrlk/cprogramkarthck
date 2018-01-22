#include <stdio.h>
int main()
{
    int r;

    printf("Enter a number");
    scanf("%d", &r);
    if(number % 2 == 0)
        printf("%d is even.", r);
    else
        printf("%d is odd.", r);

    return 0;
}
