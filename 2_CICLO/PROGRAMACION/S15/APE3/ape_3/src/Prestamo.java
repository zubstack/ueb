import java.util.Date;

public class Prestamo {
    private Libro libro;
    private Usuario usuario;
    private Date fechaInicio;
    private Date fechaFin;
    private boolean estado; // true si está activo, false si ya se devolvió

    public Prestamo(Libro libro, Usuario usuario) {
        this.libro = libro;
        this.usuario = usuario;
        this.fechaInicio = new Date(); // fecha actual
        this.estado = true;
        libro.actualizarEstado(); // el libro pasa a estar prestado
    }

    public void finalizarPrestamo() {
        this.fechaFin = new Date(); // fecha de devolución
        this.estado = false;
        libro.actualizarEstado(); // el libro pasa a estar disponible
    }

    @Override
    public String toString() {
        return "Préstamo de " + libro.toString() + " a " + usuario.toString() +
                " desde " + fechaInicio + " hasta " + (estado ? "en curso" : fechaFin);
    }
}
