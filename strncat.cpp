#include <stdio.h>
char* strncat(char* string, char* add, int num);

int main()
{
    char string[100] = "Hello World.";
    char add[] = "Oh, Dear";
    strncat(string, add, 5);
    printf("%s", string);
    return 0;
}

char* strncat(char* string, char* add, int num)
{
    for(int i = 0; *string != '\0'; i++)
    {
        string++;
    }

    int j = 0;
    for(j = 0; j <= num ; j++)
    {
       *(string + j) = *(add + j);
    }
    *(string + j + 1) = '\0';
    return string;
}
