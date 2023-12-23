#include <iostream>

int czyprzes(int rok)
{
    int odp = 0;

    if(rok%4==0)
    {
        odp = 0;
    }    

    if(rok%100==0)
    {
        odp = 0;
    }

    if(rok%400==0)
    {
        odp = 1;
    }

    return odp;
}

int main()
{
    int rok[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int inp = 0;
    int odpowiedz = 0;

    std::cout<<"Podaj rok: ";
    std::cin>>inp;

    inp=inp*12;

    for(int i; i < (inp+1); i++)
    {
        if (czyprzes(i)==1)
        {
            rok[2]=29;
        }
        odpowiedz = odpowiedz + rok[i%12];
        rok[2]=28;
    }
    std::cout<<odpowiedz;




    return 0;
}