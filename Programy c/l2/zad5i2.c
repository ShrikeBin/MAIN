#include <stdio.h>
#include <math.h>

int divisionsum(int x)
{
    int y = sqrt(x); 
    int sum = 0;
    for(int i=1; i<y+1; i++)
    {
        if((x%i)==0)
        {
            sum = sum + i + (x/i);
        }
    }
    return sum-x; // sum to suma wszystkich dzielnikow liczby np dla 6 to 1,2,3,6 
}

int main()
{
    int lim=0;
    printf("Check up to: ");
    scanf("%d", &lim);
    printf("Ideal: \n");
    
    for(int i=1; i<lim+1; i++)
    {
        if((divisionsum(i)==i)&&!(i==1))//bo 1 nie jest idealna
        {
            printf("%d",i);
            printf("\n");
        }
    }
    
    printf("Amicable pairs: \n");
    
    for(int i=1; i<lim+1; i++)
    {
        if((divisionsum(divisionsum(i))==i)&&!(divisionsum(i)==i))//to && zeby nie wypluwalo liczb idealnych ze soba np 6 i 6
        {
            printf("%d",i);
            printf(" %d", divisionsum(i));
            printf("\n");
        }
    }

    return 0;
}
