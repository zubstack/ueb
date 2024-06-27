#include <stdio.h>

int main()
{
    const int MAX_ESTUDIANTES = 30;
    int n;

    printf("Ingrese el número de estudiantes (máximo %d): ", MAX_ESTUDIANTES);
    scanf("%d", &n);

    if (n > MAX_ESTUDIANTES)
    {
        printf("El número de estudiantes excede el máximo permitido (%d).\n", MAX_ESTUDIANTES);
        return 1;
    }

    char nombres[MAX_ESTUDIANTES][50];
    float calificaciones[MAX_ESTUDIANTES][4];
    float promedios[MAX_ESTUDIANTES];

    // Ingresar datos
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el NOMBRE del estudiante #%d: ", i + 1);
        scanf("%s", nombres[i]);
        for (int j = 0; j < 4; j++)
        {
            do
            {
                printf("Ingrese la calificación #%d de %s (entre 1 y 10): ", j + 1, nombres[i]);
                scanf("%f", &calificaciones[i][j]);
                if (calificaciones[i][j] < 1 || calificaciones[i][j] > 10)
                {
                    printf("Calificación inválida. Debe estar entre 1 y 10.\n");
                }
            } while (calificaciones[i][j] < 1 || calificaciones[i][j] > 10);
        }
    }

    // Calcular promedios
    for (int i = 0; i < n; i++)
    {
        float suma = 0;
        for (int j = 0; j < 4; j++)
        {
            suma += calificaciones[i][j];
        }
        promedios[i] = suma / 4;
    }

    // Imprimir resultados
    printf("\nResultados:\n");
    printf("Nombre\t\tCalificaciones\t\t\tPromedio\tEstado\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t\t", nombres[i]);
        for (int j = 0; j < 4; j++)
        {
            printf("%.2f ", calificaciones[i][j]);
        }
        printf("\t%.2f\t\t", promedios[i]);
        if (promedios[i] >= 7)
        {
            printf("Aprobado\n");
        }
        else
        {
            printf("Reprobado\n");
        }
    }

    // Imprimir lista de reprobados
    printf("\nListado de estudiantes reprobados:\n");
    for (int i = 0; i < n; i++)
    {
        if (promedios[i] < 7)
        {
            printf("%s\n", nombres[i]);
        }
    }

    return 0;
}
