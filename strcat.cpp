#include <stdio.h>
char* strcat(char* string_copy, char c);

int main()
{
    char string[] = "Hello World";
    strcat(string, '!');
    printf("%s", string);

}

char* strcat(char* string, char c)
{
    for(int i = 0; *string != '\0'; i++)
    {
        string++;
    }

    *string = c;
    *(string + 1) = '\0';
    return string;

}
