#include <stdio.h>
#define SIZE 10

long factorial(long number);

int main(void)
{
    int i;

    for (i = 0; i <= SIZE; i++)
    {
        printf("%2d! = %ld\n", i, factorial(i));
    }

    return 0;
}

long factorial(long number)
{
    if (number <= 1)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
