public class Main {
    public static void main(String[] args) {

        BaseDeDatos baseDeDatos = new BaseDeDatos(true);

        SistemaReservas sistemaReservas = new SistemaReservas(baseDeDatos);

        Cliente cliente1 = new Cliente("Juan Pérez");

        cliente1.reservarHabitacion(sistemaReservas);
    }
}
