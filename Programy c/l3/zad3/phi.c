#include <math.h>

int phi(long int n)
{
int divn[n];
int divtemp[n]; //dobra kur@ nie mam pomyslu dzisiaaj
int index = 0;

for(int i; i<=(sqrt(n)+1);i++)
{
    if(n%i==0)
    {
        divn[index] = i;
        divn[(index+1)] = n%i;
        index = index + 2;
    }
}

}