#include <stdio.h>

// Ingresar en un arreglo de tipo entero 10 elementos y determinar en que posiciones y que números se encuentran los números pares.

int main()
{
    int arr[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Ingrese el elemento #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("Número par [%d] encontrado en la posición %d\n", arr[i], i);
        }
    }

    return 0;
}
