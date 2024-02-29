#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// #include <string.h>

int main()
{
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);
    setbuf(stdin, NULL);

    printf("\nTyped character: -%c-\n", character);

    if (islower(character))
    {
        printf("\nTyped the letter %c.", character);
        character = toupper(character);
        printf("\nIn uppercase: %c.", character);
    }
    else if (isupper(character))
    {
        printf("\nTyped upper letter.");
    }

    printf("\nCharacter: %c - Integer value of character: %d.", character, character);

    printf("\nEnter a number of an character: ");
    scanf("%d", &character);
    printf("\nCharacter: %c - Integer value of character: %d.", character, character);

    printf("\n\n");

    return 0;
}
