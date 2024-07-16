# Ejercicios de Programación del Segundo Parcial 

**Asignatura:** Algoritmos y Lógica de Progrmación\
**Docente:** Ing. Mónica Bonilla M.\
**Estudiante:** Ariel Alejandro Calderón\
**Curso:** Primer ciclo - Software


## ARREGLOS
---
### Ejercicio #1

> Dados dos arreglos 'a' y 'b', calcular la suma de sus elementos correspondientes e imprimir la suma de a[0] y b[0], la suma de todos los elementos de 'a' y la suma de todos los elementos de 'b'.

```c
#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int i;
    int c;
    int suma_a = 0;
    int suma_b = 0;

    c = a[0] + b[0];
    printf("La suma de a[0] y b[0] es: %d\n", c);

    for (i = 0; i < 5; i++)
    {
        suma_a += a[i];
    }

    printf("La suma de los elementos de a es : %d\n", suma_a);

    for (i = 0; i < 5; i++)
    {
        suma_b += b[i];
    }

    printf("La suma de los elementos de b es : %d\n", suma_b);

    printf("\n");
    return 0;
}

```


---

### Ejercicio #2

> Sumar elemento por elemento dos arreglos 'a' y 'b' de tamaño 3 y almacenar los resultados en un arreglo 'c'. Imprimir los resultados.


```c
#include <stdio.h>

int main()
{
    int a[] = {2, 4, 6};
    int b[] = {2, 8, 10};
    int c[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("La suma de los arreglos a y b es:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d ", c[i]);
    }

    printf("\n");
    return 0;
}


```


---

### Ejercicio #3

> Multiplicar elemento por elemento dos arreglos 'a' y 'b' de tamaño 5 y almacenar los resultados en un arreglo 'c'. Imprimir los resultados.

```c

#include <stdio.h>

int main()
{
    int a[] = {4, 2, 6, 3, 5};
    int b[] = {1, 2, 3, 4, 6};
    int c[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] * b[i];
    }

    printf("La multiplicacion de los arreglos a y b es:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", c[i]);
    }

    printf("\n");
    return 0;
}


```


---

### Ejercicio #4

> Sumar 10 números ingresados en un arreglo de tipo float e imprimir los números originales y la sumatoria

```c
#include <stdio.h>


int main() {
    float numeros[10];
    float suma = 0.0;
    int i;

    printf("Ingrese 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        suma += numeros[i]; 
    }

    printf("\nNúmeros ingresados:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]);
    }

    printf("\nSumatoria: %.2f\n", suma);

    return 0;
}



```


---

### Ejercicio #5

> Realizar la tablas de multiplicar de 5 números ingresados en un arreglo de tipo entero.

```c
#include <stdio.h>


int main() {
    int numeros[5];
    int i, j;

    printf("Ingrese 5 números:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("\nTabla de multiplicar del %d:\n", numeros[i]);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", numeros[i], j, numeros[i] * j);
        }
    }

    printf("\n");

    return 0;
}

```


---

### Ejercicio #6

> Leer un número entero 'n' (entre 1 y 30) y almacenar los primeros 'n' múltiplos de 6 en un arreglo. Imprimir los múltiplos almacenados.

```c
#include <stdio.h>


int main()
{
    int multiplos_6[30];
    int n = 0;
    int i;

    while (n < 1 || n > 30)
    {
        printf("Ingrese la cantidad de múltiplos de 6 que desea almacenar (máximo: 30): ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++)
    {
        multiplos_6[i] = (i + 1) * 6;
    }
    printf("Los primeros %d múltiplos de 6 son: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", multiplos_6[i]);
    }

    printf("\n");
    return 0;
}


```


---

### Ejercicio #7

> Leer un número entero 'cantidad' (entre 1 y 100) e imprimir los primeros 'cantidad' números pares.

```c
#include <stdio.h>


int main()
{
    int cantidad;
    int pares[100];

    while (cantidad < 1 || cantidad > 100)
    {
        printf("Ingrese la cantidad de números pares que desea visualizar (máximo: 100): ");
        scanf("%d", &cantidad);
    }

    for (int i = 0; i < cantidad; i++)
    {
        pares[i] = (2 * i) + 2;
    }

    printf("Valores: ");

    for (int i = 0; i < cantidad; i++)
    {
        printf("%d ", pares[i]);
    }

    printf("\n");
    return 0;
}


```


---

### Ejercicio #8

> Ingresados 2 vectores de igual número de elementos y multiplicar el 1 por el último elemento, el segundo por el antepenúltimo y así sucesivamente guardar en un tercer arreglo e imprimir.

```c
#include <stdio.h>



int main()
{
    int vector1[100];
    int vector2[100];
    int resultado[100];
    int cantidad, i;

    while (cantidad < 1||cantidad>100)
    {
        printf("Ingrese el número de elementos (maximo 100): ");
        scanf("%d", &cantidad);
    }

    printf("Ingrese elementos del primer vector:\n");
    for (i = 0; i < cantidad; i++)
    {
        printf("Elemento #%d: ", i + 1);
        scanf("%d", &vector1[i]);
    }

    printf("Ingrese elementos del segundo vector:\n");
    for (i = 0; i < cantidad; i++)
    {
        printf("Elemento #%d: ", i + 1);
        scanf("%d", &vector2[i]);
    }

    for (i = 0; i < cantidad; i++)
    {
        resultado[i] = vector1[i] * vector2[cantidad - 1 - i];
    }

    printf("Resultado:\n");
    for (i = 0; i < cantidad; i++)
    {
        printf("%d ", resultado[i]);
    }

    printf("\n");

    return 0;
}


```


---

### Ejercicio #9

> En una tienda se desea conocer el salario de n trabajadores y guardarlos en el arreglo A, y en el arreglo B ingresar las comisiones, imprimir el sueldo que le corresponde a cada trabajador.

```c
#include <stdio.h>


int main()
{
    float salarios[30], comisiones[30];
    int cantidad = 0, i;

    while (cantidad < 1 || cantidad > 30)
    {
        printf("Ingrese el número de empleados (maximo 30): ");
        scanf("%d", &cantidad);
    }

    for (i = 0; i < cantidad; i++)
    {
        printf("Ingrese el salario del trabajador #%d: ", i + 1);
        scanf("%f", &salarios[i]);
    }

    for (i = 0; i < cantidad; i++)
    {
        printf("Ingrese la comisión del trabajador #%d: ", i + 1);
        scanf("%f", &comisiones[i]);
    }

    for (i = 0; i < cantidad; i++)
    {
        printf("El sueldo total del trabajador #%d es: %.2f\n", i + 1, salarios[i] + comisiones[i]);
    }

    return 0;
}


```


---

### Ejercicio #10

> Ingresar en un arreglo de tipo entero 10 elementos y determinar en que posiciones y que números se encuentran los números pares.

```c
#include <stdio.h>


int main()
{
    int arr[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Ingrese el elemento #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("Número par [%d] encontrado en la posición %d\n", arr[i], i);
        }
    }

    return 0;
}


```


---

### Ejercicio #11

>  Leer 10 calificaciones ingresadas por el usuario, calcular y mostrar el promedio de las calificaciones.

```c
#include <stdio.h>


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


```


---

### Ejercicio #12

> Ingresar un arreglo de tipo entero y verificar cada elemento si es primo, pasarlo a otro vector e imprimirlo.

```c
#include <stdio.h>


int main()
{
    int cantidad = 0, i, j, es_primo;
    int arreglo[30], primos[30], cantidad_primos = 0;

    while (cantidad < 1 || cantidad > 30)
    {
        printf("Ingrese cantidad de elementos (maximo 30): ");
        scanf("%d", &cantidad);
    }

    for (i = 0; i < cantidad; i++)
    {
        printf("Ingrese el elemento #%d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    for (i = 0; i < cantidad; i++)
    {
        if (arreglo[i] < 2)
            continue;
        es_primo = 1;
        for (j = 2; j * j <= arreglo[i]; j++)
        {
            if (arreglo[i] % j == 0)
            {
                es_primo = 0;
                break;
            }
        }
        if (es_primo)
        {
            primos[cantidad_primos++] = arreglo[i];
        }
    }
    printf("Números primos en el arreglo:\n");
    for (i = 0; i < cantidad_primos; i++)
    {
        printf("%d\n", primos[i]);
    }

    return 0;
}


```


---

### Ejercicio #13

> Leer dos arreglos de enteros de longitud 'n' (máximo 30), calcular la suma de sus elementos y la suma por separado de cada arreglo. Imprimir las sumas individuales y la suma de los arreglos A y B.

```c
#include <stdio.h>

int main()
{
    int arreglo_a[30], arreglo_b[30], arreglo_suma[30];
    int sumatoria_a = 0, sumatoria_b = 0;
    int n = 0;
    int i;

    while (n < 1 || n > 30)
    {
        printf("Ingrese la longitud de los arreglos (máximo: 30): ");
        scanf("%d", &n);
    }

    printf("Ingrese los elementos del arreglo A:\n");
    for (i = 0; i < n; i++)
    {
        printf("Ingrese elemento #%d: ", i + 1);
        scanf("%d", &arreglo_a[i]);
        sumatoria_a += arreglo_a[i];
    }

    printf("Ingrese los elementos del arreglo B:\n");
    for (i = 0; i < n; i++)
    {
        printf("Ingrese elemento #%d: ", i + 1);
        scanf("%d", &arreglo_b[i]);
        sumatoria_b += arreglo_b[i];
    }

    printf("Suma de los elementos del arreglo A: %d\n", sumatoria_a);
    printf("Suma de los elementos del arreglo B: %d\n", sumatoria_b);

    for (i = 0; i < n; i++)
    {
        arreglo_suma[i] = arreglo_a[i] + arreglo_b[i];
    }

    printf("La suma de los arreglos A y B:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arreglo_suma[i]);
    }
    printf("\n");

    return 0;
}

```

## MATRICES
---

### Ejercicio #14 

> Leer e imprimir una matriz de tamaño 2x2 ingresada por el usuario.

```c
#include <stdio.h>

int main()
{
    int matriz[2][2];
    int i, j;

    printf("Introduce los datos de la matriz 2x2:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Ingrese elemento en la fila #%d y columna #%d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz ingresada:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}


```
---
### Ejercicio #15

> Ingresar elementos de tipo entero en una matriz de n*n y colocar cero (0) en sus diagonales.

```c
#include <stdio.h>

int main()
{
    int filas, i, j;
    int matriz[30][30];

    while (filas < 1 || filas > 30)
    {
        printf("Ingrese el tamaño de la matriz (maximo: 30): ");
        scanf("%d", &filas);
    }

    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < filas; j++)
        {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < filas; i++)
    {
        matriz[i][i] = 0;
        matriz[i][filas - i - 1] = 0;
    }

    printf("Matriz con ceros en las diagonales:\n");
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < filas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}


```
---
### Ejercicio #16

> Leer e imprimir una matriz de tamaño 3x3 ingresada por el usuario. Luego, extraer los elementos de la columna 1 y almacenarlos en un vector. Imprimir tanto la matriz ingresada como los elementos del vector.


```c
#include <stdio.h>

int main()
{
    int matriz[3][3];
    int vector[3];
    int i, j;

    printf("Introduce los datos de la matriz 3x3:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Ingrese elemento en la fila #%d y columna #%d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        vector[i] = matriz[i][1];
    }

    printf("Matriz ingresada:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Elementos de la columna 1:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d ", vector[i]);
    }

    printf("\n");
    return 0;
}


```
---
### Ejercicio #17

> Leer e imprimir una matriz de tamaño mxn ingresada por el usuario, donde m y n están entre 1 y 30 inclusive.

```c
#include <stdio.h>

int main()
{
    int filas = 0, columnas = 0;
    int matriz[30][30];
    int i, j;

    while (filas < 1 || filas > 30)
    {
        printf("Ingrese el número de filas (máximo: 30): ");
        scanf("%d", &filas);
    }

    while (columnas < 1 || columnas > 30)
    {
        printf("Ingrese el número de columnas (máximo: 30): ");
        scanf("%d", &columnas);
    }

    printf("Introduce números enteros en la matriz %dx%d:\n", filas, columnas);

    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            printf("Ingrese elemento en la fila #%d y columna #%d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz ingresada:\n");

    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}


```
---
### Ejercicio #18

> Ingresar una matriz nxm. Llenar la matriz con números flotantes y realizar la sumatoria por filas y guardarlos en un vector los resultados. Mostrar en pantalla la Matriz ingresada y el vector.

```c
#include <stdio.h>


int main()
{
    float matriz[30][30], suma_filas[30];
    int filas, columnas, i, j;

    while (filas < 1 || filas > 30)
    {
        printf("Ingrese el numero de filas (maximo: 30): ");
        scanf("%d", &filas);
    }

    while (columnas < 1 || columnas > 30)
    {
        printf("Ingrese el numero de columnas (maximo: 30): ");
        scanf("%d", &columnas);
    }

    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            suma_filas[i] += matriz[i][j];
        }
    }

    printf("Matriz ingresada:\n");
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Sumatoria por filas:\n");
    for (i = 0; i < filas; i++)
    {
        printf("Fila %d: %.2f\n", i + 1, suma_filas[i]);
    }

    return 0;
}


```
---
### Ejercicio #19 

> Ingresar los elementos en una matriz entera de n*n, identificar los números impares y enviarlos a un vector, sumar los valores del vector y visualizar la matriz original, el vector y la sumatoria.

```c
#include <stdio.h>


int main() {
    int filas, i, j, matriz[30][30], impares[900], conteo = 0, suma = 0;

    while (filas < 1 || filas > 30)
    {
        printf("Ingrese el tamaño de la matriz (maximo: 30): ");
        scanf("%d", &filas);
    }

    for (i = 0; i < filas; i++) {
        for (j = 0; j < filas; j++) {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] % 2 != 0) {
                impares[conteo++] = matriz[i][j];
                suma += matriz[i][j];
            }
        }
    }

    printf("Matriz original:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < filas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Vector de números impares:\n");
    for (i = 0; i < conteo; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");

    printf("Sumatoria de los valores impares: %d\n", suma);

    return 0;
}


```
---
### Ejercicio #20

> Ingresar una matriz de n*n elementos de tipo entero, determinar los elementos que son pares y guardarlos en un vector, imprimir la matriz y el vector resultante.

```c
#include <stdio.h>


int main() {
    int filas,  matriz[30][30], pares[900], conteo = 0;
    int i, j;

    while (filas < 1 || filas > 30)
    {
        printf("Ingrese el tamaño de la matriz (maximo: 30): ");
        scanf("%d", &filas);
    }

    for (i = 0; i < filas; i++) {
        for (j = 0; j < filas; j++) {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] % 2 == 0) {
                pares[conteo++] = matriz[i][j];
            }
        }
    }

    printf("Matriz original:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < filas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Vector de números pares:\n");
    for (i = 0; i < conteo; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    return 0;
}


```
---
### Ejercicio #21

> Crear un menú con 4 opciones: 1. Ingresar n elementos en un arreglo de tipo entero 2. Guardar en una matriz las tablas de multiplicar de los elementos del vector 3. Imprimir el vector y la matriz, la impresión de la matriz debe ser en forma de tabla o malla 4. Salir

```c
#include <stdio.h>



int main()
{
    int opcion, filas, vector[30], matriz[30][30];
    int i, j;

    while (1)
    {
        printf("Menú:\n");
        printf("1. Ingresar n elementos en un arreglo de tipo entero\n");
        printf("2. Guardar en una matriz las tablas de multiplicar de los elementos del vector\n");
        printf("3. Imprimir el vector y la matriz\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            while (filas < 1 || filas > 30)
            {
                printf("Ingrese el tamaño de la matriz (maximo: 30): ");
                scanf("%d", &filas);
            }
            for (i = 0; i < filas; i++)
            {
                printf("Ingrese el elemento %d: ", i + 1);
                scanf("%d", &vector[i]);
            }
            break;
        case 2:
            for (i = 0; i < filas; i++)
            {
                for (j = 1; j <= 10; j++)
                {
                    matriz[i][j - 1] = vector[i] * j;
                }
            }
            break;
        case 3:
            printf("Vector:\n");
            for (i = 0; i < filas; i++)
            {
                printf("%d ", vector[i]);
            }
            printf("\nMatriz:\n");
            for (i = 0; i < filas; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    printf("%d\t", matriz[i][j]);
                }
                printf("\n");
            }
            break;
        case 4:
            return 0;
        default:
            printf("Opción no válida. Intente nuevamente.\n");
        }
    }

    return 0;
}


```

## PROCEDIMIENTOS
---
### Ejercicio #22

> Diseñe un programa que dados dos números enteros determine la suma y cuál de ellos es mayor, usando dos funciones diferentes. 

```c
#include <stdio.h>

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
```
---
### Ejercicio #23

> Utilizar procedimientos: para imprimir las tablas de multiplicar de n números que el usuario seleccione , la multiplicación por cada tabla debe ser hasta el 10 .

```c
#include <stdio.h>


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


```
---
### Ejercicio #24

> Crear un menú con 4 opciones: 1. Ingresar n elementos en un arreglo de tipo entero 2. Guardar en una matriz las tablas de multiplicar de los elementos del vector 3. Imprimir el vector y la matriz, la impresión de la matriz debe ser en forma de tabla o malla 4. Salir

```c
#include <stdio.h>
#include <windows.h>

// Realizar un cuadro con caracteres especiales  y al interior colocar su nombre, carrera y curso.

void gotoxy(int x, int y) 
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void recuadro(int Col1, int Col2, int Fil1, int Fil2);


int main(int argc, char** argv) { 
	recuadro(0,60,0,23); 
	return 0; 
}


void recuadro(int Col1, int Col2, int Fil1, int Fil2) 
{
for (int Cols=Col1;Cols<=Col2;Cols++) 
{
   for (int Fils=Fil1;Fils<=Fil2;Fils++)
     {
   gotoxy(Cols,Fils);
   if ((Cols == Col1 || Cols == Col2) && (Fils != Fil1 && Fils != Fil2))
			
	printf("%c",186); 
  else if ((Fils==Fil1 || Fils == Fil2) && (Cols != Col1 && Cols != Col2))
	printf("%c",205);
}
 }
    gotoxy(5,8); printf("Universidad Estatal de Bolivar"); 
    gotoxy(5,10); printf("Carrera: Software"); 
    gotoxy(5,12); printf("Profesora: Monica Bonilla"); 
    gotoxy(5,14); printf("Asignatura: Algoritmos y Logica de Programacion"); 
    gotoxy(5,16); printf("Alumno: Ariel Alejandro Calderon"); 

    	
	gotoxy(Col1,Fil1); 
	printf("%c",201);
	gotoxy(Col1,Fil2);
	printf("%c",200);
	gotoxy(Col2,Fil1);
	printf("%c",187);
	gotoxy(Col2,Fil2);
	printf("%c",188);   
	
}

```
---