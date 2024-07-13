
#include <stdio.h>

// Multiplicar elemento por elemento dos arreglos 'a' y 'b' de tamaño 5 y almacenar los resultados en un arreglo 'c'. Imprimir los resultados.

int main()
{
    int a[] = {4, 2, 6, 3, 5};
    int b[] = {1, 2, 3, 4, 6};
    int c[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] * b[i];
    }

    printf("La multiplicacion de los arreglos a y b es:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", c[i]);
    }

    printf("\n");
    return 0;
}
