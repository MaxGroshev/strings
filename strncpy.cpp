#include <stdio.h>
void strncpy(char* string_in, char* string, int num);

int main()
{
    char string[1000];     // copy from this array
    char string_in[1000];  // paste into this array
    for(int i = 0; string[i - 1] != '\n'; i++)
    {
        scanf("%c", &string[i]);
    }

    strncpy(string_in, string, 6);

    for(int i = 0; string_in[i] != '\0'; i++)
    {
        printf("%c", string[i]);
    }
    return 0;
}

void strncpy(char* string_in, char* string, int num)
{
    for(int i = 0; i <= num; i++)
    {
        *string_in = *string;
    }
}


