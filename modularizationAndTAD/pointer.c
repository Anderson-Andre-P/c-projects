#include <stdlib.h>
#include <math.h>
#include "pointer.h"

struct pointer
{
    float x;
    float y;
};

Pointer *ptr_make(float x, float y)
{
    Pointer *p = (Pointer *)malloc(sizeof(Pointer));
    if (p != NULL)
    {
        p->x = x;
        p->y = y;
    }
    return p;
}

void ptr_free(Pointer *p)
{
    free(p);
}

void ptr_access(Pointer *p, float *x, float *y)
{
    if (p == NULL)
        return 0;
    *x = p->x;
    *y = p->y;
    return 1;
}

void ptr_att(Pointer *p, float x, float y)
{
    if (p == NULL)
        return 0;
    p->x = x;
    p->y = y;
    return 1;
}

float ptr_distance(Pointer *p1, Pointer *p2)
{
    if (p1 == NULL || p2 == NULL)
        return -1;
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}
