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
            if (((pattern_alt[i]) == (try_alt[j])) && (pattern_alt[i] != '0') && (try_alt[j] != '0')) // zobacz czy sie nie wywala na tych 1000+ dla 11
            {
                output += 1;
                pattern_alt[i] = '0';
                try_alt[j] = '0';
            }
        }
    }

    return output;
}

int main()
{
    char codes[1296][5];
    char digits[6] = "123456";
    int fill = 0;

    for (int a1 = 0; a1 < 6; a1++) // wypelnij tabilce kodami
    {
        for (int a2 = 0; a2 < 6; a2++)
        {
            for (int a3 = 0; a3 < 6; a3++)
            {
                for (int a4 = 0; a4 < 6; a4++)
                {
                    codes[fill][0] = digits[a1];
                    codes[fill][1] = digits[a2];
                    codes[fill][2] = digits[a3];
                    codes[fill][3] = digits[a4];
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
    int poss = 1296;

    while (!exit)
    {
        for (int i = 0; i < 1296; i++)
        {
            if (codes_check[i])
            {
                while (true)
                {
                    printf("-(There's %d possible codes left)-\n", poss);
                    printf(">> Try: %s\n>> red/white ", codes[i]);
                    scanf("\n%d", &player);
                    if ((((player / 10) + (player % 10)) <= 4)&&(player<=40))
                    {
                        poss = 0;
                        for (int j = 0; j < 1296; j++)
                        {
                            if ((codes_check[j]) && (grade(codes[i], codes[j]) != player))
                            {
                                codes_check[j] = false;
                            }

                            if (codes_check[j])
                            {
                                poss++;
                                //printf("%d %s,", codes_check[j], codes[j]);
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
            else if (poss <1)
            {
                printf("You are cheating, there's no code that would fit these requierments. \n");
                exit = true;
                break;
            }
        }
    }
    printf("I won!\n");
}
