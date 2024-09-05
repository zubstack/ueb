#include <stdio.h>

int main()
{
    float salario_mensual, utilidad;
    int antiguedad;

    // Pedir al usuario que ingrese el salario mensual y la antigüedad en años
    printf("Ingrese el salario mensual del trabajador: $");
    scanf("%f", &salario_mensual);
    printf("Ingrese la antigüedad del trabajador en años: ");
    scanf("%d", &antiguedad);

    // Calcular la utilidad según la antigüedad
    if (antiguedad < 1)
    {
        utilidad = salario_mensual * 0.04;
    }
    else if (antiguedad < 2)
    {
        utilidad = salario_mensual * 0.08;
    }
    else if (antiguedad < 5)
    {
        utilidad = salario_mensual * 0.10;
    }
    else if (antiguedad < 10)
    {
        utilidad = salario_mensual * 0.15;
    }
    else
    {
        utilidad = salario_mensual * 0.50;
    }

    // Mostrar el resultado
    printf("La utilidad anual del trabajador es: $%.2f\n", utilidad);

    return 0;
}
