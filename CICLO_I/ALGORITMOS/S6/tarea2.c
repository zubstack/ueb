#include <stdio.h>

int main()
{
    int cantidad = 10;
    int iterador = 0;
    int a = 0, b = 1, temp;

    printf("Los primeros %d términos de la secuencia de Fibonacci son:\n", cantidad);

    while (iterador < cantidad)
    {
        if (iterador <= 1)
        {
            temp = iterador;
        }
        else
        {
            temp = a + b;
            a = b;
            b = temp;
        }

        printf("%d ", temp);
        iterador++;
    }

    printf("\n");

    return 0;
}
