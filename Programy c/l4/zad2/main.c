#include <stdio.h>
#include <math.h>
#include <stdbool.h>



int main()
{
    bool codes[6][6][6][6];
    char guess[5] = "1111";
    char try[5];
    short red = 0;
    short white = 0;

    while (red != 4)
    {
        for (int a; a < 6; a++)
        {
            for (int b; b < 6; b++)
            {
                for (int c; c < 6; c++)
                {
                    for (int d; d < 6; d++)
                    {
                        if (!codes[a][b][c][d])
                        {
                            printf("%d%d%d%d?\n", a, b, c, d); // wypisz kod który może byc
                            break;
                        }
                    }
                }
            }
        }

        printf("Red: ");
        scanf("%d", red);
        printf("White: ");
        scanf("%d", white);

        for (int a; a < 6; a++)
        {
            for (int b; b < 6; b++)
            {
                for (int c; c < 6; c++)
                {
                    for (int d; d < 6; d++)
                    {
                        if (codes[a][b][c][d])
                        {
                            continue;
                        }
                        else
                        {
                            codes[a][b][c][d] = check(guess, red, white, try); // sprawdź które mogą po tamtych guessach
                        }
                    }
                }
            }
        }
    }
    printf("I win!\n");
}