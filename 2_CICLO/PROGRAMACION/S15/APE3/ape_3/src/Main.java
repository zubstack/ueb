public class Main {
    public static void main(String[] args) {
        // Crear biblioteca
        Biblioteca biblioteca = new Biblioteca("Biblioteca Central", "Calle Ficticia 123");

        // Crear usuarios
        Usuario usuario1 = new Usuario("Juan Pérez", "U001", "Calle A", "123456789", "juan@email.com");
        Usuario usuario2 = new Usuario("Ana López", "U002", "Calle B", "987654321", "ana@email.com");

        // Agregar usuarios a la biblioteca
        biblioteca.agregarUsuario(usuario1);
        biblioteca.agregarUsuario(usuario2);

        // Crear libros
        Libro libro1 = new Libro("El Quijote", "Miguel de Cervantes", "12345", 1605);
        Libro libro2 = new Libro("Cien años de soledad", "Gabriel García Márquez", "67890", 1967);

        // Agregar libros a la biblioteca
        biblioteca.agregarLibro(libro1);
        biblioteca.agregarLibro(libro2);

        // Realizar un préstamo
        biblioteca.realizarPrestamo(libro1, usuario1);

        // Intentar realizar un préstamo del mismo libro
        biblioteca.realizarPrestamo(libro1, usuario2);

        // Crear un préstamo de libro2
        biblioteca.realizarPrestamo(libro2, usuario2);

        // Devolver libro1
        Prestamo prestamo1 = biblioteca.prestamos.get(0); // Suponiendo que es el primer préstamo
        biblioteca.devolverLibro(prestamo1);
    }
}
