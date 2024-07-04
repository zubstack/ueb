#include <stdio.h>

int main()
{
    char nombres[28][31];
    float calificaciones[28];
    int n_estudiantes = 0;
    int longitud_maxima_nombres = 0;

    while (n_estudiantes < 1 || n_estudiantes > 27)
    {
        printf("Ingrese cantidad de estudiantes de primer ciclo (maximo: 27): ");
        scanf("%d", &n_estudiantes);
    }
    while (longitud_maxima_nombres < 1 || longitud_maxima_nombres > 30)
    {
        printf("Ingrese la longitud del nombre mas largo (maximo: 30): ");
        scanf("%d", &longitud_maxima_nombres);
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
        printf("Calificación de %s: ", nombres[i]);
        scanf("%f", &calificaciones[i]);
    }

    printf("\nNombres y calificaciones:\n");
    for (int i = 0; i < n_estudiantes; i++)
    {
        printf("Estudiante: %s, Calificación: %.2f\n", nombres[i], calificaciones[i]);
    }

    return 0;
}
