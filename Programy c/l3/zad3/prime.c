#include <stdbool.h>
#include "functions.h"

bool IsPrime(long int n)
{
    if (n == 1)
    {
        return false;
    }

    int y = sqrt(n);
    int sum = 0;

    for (long int i = 2; i < y + 1; i++)
    {
        if ((n % i) == 0)
        {
            sum = sum + i + (n / i);
        }
    }

    if (sum != 0)
    {
        return false;
    }
    else
        return true;
}