#include <stdio.h>

// Ingresar los elementos en una matriz entera de n*n, identificar los números impares y enviarlos a un vector, sumar los valores del vector y visualizar la matriz original, el vector y la sumatoria.

int main() {
    int filas, i, j, matriz[30][30], impares[900], conteo = 0, suma = 0;

    while (filas < 1 || filas > 30)
    {
        printf("Ingrese el tamaño de la matriz (maximo: 30): ");
        scanf("%d", &filas);
    }

    for (i = 0; i < filas; i++) {
        for (j = 0; j < filas; j++) {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] % 2 != 0) {
                impares[conteo++] = matriz[i][j];
                suma += matriz[i][j];
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

    printf("Vector de números impares:\n");
    for (i = 0; i < conteo; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");

    printf("Sumatoria de los valores impares: %d\n", suma);

    return 0;
}
