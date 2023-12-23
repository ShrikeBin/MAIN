#include <stdio.h>
#include <string.h>
#include "ispalindrome.h"

int main()
{
    int x;

    printf("Lenght of the text: ");
    scanf("%d", &x);

    char y[x];

    printf("Check IsPalindrome: ");
    scanf("%s",&y);

    printf("Anwser is: %d", IsPalindrome(y));
    printf("\n");

return 0;
}