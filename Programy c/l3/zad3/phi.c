#include <math.h>
#include "functions.h"

long int phi(long int n)
{
    long int count = 1; // bo 1 wzglednie z kazda?

    for (long int i = 1; i <= n; i++)
    {
        if (IsCoPrime(n, i))
        {
            count++;
        }
    }
    return count;
}