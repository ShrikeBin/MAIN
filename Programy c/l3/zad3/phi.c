#include <math.h>
#include "functions.h"

long int phi(long int n)
{
    long int count = 0;

    for (long int i = 1; i <= n; i++)
    {
        if (IsPrime(i))
        {
            count++;
        }
    }
    return count;
}