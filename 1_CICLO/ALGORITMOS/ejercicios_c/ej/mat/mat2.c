#include <stdio.h>

// Ingresar elementos de tipo entero en una matriz de n*n y colocar cero (0) en sus diagonales.

int main()
{
    int filas, i, j;
    int matriz[30][30];

    while (filas < 1 || filas > 30)
    {
        printf("Ingrese el tamaño de la matriz (maximo: 30): ");
        scanf("%d", &filas);
    }

    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < filas; j++)
        {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < filas; i++)
    {
        matriz[i][i] = 0;
        matriz[i][filas - i - 1] = 0;
    }

    printf("Matriz con ceros en las diagonales:\n");
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < filas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
