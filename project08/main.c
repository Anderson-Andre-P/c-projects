#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word[10], wordTwo[10];
/*
    printf("Type an word: ");
    scanf("%s", &word);

    setbuf(stdin, NULL);

    printf("Word: %s\n", word);
*/
    printf("Type an word: ");
    fgets(word, sizeof(word), stdin); // Read a line safely using maximum buffer size
    // setbuf(stdin, NULL);

    printf("Word: %s\n", word);

    strcpy(wordTwo, word); // copy value of an vector to another vector

    printf("Word 1 - %s\nWord 2 - %s\n", word, wordTwo);

    printf("Word have %d letters.", strlen(word)); // return size of positions used in vector

    return 0;
}
