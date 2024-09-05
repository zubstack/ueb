#include <stdio.h>

// Sumar 10 números ingresados en un arreglo de tipo float e imprimir los números originales y la sumatoria

int main() {
    float numeros[10];
    float suma = 0.0;
    int i;

    printf("Ingrese 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        suma += numeros[i]; 
    }

    printf("\nNúmeros ingresados:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]);
    }

    printf("\nSumatoria: %.2f\n", suma);

    return 0;
}
