#include <stdio.h>

// Ingresar una matriz de n*n elementos de tipo entero, determinar los elementos que son pares y guardarlos en un vector, imprimir la matriz y el vector resultante.

int main() {
    int filas,  matriz[30][30], pares[900], conteo = 0;
    int i, j;

    while (filas < 1 || filas > 30)
    {
        printf("Ingrese el tamaño de la matriz (maximo: 30): ");
        scanf("%d", &filas);
    }

    for (i = 0; i < filas; i++) {
        for (j = 0; j < filas; j++) {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] % 2 == 0) {
                pares[conteo++] = matriz[i][j];
            }
        }
    }

    printf("Matriz original:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < filas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Vector de números pares:\n");
    for (i = 0; i < conteo; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    return 0;
}
