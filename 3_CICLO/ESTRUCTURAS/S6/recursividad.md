# TRABAJO GRUPAL - ESTRUCTURAS DE DATOS

**Fecha**: 08/03/2025

**Integrantes**:
- Ariel Alejandro Calderon
- Angeles Xiomara Punina 
- Mikaela Alejandra Paredes

**Realizar un programa (puede ser realizado con java o c) de recursividad con el siguiente menú:**

- Factorial de un número
- N ésimo número de la serie fibonacci
- Potencia (base elevada a la potencia)
- Sumatoria de n ésimos numeros
- Torres de Hanoi
- Salir

**Programa de Java**

```java
import java.util.Scanner;

public class RecursividadMenu {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int opcion;

        do {
            // Mostrar el menú
            System.out.println("\n--- Menú de Recursividad ---");
            System.out.println("1. Factorial de un número");
            System.out.println("2. N-ésimo número de Fibonacci");
            System.out.println("3. Potencia (base^exponente)");
            System.out.println("4. Sumatoria de n números");
            System.out.println("5. Torres de Hanoi");
            System.out.println("6. Salir");
            System.out.print("Seleccione una opción: ");
            opcion = scanner.nextInt();

            switch (opcion) {
                case 1:
                    System.out.print("Ingrese un número: ");
                    int numFactorial = scanner.nextInt();
                    System.out.println("Factorial de " + numFactorial + " es: " + factorial(numFactorial));
                    break;
                case 2:
                    System.out.print("Ingrese el término N de Fibonacci: ");
                    int nFibonacci = scanner.nextInt();
                    System.out.println("El término " + nFibonacci + " de Fibonacci es: " + fibonacci(nFibonacci));
                    break;
                case 3:
                    System.out.print("Ingrese la base: ");
                    int base = scanner.nextInt();
                    System.out.print("Ingrese el exponente: ");
                    int exponente = scanner.nextInt();
                    System.out.println(base + "^" + exponente + " = " + potencia(base, exponente));
                    break;
                case 4:
                    System.out.print("Ingrese el valor de n para la sumatoria: ");
                    int nSumatoria = scanner.nextInt();
                    System.out.println("Sumatoria de " + nSumatoria + " números es: " + sumatoria(nSumatoria));
                    break;
                case 5:
                    System.out.print("Ingrese el número de discos para Torres de Hanoi: ");
                    int discos = scanner.nextInt();
                    System.out.println("Solución para " + discos + " discos:");
                    torresDeHanoi(discos, 'A', 'C', 'B');
                    break;
                case 6:
                    System.out.println("Saliendo del programa...");
                    break;
                default:
                    System.out.println("Opción inválida, intente nuevamente.");
            }
        } while (opcion != 6);

        scanner.close();
    }

    // Factorial de un número (n!)
    public static int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * factorial(n - 1);
    }

    // N-ésimo número de Fibonacci
    public static int fibonacci(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

    // Potencia de un número (base^exponente)
    public static int potencia(int base, int exponente) {
        if (exponente == 0) {
            return 1;
        }
        return base * potencia(base, exponente - 1);
    }

    // Sumatoria de los primeros n números
    public static int sumatoria(int n) {
        if (n == 0) {
            return 0;
        }
        return n + sumatoria(n - 1);
    }

    // Torres de Hanoi
    public static void torresDeHanoi(int n, char origen, char destino, char auxiliar) {
        if (n == 1) {
            System.out.println("Mover disco 1 de " + origen + " a " + destino);
            return;
        }
        torresDeHanoi(n - 1, origen, auxiliar, destino);
        System.out.println("Mover disco " + n + " de " + origen + " a " + destino);
        torresDeHanoi(n - 1, auxiliar, destino, origen);
    }
}
```
