#include <stdio.h>

// Construya una función que calcule la suma de los k primeros números enteros impares

int sumaImpares(int k) {
    int suma = 0;
    for (int i = 0; i < k; i++) {
        suma += 2 * i + 1;
    }
    return suma;
}

int main() {
    int k;
    printf("Introduce el número de primeros enteros impares que quieres sumar: ");
    scanf("%d", &k);

    int resultado = sumaImpares(k);
    printf("La suma de los primeros %d números impares es: %d\n", k, resultado);

    return 0;
}
