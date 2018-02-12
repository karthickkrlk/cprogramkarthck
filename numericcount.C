#include <stdio.h>
int main()
{
    char a[100];
    char * s = a;
    int  digits;
    digits =   0;
    printf("Enter any string : ");
    gets(a);
    while(*s)
    {
     if(*s>='1' && *s<='9')
     digits++;
     s++;
    }
     printf("Digits = %d\n", digits);
    return 0;
}
