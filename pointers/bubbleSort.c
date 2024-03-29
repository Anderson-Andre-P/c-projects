#include <stdio.h>
#define SIZE 10

void bubbleSort(int *const array, const int size);

int main(void)
{
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 0}, i;

    printf("Itens of data in original order\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%4d, %p\n", a[i], &a[i]);
    }

    bubbleSort(a, SIZE);

    printf("\nIntens from array in order ascendent\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    printf("\n");
    return 0;
}

void bubbleSort(int *const array, const int size)
{
    void swap(int *elementOnePtr, int *elementTwoPtr);
    int pass, j;

    for (pass = 0; pass < size - 1; pass++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

void swap(int *elementOnePtr, int *elementTwoPtr)
{
    int hold = *elementOnePtr;
    *elementOnePtr = *elementTwoPtr;
    *elementTwoPtr = hold;
}
