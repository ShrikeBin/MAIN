#include <math.h>
#include "functions.h"

double result(double a, double b, double eps)
{
    //a -  rng low (<0) // b - rng high (>0) // eps - precision // returns range < eps
    double rnga = min(a,b);
    double rngb = max(a,b);
    double range = (b-a);
    double point;

    while (range >= eps)
    {
        point = fun((rngb - rnga)/2);
        if (point = 0)
        {
            return point;
        }
        else if (point < 0)
        {
            rngb = point;
        }
        else if (point > 0)
        {
            rnga = point;
        }
        range = max(rngb,rnga) - min(rngb,rnga);
    }

return rnga,rngb;
}