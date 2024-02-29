#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for (i = 0; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    i = 1;
    while (i != 0)
    {
        printf("Write an number: ");
        scanf("%d", &i);
    }

    i = 1;
    do
    {
        printf("Write another number: ");
        scanf("%d", &i);
    }
    while (i != 0);

    printf("Pressione Enter para continuar...");
    while (getchar() != '\n');

    return 0;
}
