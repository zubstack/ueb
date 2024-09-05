#include <stdio.h>

// Leer e imprimir una matriz de tamaño 2x2 ingresada por el usuario.

int main()
{
    int matriz[2][2];
    int i, j;

    printf("Introduce los datos de la matriz 2x2:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Ingrese elemento en la fila #%d y columna #%d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz ingresada:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
