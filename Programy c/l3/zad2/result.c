#include <math.h>
#include <stdio.h>
#include "functions.h"

double fun(double x)
{
    double y = cos(x/2.0);
    return y;
}

double result(double a, double b, double eps)
{
    //a -  rng low (<0) // b - rng high (>0) // eps - precision // returns range < eps
    
    double rngBEGIN = fmin(a,b);
    double rngEND = fmax(a,b);
    double range = (rngEND - rngBEGIN);
    double point = ((rngEND + rngBEGIN)/2);


    if (fun(rngBEGIN) * fun(rngEND) > 0) 
    {
        printf("Does not equal to 0 in the interval\n");
        return NAN;
    }

    while (range >= eps)
    {

        point = ((rngEND + rngBEGIN)/2);

        if (fun(point) == 0)
        {
            return point;
        }
        else if (fun(point)*fun(rngEND) < 0)
        {
            rngBEGIN = point;
        }
        else if (fun(point)*fun(rngBEGIN) < 0)
        {
            rngEND = point;
        }
        range = fmax(rngEND,rngBEGIN) - fmin(rngEND,rngBEGIN);

    }

return point;
}