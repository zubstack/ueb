class ListaEnlazada<T> {
    private class Nodo {
        T elemento;
        int prioridad;
        Nodo siguiente;

        public Nodo(T elemento, int prioridad) {
            this.elemento = elemento;
            this.prioridad = prioridad;
            this.siguiente = null;
        }
    }

    private Nodo cabeza;

    public ListaEnlazada() {
        this.cabeza = null;
    }

    // Agregar elemento en orden de prioridad
    public void agregarOrdenado(T elemento, int prioridad) {
        Nodo nuevo = new Nodo(elemento, prioridad);

        if (cabeza == null || cabeza.prioridad > prioridad) {
            nuevo.siguiente = cabeza;
            cabeza = nuevo;
        } else {
            Nodo actual = cabeza;
            while (actual.siguiente != null && actual.siguiente.prioridad <= prioridad) {
                actual = actual.siguiente;
            }
            nuevo.siguiente = actual.siguiente;
            actual.siguiente = nuevo;
        }
    }

    // Eliminar y devolver el primer elemento (mayor prioridad)
    public T eliminarPrimero() {
        if (cabeza == null) {
            return null;
        }
        T elemento = cabeza.elemento;
        cabeza = cabeza.siguiente;
        return elemento;
    }

    // Verificar si la lista está vacía
    public boolean estaVacia() {
        return cabeza == null;
    }

    // Imprimir elementos:
    public void imprimirElementos() {
        if (cabeza == null) {
            System.out.println("[!] La lista esta vacia");
            return;
        }
        Nodo actual = cabeza;
        while (actual != null) {
            System.out.println(actual.elemento);
            actual = actual.siguiente;
        }
    }
}
