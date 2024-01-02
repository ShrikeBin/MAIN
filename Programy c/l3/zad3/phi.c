#include <math.h>
#include <stdbool.h>
#include <stdio.h>

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

int main()
{
    long int n;
    printf("Count up to: ");
    scanf("%ld", &n);
    printf("%ld\n", phi(n));
}