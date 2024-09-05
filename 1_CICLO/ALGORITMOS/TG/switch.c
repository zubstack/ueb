#include <stdio.h>

int main()
{
    // Declaro mis variables:
    float valueOne, valueTwo, result;
    char operation;
    int errors = 0;

    // Pido al usuario los dos valores a calcular y los guardo:
    printf("Dame el primer valor: ");
    scanf("%f", &valueOne);
    printf("Dame el segundo valor: ");
    scanf("%f", &valueTwo);

    // Pido al usuario que me especifique una operación por medio de un carácter y lo guardo:
    printf("Escoge una operación a realizar:\n\t's': sumar\n\t'r': restar\n\t'm': multiplicar\n\t'd': dividir\nTu operación: ");
    scanf(" %c", &operation); // NO OLVIDAR EL ESPACIO ===>> " %c"

    // Identifico la operación a realizar por medio de una estructura condicional donde comparo la elección del usuario con las operaciones disponibles:
    switch (operation)
    {
        case 's':
            result = valueOne + valueTwo;
            break;
        case 'r':
            result = valueOne - valueTwo;
            break;
        case 'm':
            result = valueOne * valueTwo;
            break;
        case 'd':
            if (valueTwo == 0)
            {
                printf("No se puede dividir entre cero.\n");
                errors = 1;
            }
            else
            {
                result = valueOne / valueTwo;
            }
            break;
        default:
            printf("Operación no identificada.\n");
            errors = 1;
            break;
    }

    // Imprimo el resultado si toda la operación fue exitosa:
    if (errors == 0)
    {
        printf("Resultado: %.2f\n", result);
    }
    return 0;
}
