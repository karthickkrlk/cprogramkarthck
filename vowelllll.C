#include <stdio.h>
int main()
{
    char c;
    int islv, isuv;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

    islv = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

 
    isuv = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');


    if (islv || isuv)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
