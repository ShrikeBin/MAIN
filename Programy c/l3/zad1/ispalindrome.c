#include <string.h>
#include <stdbool.h>

#include "ispalindrome.h"

bool IsPalindrome(char x[])
{
    int l = 0;
    int r = strlen(x)-1; 

    while (l<r)
    {
        if (x[l] != x[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}