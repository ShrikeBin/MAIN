#include "functions.h"

int main()
{
    
    double a,b,eps;
    printf("Enter range start: ");
    scanf("%f", &a);
    printf("Enter range end: ");
    scanf("%f", &b);
    printf("Enter precision: ");
    scanf("%f", &eps);
    printf("\nResult: ", result(a,b,eps));

}