#include <stdio.h>
#define SIZE 100

int linearSearch(const int array[], int key, int size);

int main(void)
{
    int a[SIZE], x, searchKey, element;

    for (x = 0; x < SIZE; x++)
    {
        a[x] = 2 * x;
    }

    printf("Type a key to search an integer: ");
    scanf("%d", &searchKey);

    element = linearSearch(a, searchKey, SIZE);

    if (element != -1)
    {
        printf("Find value in element %d\n", element);
    }
    else
    {
        printf("Not found any value\n");
    }

    return 0;
}

int linearSearch(const int array[], int key, int size)
{
    for (int n = 0; n < size; n++)
    {
        if (array[n] == key)
        {
            return n;
        }
    }

    return -1;
}
