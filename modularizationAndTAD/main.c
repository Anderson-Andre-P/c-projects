#include <stdio.h>
#include <stdlib.h>
#include "pointer.h"

int main()
{
    float d;
    Pointer *p, *q;
    p = ptr_make(10, 21);
    q = ptr_make(7, 25);
    d = ptr_distance(p, q);
    printf("Distancia entre pontos: %f\n", d);

    ptr_free(q);
    ptr_free(p);

    // system("pause");
    return 0;
}