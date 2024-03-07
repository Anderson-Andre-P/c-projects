#include <stdio.h>
#include <stdlib.h>

int main()
{
    // static allocation array
    int v_stacks[5] = {0, 10, 20, 30, 40};

    puts("### Static Array");
    printf("&v_stacks = %p, v_stacks = %p\n", &v_stacks, v_stacks);

    for (int i = 0; i < 5; i++)
    {
        printf("&v_stacks[%d] = %p, v_stacks[%d] = %d\n", i, &v_stacks[i], i, v_stacks[i]);
    }
    puts("\n");

    // dinamic allocation array with malloc
    int *v_heap_malloc = (int *)malloc(5 * sizeof(int)); // All elements have "memory garbage"

    puts("### Dinamic Array With Malloc");
    printf("&v_heap_malloc = %p, v_heap_malloc = %p\n", &v_heap_malloc, v_heap_malloc);

    for (int i = 0; i < 5; i++)
    {
        printf("&v_heap_malloc[%d] = %p, v_heap_malloc[%d] = %d\n", i, &v_heap_malloc[i], i, v_heap_malloc[i]);
    }
    free(v_heap_malloc);
    puts("\n");

    // dinamic allocation array with calloc
    int *v_heap_calloc = (int *)calloc(5, sizeof(int)); // All elements have "memory garbage"

    puts("### Dinamic Array With Calloc");
    printf("&v_heap_calloc = %p, v_heap_calloc = %p\n", &v_heap_calloc, v_heap_calloc);

    for (int i = 0; i < 5; i++)
    {
        printf("&v_heap_calloc[%d] = %p, v_heap_calloc[%d] = %d\n", i, &v_heap_calloc[i], i, v_heap_calloc[i]);
    }
    free(v_heap_calloc);
    puts("\n");

    return 0;
}
