#include <stdio.h>
#include <math.h>

int main()
{
    float a=0, b=0, c=0, x1=0, x2=0;

    printf("Podaj a: \n");
    scanf("%f", &a);

    printf("Podaj b: \n");
    scanf("%f", &b);

    printf("Podaj c: \n");
    scanf("%f", &c);

    printf("\n");

    if(((b*b)-(4*(a*c)))<0)
    {
        printf("Nie istnieja rozwiazania w R\n");
    }
    if(((b*b)-(4*(a*c)))>0)
    {
        x1=((-b)-((b*b)-(4*(a*c))))/(2*a);
        x2=((-b)+((b*b)-(4*(a*c))))/(2*a);
        printf("Rozwiazanie pierwsze: %f\n",x1);
        printf("Rozwiazanie drugie: %f\n",x2);
    }  
    if(((b*b)-(4*(a*c)))==0)
    {
        x1=((-b)-((b*b)-(4*(a*c))))/(2*a);
        printf("Jest jedno rozwiazanie: %f\n",x1);
    }
printf("\n");

return 0;

}