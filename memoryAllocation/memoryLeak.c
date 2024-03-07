#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    char *vs;
    for (k = 0; k < 9999999; k++)
    {
        vs = (char *)malloc(5000 * sizeof(char));
    }

    return 0;
}