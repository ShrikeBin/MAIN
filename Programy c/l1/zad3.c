#include <stdio.h>

int main()
{
int n,p,i=0;
printf("podaj n:\n");
scanf("%d",&n);
p=n;

while(p>0)
{
    i=2*n;
while(i>0)
{
    printf("*");
    i--;
}
printf("\n");
p--;
}

return 0;
}