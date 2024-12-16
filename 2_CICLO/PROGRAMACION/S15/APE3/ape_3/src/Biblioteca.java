import java.util.ArrayList;

public class Biblioteca {
    private String nombre;
    private String direccion;
    private ArrayList<Libro> libros;
    private ArrayList<Usuario> usuarios;
    ArrayList<Prestamo> prestamos;

    public Biblioteca(String nombre, String direccion) {
        this.nombre = nombre;
        this.direccion = direccion;
        this.libros = new ArrayList<>();
        this.usuarios = new ArrayList<>();
        this.prestamos = new ArrayList<>();
    }

    public void agregarLibro(Libro libro) {
        libros.add(libro);
    }

    public void agregarUsuario(Usuario usuario) {
        usuarios.add(usuario);
    }

    public Libro consultarLibro(String ISBN) {
        for (Libro libro : libros) {
            if (libro.toString().contains(ISBN)) {
                return libro;
            }
        }
        return null;
    }

    public Usuario consultarUsuario(String idUsuario) {
        for (Usuario usuario : usuarios) {
            if (usuario.getIdUsuario().equals(idUsuario)) {
                return usuario;
            }
        }
        return null;
    }

    public void realizarPrestamo(Libro libro, Usuario usuario) {
        if (libro.consultarDisponibilidad()) {
            Prestamo prestamo = new Prestamo(libro, usuario);
            prestamos.add(prestamo);
            System.out.println("Préstamo realizado: " + prestamo);
        } else {
            System.out.println("El libro no está disponible para préstamo.");
        }
    }

    public void devolverLibro(Prestamo prestamo) {
        prestamo.finalizarPrestamo();
        System.out.println("Préstamo finalizado: " + prestamo);
    }
}
