#include <stdio.h>
void strinleng(char array[]);

int main()
{
    char array[] = "Hello World";
    strinleng(array);
}

void strinleng(char array[])
{
    int i = 0;
    while(array[i] != '\0')
    {
         i++;
    }

    printf("%d\n", i);
}


