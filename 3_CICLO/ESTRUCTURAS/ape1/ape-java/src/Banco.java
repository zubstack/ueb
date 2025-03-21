public class Banco {
    private ColaPrioridad<Cliente> cola;
    private int tiempoTotalAtencion = 0;

    public Banco() {
        this.cola = new ColaPrioridad<>();
    }

    // Agregar cliente a la cola
    public void agregarCliente(String nombre, int prioridad, int tiempoAtencion) {
        Cliente nuevoCliente = new Cliente(nombre, prioridad, tiempoAtencion);
        cola.agregar(nuevoCliente, prioridad);
        System.out.println(":: Cliente agregado: " + nuevoCliente);
    }

    // Atender al siguiente cliente
    public void atenderCliente() {
        Cliente atendido = cola.eliminar();
        if (atendido != null) {
            tiempoTotalAtencion += atendido.getTiempoAtencion();
            System.out.println(":: Atendiendo a: " + atendido);
        } else {
            System.out.println("[!] No hay clientes en espera.");
        }
    }

    // Cerrar el día
    public void cerrarDia() {
        System.out.println("[Cierre del día]: Atendiendo a todos los clientes restantes...");
        while (!cola.estaVacia()) {
            atenderCliente();
        }
        System.out.println(":: Tiempo total de atención: " + tiempoTotalAtencion + " min");
    }

    // Imprimir cola de Clientes:
    public void imprimirColaClientes() {
        cola.imprimir();
    }
}
