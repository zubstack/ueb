#include <stdio.h>
#include <math.h>

int main()
{
    int option, start, end, base;

    while (1)
    {
        option = 0;
        printf("\nSeleccione la operación:\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicación\n");
        printf("4. División\n");
        printf("5. Potenciación\n");
        printf("6. Salir\n");

        while (option > 6 || option < 1)
        {
            printf("Ingrese el número de la opción deseada: ");
            scanf("%d", &option);
        }

        if (option == 6)
        {
            printf("Saliendo del programa...\n");
            break;
        }

        printf("Ingrese el número inicial del rango: ");
        scanf("%d", &start);
        printf("Ingrese el número final del rango: ");
        scanf("%d", &end);
        printf("Ingrese el número base para la tabla: ");
        scanf("%d", &base);

        if (start > end)
        {
            printf("[Error]: El rango no es válido. El número inicial debe ser menor o igual al número final.\n");
            continue;
        }

        switch (option)
        {
        case 1:
            printf("Tabla de suma para %d del %d al %d:\n", base, start, end);
            for (int i = start; i <= end; i++)
            {
                printf("%d + %d = %d\n", base, i, base + i);
            }
            break;
        case 2:
            printf("Tabla de resta para %d del %d al %d:\n", base, start, end);
            for (int i = start; i <= end; i++)
            {
                printf("%d - %d = %d\n", base, i, base - i);
            }
            break;
        case 3:
            printf("Tabla de multiplicación para %d del %d al %d:\n", base, start, end);
            for (int i = start; i <= end; i++)
            {
                printf("%d * %d = %d\n", base, i, base * i);
            }
            break;
        case 4:
            printf("Tabla de división para %d del %d al %d:\n", base, start, end);
            for (int i = start; i <= end; i++)
            {
                if (i != 0)
                {
                    printf("%d / %d = %.2f\n", base, i, (float)base / i);
                }
                else
                {
                    printf("%d / %d = indefinido (división por cero)\n", base, i);
                }
            }
            break;
        case 5:
            printf("Tabla de potenciación para %d del %d al %d:\n", base, start, end);
            for (int i = start; i <= end; i++)
            {
                printf("%d ^ %d = %.0f\n", base, i, pow(base, i));
            }
            break;
        default:
            printf("Opción no válida. Por favor, seleccione una opción válida.\n");
            break;
        }
    }
    return 0;
}
