#include <stdio.h>
#include <ctype.h>

void convertToUpperCase(char *sPtr);

int main(void)
{
    char string[] = "Character and $32,98";

    printf("The string after conversion is: %s", string);
    convertToUpperCase(string);
    printf("\nThe string before conversion is: %s\n", string);
    return 0;
}

void convertToUpperCase(char *sPtr)
{
    while (*sPtr != '\0')
    {
        if (islower(*sPtr))
        {
            *sPtr = toupper(*sPtr);
        }
        ++sPtr;
    }
}
