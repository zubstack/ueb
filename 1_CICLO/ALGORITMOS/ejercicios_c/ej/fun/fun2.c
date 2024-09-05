#include <stdio.h>

// Construya una función que realice intercambio de los valores entre 2 variables

void intercambiar(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Después del intercambio dentro de la función: a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;
    printf("Introduce el valor de x: ");
    scanf("%d", &x);
    printf("Introduce el valor de y: ");
    scanf("%d", &y);

    printf("Antes del intercambio: x = %d, y = %d\n", x, y);
    intercambiar(x, y);
    printf("Después del intercambio en main: x = %d, y = %d\n", x, y);

    return 0;
}
