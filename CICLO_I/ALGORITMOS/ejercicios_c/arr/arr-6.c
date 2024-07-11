#include <stdio.h>

// Leer 10 calificaciones ingresadas por el usuario, calcular y mostrar el promedio de las calificaciones.

int main() {
    int calificaciones[10];
    int i;
    float suma = 0.0;
    float promedio;

    printf("Ingrese 10 calificaciones:\n");
    for (i = 0; i < 10; i++) {
        printf("Calificación %d: ", i + 1);
        scanf("%d", &calificaciones[i]);
        suma += calificaciones[i]; 
    }
    
    promedio = suma / 10;

    printf("\nCalificaciones ingresadas:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", calificaciones[i]);
    }

    printf("\nPromedio: %.2f\n", promedio);

    printf("\n");
    return 0;
}
