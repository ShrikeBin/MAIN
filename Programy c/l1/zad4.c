#include <stdio.h>

int main()//dziala
{
int n,p,i=0,g=0;
printf("podaj n:\n");
scanf("%d",&n);

p=n;

while(p>0)
{
    i=p;
    g=2*(n-p);
while(i>0)
{
    printf(" ");
    i--;
}
while(g>0)
{
    printf("*");
    g--;
}
printf("*\n");

p--;
}

return 0;
}