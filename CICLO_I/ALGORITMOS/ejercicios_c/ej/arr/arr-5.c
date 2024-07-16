#include <stdio.h>

// Leer un número entero 'cantidad' (entre 1 y 100) e imprimir los primeros 'cantidad' números pares.

int main()
{
    int cantidad;
    int pares[100];

    while (cantidad < 1 || cantidad > 100)
    {
        printf("Ingrese la cantidad de números pares que desea visualizar (máximo: 100): ");
        scanf("%d", &cantidad);
    }

    for (int i = 0; i < cantidad; i++)
    {
        pares[i] = (2 * i) + 2;
    }

    printf("Valores: ");

    for (int i = 0; i < cantidad; i++)
    {
        printf("%d ", pares[i]);
    }

    printf("\n");
    return 0;
}
