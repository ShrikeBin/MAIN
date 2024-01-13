#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int grade(char *pattern, char *try) // czy taki try moze być jesli na example odpowiedz była red i white
{
    int output = 0;
    char point[5];
    for (int i = 0; i < 4; i++)
    {
        if (pattern[i] == try[i])
        {
            output += 10;
            point[i] = "r";
        }
    }
        for (int i = 0; i < 4; i++)
    {
        if (point[i] != "r")
        {
            //jak tu te white'y sprawdzać
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