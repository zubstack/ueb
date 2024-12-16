
public class Main {
    public static void main(String[] args) {
        // Crear hilos para las operaciones
        Thread hiloSuma = new Thread(new CalculadoraMultiHilo.Suma(10, 5));
        Thread hiloResta = new Thread(new CalculadoraMultiHilo.Resta(10, 5));

        // Iniciar los hilos
        hiloSuma.start();
        hiloResta.start();

        try {
            // Esperar que los hilos terminen su ejecución
            hiloSuma.join();
            hiloResta.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        System.out.println("Cálculos completados.");
    }
}
