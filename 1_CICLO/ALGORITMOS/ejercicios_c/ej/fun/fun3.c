#include <stdio.h>

// Calcula el cubo de los números del 1 al 5 utilizando una función

int calcularCubo(int n) {
    return n * n * n;
}

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("El cubo de %d es %d\n", i, calcularCubo(i));
    }
    return 0;
}
