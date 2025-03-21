class ColaPrioridad<T> {
    private ListaEnlazada<T> lista;

    public ColaPrioridad() {
        this.lista = new ListaEnlazada<>();
    }

    // Agregar un elemento con prioridad
    public void agregar(T elemento, int prioridad) {
        lista.agregarOrdenado(elemento, prioridad);
    }

    // Eliminar y devolver el elemento de mayor prioridad
    public T eliminar() {
        return lista.eliminarPrimero();
    }

    // Verificar si la cola está vacía
    public boolean estaVacia() {
        return lista.estaVacia();
    }

    // Imprimir elementos en la cola:
    public void imprimir(){
        lista.imprimirElementos();
    }

}
