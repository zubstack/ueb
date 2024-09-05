#include <stdio.h>

// Ingresar un arreglo de tipo entero y verificar cada elemento si es primo, pasarlo a otro vector e imprimirlo.

int main()
{
    int cantidad = 0, i, j, es_primo;
    int arreglo[30], primos[30], cantidad_primos = 0;

    while (cantidad < 1 || cantidad > 30)
    {
        printf("Ingrese cantidad de elementos (maximo 30): ");
        scanf("%d", &cantidad);
    }

    for (i = 0; i < cantidad; i++)
    {
        printf("Ingrese el elemento #%d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    for (i = 0; i < cantidad; i++)
    {
        if (arreglo[i] < 2)
            continue;
        es_primo = 1;
        for (j = 2; j * j <= arreglo[i]; j++)
        {
            if (arreglo[i] % j == 0)
            {
                es_primo = 0;
                break;
            }
        }
        if (es_primo)
        {
            primos[cantidad_primos++] = arreglo[i];
        }
    }
    printf("Números primos en el arreglo:\n");
    for (i = 0; i < cantidad_primos; i++)
    {
        printf("%d\n", primos[i]);
    }

    return 0;
}
