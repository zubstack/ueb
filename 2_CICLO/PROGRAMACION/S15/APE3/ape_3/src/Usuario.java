public class Usuario {
    private String nombre;
    private String idUsuario;
    private String direccion;
    private String telefono;
    private String email;

    public Usuario(String nombre, String idUsuario, String direccion, String telefono, String email) {
        this.nombre = nombre;
        this.idUsuario = idUsuario;
        this.direccion = direccion;
        this.telefono = telefono;
        this.email = email;
    }

    public String getIdUsuario() {
        return idUsuario;
    }

    @Override
    public String toString() {
        return "Usuario: " + nombre + ", ID: " + idUsuario;
    }
}
