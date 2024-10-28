public class Cliente {
    private String nombre;

    public Cliente(String nombre) {
        this.nombre = nombre;
    }

    public String getNombre() {
        return nombre;
    }

    // Método que el cliente usa para realizar una reserva
    public void reservarHabitacion(SistemaReservas sistema) {
        System.out.println(nombre + " solicita una reserva.");
        sistema.hacerReserva(this);
    }
}
