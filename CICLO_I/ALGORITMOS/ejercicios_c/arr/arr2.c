#include <stdio.h>

// Realizar la tablas de multiplicar de 5 números ingresados en un arreglo de tipo entero

int main() {
    int numeros[5];
    int i, j;

    printf("Ingrese 5 números:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("\nTabla de multiplicar del %d:\n", numeros[i]);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", numeros[i], j, numeros[i] * j);
        }
    }

    printf("\n");

    return 0;
}
