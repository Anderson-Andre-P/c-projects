#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNumbers[6], length, matrix[2][3], i, j;

    printf("\nSize of array myNumber: %lu.", sizeof(myNumbers)); // Show size in Bytes

    length = sizeof(myNumbers) / sizeof(myNumbers[0]); // Show number of positions in array
    printf("\nLength of array myNumber: %lu.", length);

    printf("\n\nArrays\n");

    for (i = 0; i < length; i++)
    {
        myNumbers[i] = i;
        printf("\nPosition %d, value %d.", i, myNumbers[i]);
    }

    printf("\n\nMatrix\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Write an value: ");
            scanf("%d", &matrix[i][j]);
            setbuf(stdin, NULL);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d |", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
