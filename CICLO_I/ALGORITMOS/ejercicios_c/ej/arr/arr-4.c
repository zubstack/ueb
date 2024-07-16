#include <stdio.h>

// Leer un número entero 'n' (entre 1 y 30) y almacenar los primeros 'n' múltiplos de 6 en un arreglo. Imprimir los múltiplos almacenados.

int main()
{
    int multiplos_6[30];
    int n = 0;
    int i;

    while (n < 1 || n > 30)
    {
        printf("Ingrese la cantidad de múltiplos de 6 que desea almacenar (máximo: 30): ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++)
    {
        multiplos_6[i] = (i + 1) * 6;
    }
    printf("Los primeros %d múltiplos de 6 son: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", multiplos_6[i]);
    }

    printf("\n");
    return 0;
}
