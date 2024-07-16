#include <stdio.h>

// Crear un menú con 4 opciones:
// 1. Ingresar n elementos en un arreglo de tipo entero
// 2. Guardar en una matriz las tablas de multiplicar de los elementos del vector
// 3. Imprimir el vector y la matriz, la impresión de la matriz debe ser en forma de tabla o malla
// 4. Salir

int main()
{
    int opcion, filas, vector[30], matriz[30][30];
    int i, j;

    while (1)
    {
        printf("Menú:\n");
        printf("1. Ingresar n elementos en un arreglo de tipo entero\n");
        printf("2. Guardar en una matriz las tablas de multiplicar de los elementos del vector\n");
        printf("3. Imprimir el vector y la matriz\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            while (filas < 1 || filas > 30)
            {
                printf("Ingrese el tamaño de la matriz (maximo: 30): ");
                scanf("%d", &filas);
            }
            for (i = 0; i < filas; i++)
            {
                printf("Ingrese el elemento %d: ", i + 1);
                scanf("%d", &vector[i]);
            }
            break;
        case 2:
            for (i = 0; i < filas; i++)
            {
                for (j = 1; j <= 10; j++)
                {
                    matriz[i][j - 1] = vector[i] * j;
                }
            }
            break;
        case 3:
            printf("Vector:\n");
            for (i = 0; i < filas; i++)
            {
                printf("%d ", vector[i]);
            }
            printf("\nMatriz:\n");
            for (i = 0; i < filas; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    printf("%d\t", matriz[i][j]);
                }
                printf("\n");
            }
            break;
        case 4:
            return 0;
        default:
            printf("Opción no válida. Intente nuevamente.\n");
        }
    }

    return 0;
}
