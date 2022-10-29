#include <stdio.h>
#include <stdlib.h>
char* strduplicate(char* array);
int strinleng(char array[]);
void strcpy(char* string_copy, char* string);

int main()
{
    char array[] = "hello";
    char* array_copy = strduplicate(array);
    printf("%s", array_copy);
    free(array_copy);
    return 0;
}

char* strduplicate(char* array)
{

    int size = strinleng(array);
    char* array_copy = (char*)calloc(size + 1, sizeof(char));
    if(array_copy != NULL)
    {
        strcpy(array_copy, array);
    }
    return array_copy;

}

//===============================================================================================================================================

int strinleng(char array[])
{
    int i = 0;
    while(array[i] != '\0')
    {
        i++;
    }
    return i + 1;
}

void strcpy(char* string_copy, char* string)
{
    while(*string_copy++  = *string++)
    ;
}


