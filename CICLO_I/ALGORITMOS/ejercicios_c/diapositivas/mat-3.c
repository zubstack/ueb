#include <stdio.h>

// Leer e imprimir una matriz de tamaño mxn ingresada por el usuario, donde m y n están entre 1 y 30 inclusive.

int main()
{
    int filas = 0, columnas = 0;
    int matriz[30][30];
    int i, j;

    while (filas < 1 || filas > 30)
    {
        printf("Ingrese el número de filas (máximo: 30): ");
        scanf("%d", &filas);
    }

    while (columnas < 1 || columnas > 30)
    {
        printf("Ingrese el número de columnas (máximo: 30): ");
        scanf("%d", &columnas);
    }

    printf("Introduce números enteros en la matriz %dx%d:\n", filas, columnas);

    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            printf("Ingrese elemento en la fila #%d y columna #%d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz ingresada:\n");

    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
