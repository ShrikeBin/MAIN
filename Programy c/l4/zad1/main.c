#include <stdio.h>
#include <stdbool.h> //'?' - dowolny znak 1
#include <string.h>  //'*' - ciąg znaków

bool match(char *pattern, char *chain) // *b*a || babababababababababab
{
    if (pattern[0] == '\0' && chain[0] == '\0')
    {
        return true;
    }
    else if ((pattern[0] != chain[0]) && (pattern[0] != '?') && (pattern[0] != '*'))
    {
        return false;
    }
    else if ((pattern[0] == '?') || (pattern[0] == chain[0]))
    {
        return match(pattern + 1, chain + 1);
    }
    else if (pattern[0] == '*')
    {
        while((pattern[1])!=(chain[0]))
        {
            if (pattern[1] = '\0')
            {
                return true;
            }
            pattern++;
            chain++;
        }
        return match(pattern + 1, chain + 1);
    }
}

int main()
{
    char pattern[51];
    char chain[51];
    printf("Provide the pattern (max 50 char.): ");
    scanf("%s", pattern);
    printf("Provide the chain (max 50 char.): ");
    scanf("%s", chain);

    if (match(pattern, chain))
    {
        printf("There's a match!\n");
    }
    else
    {
        printf("There's no match\n");
    }
}