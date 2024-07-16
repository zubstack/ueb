#include <stdio.h>

// Utilizar procedimientos: para imprimir las tablas de multiplicar de n números que el usuario seleccione , la multiplicación por cada tabla debe ser hasta el 10 

void tablaMultiplicar(int numero) {
    printf("Tabla de multiplicar del %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    printf("\n");
}

int main() {
    int cantidad, numero;

     while (cantidad < 1 || cantidad > 30)
    {
        printf("Ingrese cantidad de elementos (maximo 30): ");
        scanf("%d", &cantidad);
    }

    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese el número para la tabla de multiplicar: ");
        scanf("%d", &numero);
        tablaMultiplicar(numero);
    }

    return 0;
}
