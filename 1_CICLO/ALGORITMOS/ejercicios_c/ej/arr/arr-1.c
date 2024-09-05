#include <stdio.h>

// Dados dos arreglos 'a' y 'b', calcular la suma de sus elementos correspondientes e imprimir la suma de a[0] y b[0], la suma de todos los elementos de 'a' y la suma de todos los elementos de 'b'.

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int i;
    int c;
    int suma_a = 0;
    int suma_b = 0;

    c = a[0] + b[0];
    printf("La suma de a[0] y b[0] es: %d\n", c);

    for (i = 0; i < 5; i++)
    {
        suma_a += a[i];
    }

    printf("La suma de los elementos de a es : %d\n", suma_a);

    for (i = 0; i < 5; i++)
    {
        suma_b += b[i];
    }

    printf("La suma de los elementos de b es : %d\n", suma_b);

    printf("\n");
    return 0;
}
