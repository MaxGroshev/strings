#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

size_t GETLINE(char** buffer, size_t* len, FILE* string);
char** FGETS  (char** buffer, size_t* len, FILE* string);

int main()
{
    FILE* string = fopen("fgets_dem.txt", "r");
    size_t len = 3;
    char* buffer = (char*)calloc(len,  sizeof(char));
    assert(buffer != NULL);
    size_t result = GETLINE(&buffer, &len, string);
    printf("This string has %ld symbols\n", result);
    printf("%s\n", buffer);
    fclose(string);
    free(buffer);
    return 0;

}

//----------------------------------------------------------------------------------------------------------------------------------

size_t GETLINE(char** buffer, size_t* len, FILE* string)
{
    FGETS(buffer,len, string);


    size_t final_lenght = 0;
    while(*(*buffer + final_lenght) != '\0')
    {
        final_lenght++;
    }
    return final_lenght;
}

//--------------------------------------------------------------------------------------------------------------------------------

char** FGETS(char** buffer, size_t* len, FILE* string)
{
    char c = '0';
    char* tmp = *buffer;
    int i = 0;
    for(i = 0; (c = getc(string)) != EOF; i++)
    {
        *tmp = c;
        if(c == '\n')
        {
            break;
        }
        ++tmp;
    }
    *tmp = '\0';

    if(i > *len)
    {
        *len = (size_t)i;
        *buffer = (char*) realloc(*buffer, (*len) * sizeof(char));
    }
    return buffer;
}
