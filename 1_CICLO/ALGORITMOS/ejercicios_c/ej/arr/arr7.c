#include <stdio.h>

// Leer dos arreglos de enteros de longitud 'n' (máximo 30), calcular la suma de sus elementos y la suma por separado de cada arreglo. Imprimir las sumas individuales y la suma de los arreglos A y B.

int main()
{
    int arreglo_a[30], arreglo_b[30], arreglo_suma[30];
    int sumatoria_a = 0, sumatoria_b = 0;
    int n = 0;
    int i;

    while (n < 1 || n > 30)
    {
        printf("Ingrese la longitud de los arreglos (máximo: 30): ");
        scanf("%d", &n);
    }

    printf("Ingrese los elementos del arreglo A:\n");
    for (i = 0; i < n; i++)
    {
        printf("Ingrese elemento #%d: ", i + 1);
        scanf("%d", &arreglo_a[i]);
        sumatoria_a += arreglo_a[i];
    }

    printf("Ingrese los elementos del arreglo B:\n");
    for (i = 0; i < n; i++)
    {
        printf("Ingrese elemento #%d: ", i + 1);
        scanf("%d", &arreglo_b[i]);
        sumatoria_b += arreglo_b[i];
    }

    printf("Suma de los elementos del arreglo A: %d\n", sumatoria_a);
    printf("Suma de los elementos del arreglo B: %d\n", sumatoria_b);

    for (i = 0; i < n; i++)
    {
        arreglo_suma[i] = arreglo_a[i] + arreglo_b[i];
    }

    printf("La suma de los arreglos A y B:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arreglo_suma[i]);
    }
    printf("\n");

    return 0;
}

