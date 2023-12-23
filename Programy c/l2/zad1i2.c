#include <stdio.h>
#include <math.h>

int main()
{
    int rok;
    printf("Podaj rok: \n");
    scanf("%d",&rok);

    if(((rok%4==0) && !(rok%100==0)) || (rok%400==0))
    {
        printf("To rok przestepny\n");
    
    }
    else
    printf("To nie rok przestepny\n");

    return 0;
}
