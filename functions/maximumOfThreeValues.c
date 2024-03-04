#include <stdio.h>

int maximum(int x, int y, int z);

int main(void)
{
    int numberOne, numberTwo, numberThree;

    printf("Type three integer values separated with space: ");
    scanf("%d %d %d", &numberOne, &numberTwo, &numberThree);

    printf("Maximum value is: %d\n", maximum(numberOne, numberTwo, numberThree));
    return 0;
}

int maximum(int x, int y, int z)
{
    int max = x;

    if (y > max)
    {
        max = y;
    }

    if (z > max)
    {
        max = z;
    }

    return max;
}
