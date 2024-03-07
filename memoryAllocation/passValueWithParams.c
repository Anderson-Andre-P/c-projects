#include <stdio.h>
#include <stdlib.h>

void sumArrWithScale(int v[], int n, int scale)
{
    for (int i = 0; i < n; i++)
    {
        v[i] += scale;
    }
}

void printArray(const int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        // v[i]++;
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
    }
    puts("");
}

void deallocatesMemory(int **v)
{
    free(*v);
    *v = NULL;
}

int main()
{
    puts("### Static Array");
    int vs[5] = {0, 10, 20, 30, 40};
    printArray(vs, 5);
    sumArrWithScale(vs, 5, 9);
    printArray(vs, 5);

    puts("### Dynamic Array With Calloc");
    int *vh = (int *)calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        vh[i] = i * 1;
    }

    printArray(vh, 5);
    sumArrWithScale(vh, 5, 9);
    printArray(vh, 5);

    puts("==> Before the function deallocates the memory");
    printf("&vh = %p, vh = %p\n", &vh, vh);
    deallocatesMemory(&vh);
    puts("==> After the function deallocates the memory");
    printf("&vh = %p, vh = %p\n", &vh, vh);

    return 0;
}