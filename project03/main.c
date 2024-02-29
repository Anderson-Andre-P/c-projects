#include <stdio.h>
#include <stdlib.h>

int main()
{
    float firstValue, secondValue, total;
    char operation;

    printf("=-=-=-=-=-=-= CALCULATOR =-=-=-=-=-=-=");

    printf("\nSelect the operation below according to the option");
    printf("\nA) Addition");
    printf("\nB) Subtraction");
    printf("\nC) Multiplication");
    printf("\nD) Division");

    printf("\nEnter the chosen operation in front: ");
    scanf(" %c", &operation);
    setbuf(stdin, NULL);

    printf("\nWrite first value: ");
    scanf("%f", &firstValue);
    setbuf(stdin, NULL);

    printf("\nWrite second value: ");
    scanf("%f", &secondValue);
    setbuf(stdin, NULL);

    if(operation == 'A' || operation == 'a')
    {
        total = firstValue + secondValue;
    }
    else if (operation == 'B' || operation == 'b')
    {
        total = firstValue - secondValue;
    }
    else if (operation == 'C' || operation == 'c')
    {
        total = firstValue * secondValue;
    }
    else if (operation == 'D' || operation == 'd')
    {
        if (secondValue != 0)
        {
            total = firstValue / secondValue;
        }
        else
        {
            printf("\nError: Division by zero!");
        }
    }
    else
    {
        printf("Unexpect error!");
    }

    printf("\nResult of operation: %.2f", total);

    return 0;
}
