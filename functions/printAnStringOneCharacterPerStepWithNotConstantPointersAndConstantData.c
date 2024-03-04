#include <stdio.h>

void printCharacters(const char *sPtr);

int main(void)
{
    char string[] = "Print characters from string";

    printf("The string above \n");
    printCharacters(string);
    printf("\n");
    return 0;
}

void printCharacters(const char *sPtr)
{
    for (; *sPtr != '\0'; sPtr++)
    {
        printf("%c\n", *sPtr);
    }
}
