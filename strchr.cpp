#include <stdio.h>
char* strchr(char* string_copy, char c);

int main()
{
    char string[1000];
    for(int i = 0; string[i - 1] != '\n'; i++)
    {
        scanf("%c", &string[i]);
    }
    char* pointer = strchr(string, 'u');
    printf("%c", *pointer);

}

char* strchr(char* string, char c)
{
    for(int i = 0; *string != '\0'; i++)
    {
        if(c == *string)
        {
            char* coincedence = string;
            return coincedence;
        }
        *string++;
    }

    return NULL;
}
