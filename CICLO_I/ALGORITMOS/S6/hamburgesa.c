#include <stdio.h>

int main()
{
    int tipo_hamburguesa, cantidad;
    float costo, total, total_final = 0;
    char tarjeta;
    int cantidad_personas = 5;
    int i = 0;

    printf("Bienvenido a El náufrago satisfecho\n");

    while (i < cantidad_personas)
    {
        printf("Persona %d\n", i + 1);
        printf("Ingrese el tipo de hamburguesa (1: sencilla $20.00, 2: doble $25.00, 3: triple $28.00): ");
        scanf("%d", &tipo_hamburguesa);

        printf("Ingrese la cantidad de hamburguesas: ");
        scanf("%d", &cantidad);

        switch (tipo_hamburguesa)
        {
        case 1:
            costo = 20.00;
            break;
        case 2:
            costo = 25.00;
            break;
        case 3:
            costo = 28.00;
            break;
        default:
            printf("Tipo de hamburguesa inválido\n");
            continue;
        }

        total = costo * cantidad;

        printf("¿Pagarán con tarjeta de crédito? (s/n): ");
        scanf(" %c", &tarjeta);

        if (tarjeta == 's' || tarjeta == 'S')
        {
            total += total * 0.05;
        }

        printf("El total a pagar por persona %d es: $%.2f\n", i + 1, total);

        total_final += total;
        i++;
    }

    printf("El total final a pagar por las %d personas es: $%.2f\n", cantidad_personas, total_final);

    return 0;
}
