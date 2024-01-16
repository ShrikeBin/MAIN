#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int grade(char *pattern, char *try) // zwraca red/white w formie liczby r*1+w (rw w dziesietnym)
{
    int output = 0;
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
            if (((pattern_alt[i]) == (try_alt[j])) && (pattern_alt[i] != '0') && (try_alt[i] != '0'))
            {
                output += 1;
            }
        }
    }

    return output;
}

int main()
{
    char pattern[5];
    char try[5];
    int output;
    printf("pattern: ");
    scanf("%s", pattern);
    printf("try: ");
    scanf("%s", try);
    output = grade(pattern, try);
    printf("%d\n", grade(pattern, try));
}