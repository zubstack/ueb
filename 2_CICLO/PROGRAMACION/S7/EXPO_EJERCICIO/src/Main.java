import java.util.Scanner;

public class Main {

    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        String nombreCliente;
        // Configurar base de datos
        BaseDeDatos baseDeDatos = new BaseDeDatos(true);

        //Configurar sistema de reservas
        SistemaReservas sistemaReservas = new SistemaReservas(baseDeDatos);

        // Inicia interaccion con el usuario
        System.out.println("Bienvenido al sistema\n Ingrese su nombre y apellido para solicitar reservacion: ");
        nombreCliente = scan.nextLine();

        //Instanciar un 'Cliente' y hacer resevacion
        Cliente cliente1 = new Cliente(nombreCliente);
        cliente1.reservarHabitacion(sistemaReservas);
    }
}
