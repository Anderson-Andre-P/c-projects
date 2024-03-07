#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n = 5;
    int *v;
    v = (int *)malloc(n * sizeof(int));

    for (i = 0; i < 5; i++)
    {
        v[i] = i;
    }

    // ###################################################

    int v1[5] = {0, 1, 2, 3, 4};
    int *v2, *p;
    int j;

    p = v1;
    p[3] = p[4] = 10;
    v2 = (int *)malloc(5 * sizeof(int));

    for (j = 0; i < 5; i++)
    {
        v2[i] = v1[i];
    }

    free(v2);
    v2 = NULL; // erro, v2 aponta para uma memória que não está na HEAP

    return 0;
}
