#include <stdio.h>
void strcpy(char* string_copy, char* string);

int main()
{
    char string[1000];
    char string_copy[1000];
    for(int i = 0; string[i - 1] != '\n'; i++)
    {
        scanf("%c", &string[i]);
    }

    strcpy(string_copy, string);
    for(int i = 0; string_copy[i] != '\0'; i++)
    {
        printf("%c", string[i]);
    }
}


void strcpy(char* string_copy, char* string)
{
    while(*string_copy++  = *string++)
    ;
}
