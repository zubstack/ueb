public class SistemaReservas {
    private BaseDeDatos baseDeDatos;

    public SistemaReservas(BaseDeDatos baseDeDatos) {
        this.baseDeDatos = baseDeDatos;
    }

    // Método que realiza la reserva
    public void hacerReserva(Cliente cliente) {
        System.out.println("Consultando disponibilidad...");
        boolean disponible = baseDeDatos.verificarDisponibilidad();
        if (disponible) {
            confirmarReserva(cliente);
        } else {
            System.out.println("No hay disponibilidad para la reserva.");
        }
    }

    // Método que confirma la reserva
    private void confirmarReserva(Cliente cliente) {
        System.out.println("Reserva confirmada para " + cliente.getNombre() + ".");
    }
}
