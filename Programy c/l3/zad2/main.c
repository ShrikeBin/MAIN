#include "functions.h"
#include <stdio.h>
int main()
{
    double a,b,eps;

    printf("Enter range start: ");
    scanf("%lf", &a);

    printf("Enter range end: ");
    scanf("%lf", &b);

    printf("Enter precision: ");
    scanf("%lf", &eps);

    printf("Result: %lf\n", result(a,b,eps));

}