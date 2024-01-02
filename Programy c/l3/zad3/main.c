#include <stdio.h>
#include "functions.h"

int main()
{
    long int n;
    printf("Count up to: ");
    scanf("%ld", &n);
    printf("%ld\n", phi(n));
}