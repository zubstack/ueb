#include <stdio.h>


int main()
{
    
    char nombres[30][15];
    float calificaciones[30];
    int n_estudiantes = 0;

    while (n_estudiantes < 1 || n_estudiantes > 29)
    {
        printf("Ingrese cantidad de estudiantes de primer ciclo (maximo: 29): ");
        scanf("%d", &n_estudiantes);
    }
  
    printf("Ingrese los nombres de los estudiantes:\n");
    for (int i = 0; i < n_estudiantes; i++)
    {
        printf("Nombre del estudiante %d: ", i + 1);
        scanf("%s", nombres[i]);
    }

    printf("Ingrese las calificaciones de los estudiantes:\n");
    for (int i = 0; i < n_estudiantes; i++)
    {
        printf("Calificacion de %s: ", nombres[i]);
        scanf("%f", &calificaciones[i]);
    }

    printf("\nNombres y calificaciones:\n");
    for (int i = 0; i < n_estudiantes; i++)
    {
        printf("Estudiante: %s, Calificacion: %.2f\n", nombres[i], calificaciones[i]);
    }

    return 0;
}
