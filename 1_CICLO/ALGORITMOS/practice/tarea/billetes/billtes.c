#include <stdio.h>

int main()
{
    int cantidad, billete_50, billete_20, billete_10, billete_5;

    // Pedir al usuario que ingrese la cantidad de tres cifras
    printf("Ingrese una cantidad de tres cifras: ");
    scanf("%d", &cantidad);

    // Calcular la cantidad de billetes de cada denominación
    billete_50 = cantidad / 50;

    billete_20 = cantidad / 20;

    billete_10 = cantidad / 10;

    billete_5 = cantidad / 5;

    // Mostrar el resultado
    printf("Cantidad de billetes de $50: %d\n", billete_50);
    printf("Cantidad de billetes de $20: %d\n", billete_20);
    printf("Cantidad de billetes de $10: %d\n", billete_10);
    printf("Cantidad de billetes de $5: %d\n", billete_5);

    return 0;
}
