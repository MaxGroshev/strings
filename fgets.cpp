#include <stdio.h>

char* fgets(char* my_string, int max_lenght, FILE* string);
int main()
{
    FILE* string = fopen("fgets_dem.txt", "r");
    char my_string[20];
    fgets(my_string, 20, string);
    printf("%s", my_string);
    fclose(string);

    return 0;
}

char* fgets(char* my_string, int max_lenght, FILE* string)
{
    char c = '0';
    for (int i = 0; (c = getc(string)) != EOF  && i < max_lenght; i++)
    {
        //printf("%c", c);
        *my_string = c;
        my_string++;
        if(c == '\n')
        {
            break;
        }
    }
    *my_string = '\0';
    return my_string;
}
