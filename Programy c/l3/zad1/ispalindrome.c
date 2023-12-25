#include <string.h>

#include "ispalindrome.h"

int IsPalindrome(char x[])
{
    int l = 0;
    int r = strlen(x)-1; 

    while (l<r)
    {
        if (x[l] != x[r])
        {
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}