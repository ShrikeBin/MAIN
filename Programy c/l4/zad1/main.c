#include <stdio.h>
#include <stdbool.h>
#include <string.h> 

bool match(char *pattern, char *chain)
{
    if (pattern[0] == '\0' && chain[0] == '\0')
    {
        return true;
    }
    else if (((pattern[0] != chain[0]) && (pattern[0] != '?') && (pattern[0] != '*')) || ((pattern[0] == '?') && (chain[0] == '\0')))
    {
        return false;
    }
    else if ((pattern[0] == '?') || (pattern[0] == chain[0]))
    {
        return match(pattern + 1, chain + 1);
    }
    else if (pattern[0] == '*')
    {
        if (pattern[1] == '\0')
        {
            return true;
        }
        else if (chain[0] != '\0')
            return (match(pattern + 1, chain) || match(pattern, chain + 1));  //nie pamiętam czemu to działało xd
        else
            return match(pattern + 1, chain);
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