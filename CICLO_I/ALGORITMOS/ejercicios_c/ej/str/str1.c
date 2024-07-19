#include <stdio.h>

// Desarrolla un programa que permita ingresar y mostrar la información de 5 personas. Cada persona debe tener un nombre, un apellido, una edad (entre 1 y 100), una dirección y un hobby. El programa debe solicitar la información al usuario, verificar que la edad esté en el rango válido, y luego imprimir los datos de cada persona en una tabla. Utiliza una estructura persona para almacenar la información y un arreglo de 5 elementos de tipo persona para gestionar los datos.

struct persona {
    char nombre[20];
    char apellido[20];
    int edad = 0;
    char direccion[20];
    char hobby[20];
} estudiantes[5];

int main() {
	
	int cantidad = 1;
	int i;
	
	for(i = 0; i < cantidad; i++) {
	    printf("Persona #%d:\n", i + 1);
	    printf("Nombre: ");
	    scanf("%19s", estudiantes[i].nombre);
	    printf("Apellido: ");
	    scanf("%19s", estudiantes[i].apellido);
	    while(estudiantes[i].edad < 1 || estudiantes[i].edad > 100){
	    	printf("Edad (maximo: 100): ");
	    	scanf("%d", &estudiantes[i].edad);
		}
	    printf("Direccion: ");
	    scanf("%19s", estudiantes[i].direccion);
	    printf("Hobby: ");
	    scanf("%19s", estudiantes[i].hobby);
	    printf("\n");	
	}

    printf("Datos ingresados:\n");
	printf("\tNOMBRE\tAPELLIDO\tEDAD\tDIRECCION\tHOBBY\n");
    for (i = 0; i < cantidad; i++) {
        printf("#%d:", i + 1);
        printf("%s\t", estudiantes[i].nombre);
        printf("%s\t", estudiantes[i].apellido);
        printf("%d\t", estudiantes[i].edad);
        printf("%s\t", estudiantes[i].direccion);
        printf("%s", estudiantes[i].hobby);
        printf("\n");
    }

    return 0;
}
