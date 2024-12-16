public class CalculadoraMultiHilo {

    // Clase interna para la operación de suma
    static class Suma implements Runnable {
        private int a, b;

        public Suma(int a, int b) {
            this.a = a;
            this.b = b;
        }

        @Override
        public void run() {
            int resultado = a + b;
            System.out.println("Resultado de la suma: " + resultado);
        }
    }

    // Clase interna para la operación de resta
    static class Resta implements Runnable {
        private int a, b;

        public Resta(int a, int b) {
            this.a = a;
            this.b = b;
        }

        @Override
        public void run() {
            int resultado = a - b;
            System.out.println("Resultado de la resta: " + resultado);
        }
    }

    // Clase principal para la ejecución de los hilos
    public static void main(String[] args) {
        // Crear hilos para las operaciones
        Thread hiloSuma = new Thread(new Suma(10, 5));
        Thread hiloResta = new Thread(new Resta(10, 5));

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