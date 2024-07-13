#include <stdio.h>

// En una tienda se desea conocer el salario de n trabajadores y guardarlos en el arreglo A, y en el arreglo B ingresar las comisiones, imprimir el sueldo que le corresponde a cada trabajador.

int main()
{
    float salarios[30], comisiones[30];
    int cantidad = 0, i;

    while (cantidad < 1 || cantidad > 30)
    {
        printf("Ingrese el número de empleados (maximo 30): ");
        scanf("%d", &cantidad);
    }

    for (i = 0; i < cantidad; i++)
    {
        printf("Ingrese el salario del trabajador #%d: ", i + 1);
        scanf("%f", &salarios[i]);
    }

    for (i = 0; i < cantidad; i++)
    {
        printf("Ingrese la comisión del trabajador #%d: ", i + 1);
        scanf("%f", &comisiones[i]);
    }

    for (i = 0; i < cantidad; i++)
    {
        printf("El sueldo total del trabajador #%d es: %.2f\n", i + 1, salarios[i] + comisiones[i]);
    }

    return 0;
}
