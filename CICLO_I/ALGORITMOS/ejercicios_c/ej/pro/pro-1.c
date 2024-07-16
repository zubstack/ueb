#include <stdio.h>

// Diseñe un programa que dados dos números enteros determine la suma y cuál de ellos es mayor, usando dos funciones diferentes. 

void suma(int a, int b);
void mayor(int a, int b);
int main()
{
    int a, b;
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);
    suma(a, b);
    mayor(a, b);
    return 0;
}
void suma(int a, int b)
{
    int sum;
    sum = a + b;
    printf("El valor de la suma es %d:\n\n", sum);
}

void mayor(int a, int b)
{
    if (a == b)
        printf("Son iguales\n\n");
    else
    {
        if (a > b)
            printf("El valor de a es mayor que el de b\n\n");
        else
            printf("El valor de b es mayor que el de a\n\n");
    }
}