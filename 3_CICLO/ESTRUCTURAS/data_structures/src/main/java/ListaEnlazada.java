class ListaEnlazada {
    public Nodo cabeza;

    // Clase interna para los nodos de la lista
    static class Nodo {
        int dato;
        Nodo siguiente;

        Nodo(int dato) {
            this.dato = dato;
            this.siguiente = null;
        }
    }

    // Inserta un nodo al inicio de la lista
    public void insertarCabeza(int valor) {
        Nodo nuevoNodo = new Nodo(valor);
        nuevoNodo.siguiente = cabeza;
        cabeza = nuevoNodo;
        System.out.println("Nodo " + valor + " insertado al inicio.");
    }

    // Inserta un nodo al final de la lista
    public void insertarCola(int valor) {
        Nodo nuevoNodo = new Nodo(valor);
        if (cabeza == null) {
            cabeza = nuevoNodo;
        } else {
            Nodo temp = cabeza;
            while (temp.siguiente != null) {
                temp = temp.siguiente;
            }
            temp.siguiente = nuevoNodo;
        }
        System.out.println("Nodo " + valor + " insertado al final.");
    }

    // Inserta un nodo después de un nodo con un valor específico
    public void insertarPorValor(int valorReferencia, int nuevoValor) {
        Nodo temp = cabeza;
        while (temp != null && temp.dato != valorReferencia) {
            temp = temp.siguiente;
        }
        if (temp == null) {
            System.out.println("Valor " + valorReferencia + " no encontrado en la lista.");
            return;
        }
        Nodo nuevoNodo = new Nodo(nuevoValor);
        nuevoNodo.siguiente = temp.siguiente;
        temp.siguiente = nuevoNodo;
        System.out.println("Nodo " + nuevoValor + " insertado después del nodo con valor " + valorReferencia + ".");
    }

    // Inserta un nodo después de un nodo dado como referencia
    public void insertarPorReferencia(Nodo referencia, int nuevoValor) {
        if (referencia == null) {
            System.out.println("Referencia nula. No se puede insertar.");
            return;
        }
        Nodo nuevoNodo = new Nodo(nuevoValor);
        nuevoNodo.siguiente = referencia.siguiente;
        referencia.siguiente = nuevoNodo;
        System.out.println("Nodo " + nuevoValor + " insertado después de la referencia dada.");
    }

    // Extrae y devuelve el nodo de la cabeza
    public Nodo extraerCabeza() {
        if (cabeza == null) {
            System.out.println("La lista está vacía.");
            return null;
        }
        Nodo temp = cabeza;
        cabeza = cabeza.siguiente;
        temp.siguiente = null; // Evitar referencias innecesarias
        return temp;
    }

    // Extrae y devuelve el nodo de la cola
    public Nodo extraerCola() {
        if (cabeza == null) {
            System.out.println("La lista está vacía.");
            return null;
        }
        if (cabeza.siguiente == null) {
            Nodo nodoExtraido = cabeza;
            cabeza = null;
            return nodoExtraido;
        }

        Nodo temp = cabeza;
        Nodo previo = null;
        while (temp.siguiente != null) {
            previo = temp;
            temp = temp.siguiente;
        }

        if (previo != null) {
            previo.siguiente = null;
        }
        return temp;
    }

    // Extrae y devuelve un nodo con un valor específico
    public Nodo extraerPorValor(int valor) {
        if (cabeza == null) {
            System.out.println("La lista está vacía.");
            return null;
        }

        if (cabeza.dato == valor) {
            return extraerCabeza();
        }

        Nodo temp = cabeza;
        while (temp.siguiente != null && temp.siguiente.dato != valor) {
            temp = temp.siguiente;
        }

        if (temp.siguiente == null) {
            System.out.println("Nodo con valor " + valor + " no encontrado.");
            return null;
        }

        Nodo nodoExtraido = temp.siguiente;
        temp.siguiente = nodoExtraido.siguiente;
        nodoExtraido.siguiente = null;
        return nodoExtraido;
    }

    // Extrae un nodo por referencia
    public Nodo extraerPorReferencia(Nodo referencia) {
        if (cabeza == null || referencia == null) {
            System.out.println("No se puede extraer el nodo. Lista vacía o referencia nula.");
            return null;
        }

        if (cabeza == referencia) {
            return extraerCabeza();
        }

        Nodo temp = cabeza;
        while (temp.siguiente != null && temp.siguiente != referencia) {
            temp = temp.siguiente;
        }

        if (temp.siguiente == null) {
            System.out.println("El nodo de referencia no se encontró en la lista.");
            return null;
        }

        temp.siguiente = referencia.siguiente;
        referencia.siguiente = null;
        return referencia;
    }

    // Muestra la lista en formato: "A -> B -> C -> null"
    public void mostrar() {
        if (cabeza == null) {
            System.out.println("La lista está vacía.");
            return;
        }
        Nodo temp = cabeza;
        while (temp != null) {
            System.out.print(temp.dato + " -> ");
            temp = temp.siguiente;
        }
        System.out.println("null");
    }

    // Retorna la longitud de la lista
    public int obtenerLongitud() {
        int contador = 0;
        Nodo temp = cabeza;
        while (temp != null) {
            contador++;
            temp = temp.siguiente;
        }
        return contador;
    }

    // Vacía completamente la lista
    public void limpiar() {
        cabeza = null;
    }
}
