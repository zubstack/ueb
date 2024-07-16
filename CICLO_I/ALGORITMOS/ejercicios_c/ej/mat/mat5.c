#include <stdio.h>

// Ingresar una matriz nxm. Llenar la matriz con números flotantes y realizar la sumatoria por filas y guardarlos en un vector los resultados. Mostrar en pantalla la Matriz ingresada y el vector.

int main()
{
    float matriz[30][30], suma_filas[30];
    int filas, columnas, i, j;

    while (filas < 1 || filas > 30)
    {
        printf("Ingrese el numero de filas (maximo: 30): ");
        scanf("%d", &filas);
    }

    while (columnas < 1 || columnas > 30)
    {
        printf("Ingrese el numero de columnas (maximo: 30): ");
        scanf("%d", &columnas);
    }

    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            suma_filas[i] += matriz[i][j];
        }
    }

    printf("Matriz ingresada:\n");
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Sumatoria por filas:\n");
    for (i = 0; i < filas; i++)
    {
        printf("Fila %d: %.2f\n", i + 1, suma_filas[i]);
    }

    return 0;
}
