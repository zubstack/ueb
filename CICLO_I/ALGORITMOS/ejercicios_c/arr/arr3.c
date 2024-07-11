#include <stdio.h>

// Ingresados 2 vectores de igual número de elementos y multiplicar el 1 por el último elemento, el segundo por el antepenúltimo y así sucesivamente guardar en un tercer arreglo e imprimir.

int main()
{
    int vector1[100];
    int vector2[100];
    int resultado[100];
    int cantidad, i;

    while (cantidad < 1||cantidad>100)
    {
        printf("Ingrese el número de elementos (maximo 100): ");
        scanf("%d", &cantidad);
    }

    printf("Ingrese elementos del primer vector:\n");
    for (i = 0; i < cantidad; i++)
    {
        printf("Elemento #%d: ", i + 1);
        scanf("%d", &vector1[i]);
    }

    printf("Ingrese elementos del segundo vector:\n");
    for (i = 0; i < cantidad; i++)
    {
        printf("Elemento #%d: ", i + 1);
        scanf("%d", &vector2[i]);
    }

    for (i = 0; i < cantidad; i++)
    {
        resultado[i] = vector1[i] * vector2[cantidad - 1 - i];
    }

    printf("Resultado:\n");
    for (i = 0; i < cantidad; i++)
    {
        printf("%d ", resultado[i]);
    }

    printf("\n");

    return 0;
}
