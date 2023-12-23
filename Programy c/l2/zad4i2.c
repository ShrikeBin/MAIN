#include <stdio.h>

int czy(int rok)
{
    int odp = 0;

    if(((rok%4==0) && !(rok%100==0)) || (rok%400==0))
    {
        odp = 1;
    }    

    return odp;
}

int days(day,month,year)
{

    int yrs[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int sum = 0;

    for(int i=0; i<year; i++)//roku teraz nie liczymy
    {
        if (czy(year)==1)
        {
            yrs[1]=29;
        }
        else
        {
            yrs[1]=28;
        }

        for(int j=0; j<12; j++)
        {
            sum = sum + yrs[j];
        }
    }

    for(int k=0; k<(month-1); k++)// -1 bo tablica zaczyna sie od 0 (jak mam luty czyli 1 w tab to nie liczy dni lutego)
    {
        sum = sum + yrs[k];
    }

    sum = sum + day - 1;// -1 bo dzien dzisiejszy jeszcze nie minal


return sum;
}



int main()
{
    int day,year,month = 0;
    int now,then;

    printf("Day now: ");
    scanf("%d", &day);
    printf("Month now: ");
    scanf("%d", &month);
    printf("Year now: ");
    scanf("%d", &year);
    printf("\n");

    now = days(day,month,year);

    printf("Day birth: ");
    scanf("%d", &day);
    printf("Month birth: ");
    scanf("%d", &month);
    printf("Year birth: ");
    scanf("%d", &year);
    printf("\n");

    then = days(day,month,year);

    now = now - then;

    printf("Days since birth: %d\n",now);
    int secs = now*24*60*60;
    printf("Approx. seconds since birth: %d\n",secs);
return 0;
}