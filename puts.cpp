#include <stdio.h>
void puts(char* string);

int main()
{
    char string[] = "Hello World";
    puts(string);
    return 0;
}

void puts(char* string)
{
    printf("%s\n", string);
}
