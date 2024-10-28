import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Inventario inventario = new Inventario();
        Scanner scanner = new Scanner(System.in);

        // Ejemplo de ingreso de productos
        inventario.ingresarProducto("001", "Producto A", 10, 25.5);
        inventario.ingresarProducto("002", "Producto B", 5, 15.0);

        // Consultar un producto
        System.out.print("Ingrese el codigo del producto a consultar: ");
        String codigoConsulta = scanner.nextLine();
        inventario.consultarProducto(codigoConsulta);

        scanner.close();
    }
}

class Producto {
    private String codigo;
    private String descripcion;
    private int cantidad;
    private double precio;

    public Producto(String codigo, String descripcion, int cantidad, double precio) {
        this.codigo = codigo;
        this.descripcion = descripcion;
        setCantidad(cantidad);
        setPrecio(precio);
    }

    public String getCodigo() {
        return codigo;
    }

    public String getDescripcion() {
        return descripcion;
    }

    public int getCantidad() {
        return cantidad;
    }

    public double getPrecio() {
        return precio;
    }

    public void setCantidad(int cantidad) {
        if (cantidad < 0) {
            throw new IllegalArgumentException("La cantidad no puede ser negativa.");
        }
        this.cantidad = cantidad;
    }

    public void setPrecio(double precio) {
        if (precio < 0) {
            throw new IllegalArgumentException("El precio no puede ser negativo.");
        }
        this.precio = precio;
    }
}

class Inventario {
    private Producto[] productos;
    private int contador;

    public Inventario() {
        productos = new Producto[30];
        contador = 0;
    }

    public void ingresarProducto(String codigo, String descripcion, int cantidad, double precio) {
 
        Producto nuevoProducto = new Producto(codigo, descripcion, cantidad, precio);
        productos[contador] = nuevoProducto;
        contador++;
        System.out.println("Producto ingresado: " + descripcion);
    }

    public void consultarProducto(String codigo) {
        int indice = buscarProducto(codigo);
        if (indice != -1) {
            Producto producto = productos[indice];
            System.out.println("Codigo: " + producto.getCodigo());
            System.out.println("Descripcion: " + producto.getDescripcion());
            System.out.println("Cantidad: " + producto.getCantidad());
            System.out.println("Precio: $" + producto.getPrecio());
        } else {
            System.out.println("Producto no encontrado.");
        }
    }

    private int buscarProducto(String codigo) {
        for (int i = 0; i < contador; i++) {
            if (productos[i].getCodigo().equals(codigo)) {
                return i;
            }
        }
        return -1; // No encontrado
    }

    
}
