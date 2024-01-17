#include <stdio.h>
#include <stdbool.h>

short grade(char pattern[], char try[]) // zwraca red/white w formie liczby r*1+w (rw w dziesietnym)
{
    short output = 0;
    char pattern_alt[5];
    char try_alt[5];

    for (int i = 0; i < 4; i++)
    {
        pattern_alt[i] = pattern[i];
        try_alt[i] = try[i];
    }

    for (int i = 0; i < 4; i++)
    {
        if (pattern[i] == try[i])
        {
            output += 10;
            pattern_alt[i] = '0';
            try_alt[i] = '0';
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (((pattern_alt[i]) == (try_alt[j])) && (pattern_alt[i] != '0') && (try_alt[i] != '0'))// zobacz czy sie nie wywala na tych 1000+ dla 11
            {
                output += 1;
            }
        }
    }

    return output;
}

int main()
{
    char codes[1296][5];
    char digits[6][1] = {'1', '2', '3', '4', '5', '6'};
    int fill = 0;

    for (int a1 = 0; a1 < 6; a1++) // wypelnij tabilce kodami
    {
        for (int a2 = 0; a2 < 6; a2++)
        {
            for (int a3 = 0; a3 < 6; a3++)
            {
                for (int a4 = 0; a4 < 6; a4++)
                {
                    codes[fill][0] = digits[a1][0];
                    codes[fill][1] = digits[a2][0];
                    codes[fill][2] = digits[a3][0];
                    codes[fill][3] = digits[a4][0];
                    codes[fill][4] = '\0';
                    fill++;
                }
            }
        }
    }

    int player;
    bool codes_check[1296] = {};
    for (int i = 0; i < 1296; i++)
    {
        codes_check[i] = true;
    }
    bool exit = false;

    while (!exit)
    {
        for (int i = 0; i < 1296; i++)
        {
            if (codes_check[i])
            {
                while (true)
                {
                    printf("Try: %s red/white ", codes[i]);
                    scanf("\n%d", &player);
                    if (((player / 10) + (player % 10)) <= 4)
                    {
                        for (int j = 0; j < 1296; j++)
                        {
                            if (grade(codes[i], codes[j]) != player) // czemu nie wychodzi z for'a xd dla j>=1095 nie działa jakoś xddxdd wtf;
                            {
                                printf("%d %d,", codes_check[j], j);
                                codes_check[j] = false;
                            }
                        }
                        break;
                    }
                    else
                    {
                        printf("Incorrect red/white \n");
                        continue;
                    }
                }
                if (player == 40)
                {
                    exit = true;
                    break;
                }
            }
        }
    }
    printf("I won!\n");
}
