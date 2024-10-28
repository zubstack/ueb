public class BaseDeDatos {
    private boolean disponibilidad;

    public BaseDeDatos(boolean disponibilidad) {
        this.disponibilidad = disponibilidad;
    }

    // Método que verifica la disponibilidad
    public boolean verificarDisponibilidad() {
        System.out.println("Verificando disponibilidad en la base de datos...");
        return disponibilidad;
    }
}
