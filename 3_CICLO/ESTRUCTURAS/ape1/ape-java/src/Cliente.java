public class Cliente {
    private String nombre;
    private int prioridad;
    private int tiempoAtencion;

    public Cliente(String nombre, int prioridad, int tiempoAtencion) {
        this.nombre = nombre;
        this.prioridad = prioridad;
        this.tiempoAtencion = tiempoAtencion;
    }

    public int getTiempoAtencion() {
        return tiempoAtencion;
    }

    @Override
    public String toString() {
        return ":: Cliente: " + nombre + " | Prioridad: " + prioridad + " | Tiempo Atención: " + tiempoAtencion + " min";
    }
}