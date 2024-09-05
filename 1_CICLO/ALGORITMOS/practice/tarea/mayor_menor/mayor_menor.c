#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;

    // Pedir al usuario que ingrese los 4 números
    printf("Ingresa el primer número: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo número: ");
    scanf("%d", &num2);
    printf("Ingresa el tercer número: ");
    scanf("%d", &num3);
    printf("Ingresa el cuarto número: ");
    scanf("%d", &num4);

    // Suponemos que el primer número es tanto el mayor como el menor inicialmente
    int mayor = num1;
    int menor = num1;

    // Comparar con los otros números para encontrar el mayor y el menor
    if (num2 > mayor)
    {
        mayor = num2;
    }
    else if (num2 < menor)
    {
        menor = num2;
    }

    if (num3 > mayor)
    {
        mayor = num3;
    }
    else if (num3 < menor)
    {
        menor = num3;
    }

    if (num4 > mayor)
    {
        mayor = num4;
    }
    else if (num4 < menor)
    {
        menor = num4;
    }

    // Mostrar el resultado
    printf("El número mayor es: %d\n", mayor);
    printf("El número menor es: %d\n", menor);

    return 0;
}
