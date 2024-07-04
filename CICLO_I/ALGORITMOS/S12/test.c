#include <stdio.h>

int main()
{   
    int n_estudiantes = 3;
    char matriz_nombres[n_estudiantes][40];

    for (int i = 0; i < n_estudiantes; i++)
    {
        printf("Nombre del estudiante %d: ", i + 1);
        scanf("%s", matriz_nombres[i]);
    }

    for (int i = 0; i < n_estudiantes; i++)
    {
        printf("Estudiante: %s\n", matriz_nombres[i]);
    }
    return 0;
}
