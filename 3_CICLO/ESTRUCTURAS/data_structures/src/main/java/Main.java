import java.util.Scanner;

public class Main {
    static Scanner scan = new Scanner(System.in);
    static ListaEnlazada lista = new ListaEnlazada();

    public static void main(String[] args) {
        int opcionPrincipal = 0;

        // Opciones de los menús
        String[] opciones = {"Insertar", "Extraer", "Mostrar", "Vaciar", "Salir"};
        String[] opcionesSecundarias = {"Cabeza", "Cola", "Valor", "Referencia", "Regresar"};

        while (opcionPrincipal != opciones.length) { // Mientras no se elija "Salir"
            System.out.println("\n== LISTA ENLAZADA ==");
            mostrarOpciones(opciones);
            opcionPrincipal = leerOpcion(1, opciones.length);

            switch (opcionPrincipal) {
                case 1: // Insertar
                    ejecutarMenu(opcionesSecundarias, true);
                    break;
                case 2: // Extraer
                    ejecutarMenu(opcionesSecundarias, false);
                    break;
                case 3: // Mostrar lista
                    lista.mostrar();
                    break;
                case 4: // Vaciar lista
                    lista.limpiar();
                    System.out.println("La lista enlazada ha sido vaciada.");
                    break;
                case 5: // Salir
                    System.out.println("Saliendo del programa...");
                    break;
            }
        }

        scan.close();
    }

    // Método para mostrar el menú de opciones
    static void mostrarOpciones(String[] opciones) {
        for (int i = 0; i < opciones.length; i++) {
            System.out.println((i + 1) + ") " + opciones[i]);
        }
    }

    // Método para manejar los submenús de inserción y extracción
    static void ejecutarMenu(String[] opciones, boolean esInsercion) {
        System.out.println("\nSeleccione una opción:");
        mostrarOpciones(opciones);
        int opcion = leerOpcion(1, opciones.length);

        if (opcion == opciones.length) return; // Si elige "Regresar", salir del submenú

        if (esInsercion) {
            ejecutarInsercion(opcion);
        } else {
            ejecutarExtraccion(opcion);
        }
    }

    // Método para manejar la inserción de nodos
    static void ejecutarInsercion(int opcion) {
        int valor = leerEntero("Ingrese el valor del nodo: ");

        switch (opcion) {
            case 1:
                lista.insertarCabeza(valor);
                break;
            case 2:
                lista.insertarCola(valor);
                break;
            case 3:
                int valorDespues = leerEntero("Ingrese el valor del nodo después del cual insertar: ");
                lista.insertarPorValor(valorDespues, valor);
                break;
            case 4:
                int valorReferencia = leerEntero("Ingrese el valor del nodo de referencia: ");
                ListaEnlazada.Nodo nodo = buscarNodo(valorReferencia);
                if (nodo != null) {
                    lista.insertarPorReferencia(nodo, valor);
                } else {
                    System.out.println("El nodo con valor " + valorReferencia + " no fue encontrado.");
                }
                break;
        }
    }

    // Método para manejar la extracción de nodos
    static void ejecutarExtraccion(int opcion) {
        ListaEnlazada.Nodo nodo = null;
        int valor;

        switch (opcion) {
            case 1:
                nodo = lista.extraerCabeza();
                break;
            case 2:
                nodo = lista.extraerCola();
                break;
            case 3:
                valor = leerEntero("Ingrese el valor del nodo a extraer: ");
                nodo = lista.extraerPorValor(valor);
                break;
            case 4:
                valor = leerEntero("Ingrese el valor del nodo de referencia: ");
                nodo = buscarNodo(valor);
                if (nodo != null) {
                    nodo = lista.extraerPorReferencia(nodo);
                } else {
                    System.out.println("El nodo con valor " + valor + " no fue encontrado.");
                }
                break;
        }

        if (nodo != null) {
            System.out.println("Nodo extraído con valor: " + nodo.dato);
        } else {
            System.out.println("No se pudo extraer el nodo.");
        }
    }

    // Método para validar la entrada de opciones dentro de un rango
    static int leerOpcion(int min, int max) {
        int opcion;
        while (true) {
            System.out.print("Opción: ");
            if (scan.hasNextInt()) {
                opcion = scan.nextInt();
                scan.nextLine();
                if (opcion >= min && opcion <= max) {
                    return opcion;
                }
            } else {
                scan.next(); // Descartar entrada no válida
            }
            System.out.println("Entrada inválida. Ingrese un número entre " + min + " y " + max + ".");
        }
    }

    // Método para leer un entero con validación
    static int leerEntero(String mensaje) {
        int numero;
        while (true) {
            System.out.print(mensaje);
            if (scan.hasNextInt()) {
                numero = scan.nextInt();
                scan.nextLine();
                return numero;
            } else {
                scan.next(); // Descartar entrada inválida
                System.out.println("Entrada inválida. Ingrese un número entero.");
            }
        }
    }

    // Método para buscar un nodo en la lista
    static ListaEnlazada.Nodo buscarNodo(int valor) {
        ListaEnlazada.Nodo temp = lista.cabeza;
        while (temp != null) {
            if (temp.dato == valor) return temp;
            temp = temp.siguiente;
        }
        return null;
    }
}
