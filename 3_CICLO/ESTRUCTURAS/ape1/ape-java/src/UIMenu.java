import java.util.Scanner;

public class UIMenu {

    private Banco banco = new Banco();
    Scanner scanner;

    public UIMenu(Scanner scanner) {
        this.scanner = scanner;
    }

    public void showMenu() {
        System.out.println("BIENVENIDO AL SISTEMA DEL BANCO");
        int opcion = 0;

        while (opcion != 4) {
            System.out.println("""
                    Escoja una opcion:
                    (1). Agregar Clientes
                    (2). Ver clientes en espera
                    (3). Atender cliente
                    (4). Cerrar el dia
                    """);
            System.out.print("Opcion: ");
            opcion = scanner.nextInt();
            switch (opcion) {
                case 1:
                    agregarClienteMenu();
                    break;
                case 2:
                    banco.imprimirColaClientes();
                    break;
                case 3:
                    banco.atenderCliente();
                    break;
                case 4:
                    banco.cerrarDia();
                    break;
                default:
                    System.out.println("[!] Opcion invalida, intente de nuevo.");
                    break;
            }
        }
    }

    private void agregarClienteMenu() {
        String nombre;
        int prioridad = 0;
        int tiempoAtencion = 1;

        // Limpiar scanner
        scanner.nextLine();

        // Registar nombre
        System.out.print("Ingrese nombre del cliente: ");
        nombre = scanner.nextLine();

        // Registar prioridad
        while (prioridad < 1 || prioridad > 3) {
            System.out.print("Ingrese prioridad del cliente (1: alto, 2: medio, 3: bajo): ");
            prioridad = scanner.nextInt();
        }

        // Registar atencion
        while (tiempoAtencion < 5 || tiempoAtencion > 30 || tiempoAtencion % 5 != 0) {
            System.out.print("Ingrese tiempo de atencion (max: 30, min: 5, multiplos de 5): ");
            tiempoAtencion = scanner.nextInt();
        }

        banco.agregarCliente(nombre, prioridad, tiempoAtencion);
    }
}
