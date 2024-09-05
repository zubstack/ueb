#include <stdio.h>

// Desarrollar un programa que permita al usuario ingresar la información de un estudiante y luego mostrar esa información junto con el promedio de las notas.

struct FechaNacimiento
{
    int dia;
    int mes;
    int anyo;
};

struct DatosPersona
{
    char nombre[20];
    char inicial;
    struct FechaNacimiento fechaNacimiento;
    float nota1;
    float nota2;
    float nota3;
};

int main()
{
    const int cantidad = 5; 
    struct DatosPersona estudiantes[cantidad];

    for (int i = 0; i < cantidad; i++) {
        printf("Estudiante #%d:\n", i + 1);
        
        printf("Nombre: ");
        scanf("%19s", estudiantes[i].nombre);

        printf("Inicial (solo una letra): ");
        scanf(" %c", &estudiantes[i].inicial);

        printf("Fecha de nacimiento\nDia: ");
        scanf("%d", &estudiantes[i].fechaNacimiento.dia);

        printf("Mes: ");
        scanf("%d", &estudiantes[i].fechaNacimiento.mes);

        printf("Año: ");
        scanf("%d", &estudiantes[i].fechaNacimiento.anyo);

        printf("Notas:\nNota #1: ");
        scanf("%f", &estudiantes[i].nota1);

        printf("Nota #2: ");
        scanf("%f", &estudiantes[i].nota2);

        printf("Nota #3: ");
        scanf("%f", &estudiantes[i].nota3);

        printf("\n");
    }


    printf("Datos ingresados:\n");
    printf("\tNOMBRE\tINICIAL\tFECHA NACIMIENTO\tPROMEDIO\n");
    for (int i = 0; i < cantidad; i++) {
        float promedio = (estudiantes[i].nota1 + estudiantes[i].nota2 + estudiantes[i].nota3) / 3.0f;

        printf("#%d:\t", i + 1);
        printf("%s\t", estudiantes[i].nombre);
        printf("%c\t", estudiantes[i].inicial);
        printf("%02d/%02d/%d\t", estudiantes[i].fechaNacimiento.dia, estudiantes[i].fechaNacimiento.mes, estudiantes[i].fechaNacimiento.anyo);
        printf("%.2f\n", promedio);
    }

    return 0;
}
