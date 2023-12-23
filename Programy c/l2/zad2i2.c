#include <stdio.h>
#include <math.h>

int main()
{

float v=1,s;
int n = 1;

while(v<=10)
{
    n++;
    s=(1.0/n);
    v=v+s;
}
printf("%d\n",n);

return 0;
}