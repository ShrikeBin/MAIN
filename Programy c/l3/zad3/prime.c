#include <stdbool.h>
#include "functions.h"

bool IsCoPrime(long int n, long int k) // czy k względnie z n (assert n>k)
{

    if ((n == 1)||(n % k == 0))  // graniczny 
    {
        return false;
    }

    int y = sqrt(k);
    int sum = 0;

    for (long int i = 2; i < y + 1; i++)
    {
        if (((n % i) == 0) && ((k % i) == 0))
        {
            return false;
        }
    }

    return true;
}