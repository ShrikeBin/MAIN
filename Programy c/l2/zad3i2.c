#include <stdio.h>
#include <math.h>

int main()//kompiluj z -lm
{

double srt=0.001; 
double result=1;

for(int i=1; i<1001; i++)
{
    result = result*pow(i,srt);
}

printf("approx: %lf\n\n",result);

return 0;
}