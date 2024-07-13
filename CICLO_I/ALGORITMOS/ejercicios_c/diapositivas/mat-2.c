#include <stdio.h>

// Leer e imprimir una matriz de tamaño 3x3 ingresada por el usuario. Luego, extraer los elementos de la columna 1 y almacenarlos en un vector. Imprimir tanto la matriz ingresada como los elementos del vector.

int main()
{
    int matriz[3][3];
    int vector[3];
    int i, j;

    printf("Introduce los datos de la matriz 3x3:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Ingrese elemento en la fila #%d y columna #%d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        vector[i] = matriz[i][1];
    }

    printf("Matriz ingresada:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Elementos de la columna 1:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d ", vector[i]);
    }

    printf("\n");
    return 0;
}
