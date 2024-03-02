#include <stdio.h>
#include <stdlib.h>

int potentiation(int value) {
    value = value * value;
    return value;
}

int main()
{
    int number, result;

    printf("Type a value: ");
    scanf("%d", &number);

    result = potentiation(number);

    printf("Result: %d", result);
    return 0;
}
