#include "functions.h"

double min(double x, double y)
{
    if(x > y)
    {
        return y;
    }
    else
    {
        return x;
    
    }
}

double max(double x, double y)
{
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    
    }
}