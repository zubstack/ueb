#include <stdio.h>

// Función para realizar la búsqueda binaria
int busquedaBinaria(int arr[], int izquierda, int derecha, int x, int *pasos)
{
    while (izquierda <= derecha)
    {
        (*pasos)++; // Incrementa el contador de pasos
        int medio = izquierda + (derecha - izquierda) / 2;

        // Verifica si x está en el medio
        if (arr[medio] == x)
            return medio;

        // Si x es mayor, ignora la mitad izquierda
        if (arr[medio] < x)
            izquierda = medio + 1;

        // Si x es menor, ignora la mitad derecha
        else
            derecha = medio - 1;
    }

    // Si no encontramos el elemento
    return -1;
}

int main()
{
    int arr[] = {10, 25, 40, 55, 70, 85, 100, 115, 130, 145, 160, 175, 190, 205, 220, 235, 250, 265, 280, 295};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    int pasos = 0;

    printf("Introduce el valor a buscar: ");
    scanf("%d", &x);

    int resultado = busquedaBinaria(arr, 0, n - 1, x, &pasos);
    if (resultado == -1)
    {
        printf("El elemento no está presente en el arreglo\n");
    }
    else
    {
        printf("El elemento está presente en el índice %d\n", resultado);
    }
    printf("Número de pasos realizados: %d\n", pasos);

    return 0;
}
