public class Libro {
    private String titulo;
    private String autor;
    private String ISBN;
    private int anoPublicacion;
    private boolean estado; // true si está disponible, false si está prestado

    public Libro(String titulo, String autor, String ISBN, int anoPublicacion) {
        this.titulo = titulo;
        this.autor = autor;
        this.ISBN = ISBN;
        this.anoPublicacion = anoPublicacion;
        this.estado = true; // por defecto está disponible
    }

    public boolean consultarDisponibilidad() {
        return estado;
    }

    public void actualizarEstado() {
        this.estado = !estado;
    }

    @Override
    public String toString() {
        return "Libro: " + titulo + ", Autor: " + autor + ", ISBN: " + ISBN;
    }
}
