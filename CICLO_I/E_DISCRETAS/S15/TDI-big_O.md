<h2 style="text-align: center;">Trabajo de investigación</h2>

**Estudiante:** Ariel Alejandro Calderón \
**Asignatura:** Estructuras Discretas\
**Carrera:** Software\
**Fecha:** 21 de Julio del 2024\


<h1 style="text-align: center;">Notaciones Big O y ejemplos en C</h1


## O(1) - Constante

La notación O(1) representa una operación cuyo tiempo de ejecución es constante, es decir, no depende del tamaño de la entrada. Un ejemplo típico es el acceso a un elemento en un arreglo.

```c
#include <stdio.h>

void ejemploO1() {
    int arr[] = {1, 2, 3, 4, 5};
    printf("O(1): %d\n", arr[2]); // Acceso directo a un elemento
}

int main() {
    ejemploO1();
    return 0;
}

```

**Explicación:** La operación arr[2] accede directamente al elemento en la posición 2 del arreglo. Este acceso es constante y no varía con el tamaño del arreglo.

## O(n) - Lineal

La notación O(n) representa una operación cuyo tiempo de ejecución crece linealmente con el tamaño de la entrada. Un ejemplo común es una búsqueda lineal en un arreglo.

```c

#include <stdio.h>

void ejemploOn() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5, x = 3, found = -1;
    for (int i = 0; i < n && found == -1; i++)
        if (arr[i] == x) found = i;
    printf("O(n): %s\n", found != -1 ? "Encontrado" : "No encontrado");
}

int main() {
    ejemploOn();
    return 0;
}

```

**Explicación:** La función busca un elemento en el arreglo iterando a través de él. El tiempo de ejecución es proporcional al tamaño del arreglo, ya que en el peor caso, todos los elementos deben ser revisados.

## O(n^2) - Cuadrática

La notación O(n^2) representa una operación cuyo tiempo de ejecución crece cuadráticamente con el tamaño de la entrada. Un ejemplo típico es el algoritmo de ordenamiento por burbuja (bubble sort).

```c

#include <stdio.h>

void ejemploOn2() {
    int arr[] = {5, 3, 8, 6, 2}, n = 5;
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
    printf("O(n^2): ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    ejemploOn2();
    return 0;
}
```

**Explicación:** La función ejemplo ordena un arreglo utilizando el algoritmo de burbuja, que utiliza dos bucles anidados para comparar y ordenar los elementos. El tiempo de ejecución es proporcional al cuadrado del tamaño del arreglo debido a la doble iteración.
