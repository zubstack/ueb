#include <stdio.h>

// Sumar elemento por elemento dos arreglos 'a' y 'b' de tamaño 3 y almacenar los resultados en un arreglo 'c'. Imprimir los resultados.

int main()
{
    int a[] = {2, 4, 6};
    int b[] = {2, 8, 10};
    int c[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("La suma de los arreglos a y b es:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d ", c[i]);
    }

    printf("\n");
    return 0;
}
