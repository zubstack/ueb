Algoritmo CajeroAutomatico
    Definir precioArticulo, cantidadEntregada, vuelto, billetes100, billetes50, billetes25, billetes5, billetes1 Como Real

    // Entrada de datos
    Escribir "Ingrese el precio del artículo: "
    Leer precioArticulo
    Escribir "Ingrese la cantidad entregada por el cliente: "
    Leer cantidadEntregada

    //Verificacion de datos
    Si precioArticulo > cantidadEntregada Entonces
        Escribir "Error de lógica: el valor del artículo no puede ser mayor que la cantidad entregada por el cliente"
    FinSi
    Sino
        // Cálculo del vuelto
        vuelto <- cantidadEntregada - precioArticulo
        Escribir "La cantidad de vuelto total es: ", vuelto
        
        // Cálculo de billetes
        billetes100 <- vuelto / 100
        vuelto <- vuelto MOD 100
        
        billetes50 <- vuelto / 50
        vuelto <- vuelto MOD 50
        
        billetes25 <- vuelto / 25
        vuelto <- vuelto MOD 25

        billetes5 <- vuelto / 5
        vuelto <- vuelto MOD 5
        
        billetes1 <- vuelto

        // Salida de resultados
        Escribir "El vuelto a entregar es:"
        Si billetes100 > 0 Entonces
            Escribir trunc(billetes100) , " billetes de 100 dólares"
        FinSi
        Si billetes50 > 0 Entonces
            Escribir trunc(billetes50), " billetes de 50 dólares"
        FinSi
        Si billetes25 > 0 Entonces
            Escribir trunc(billetes25), " billetes de 25 dólares"
        FinSi
        Si billetes5 > 0 Entonces
            Escribir trunc(billetes5), " billetes de 5 dólares"
        FinSi
        Si billetes1 > 0 Entonces
            Escribir trunc(billetes1), " billetes de 1 dólar"
        FinSi
    FinSino
FinAlgoritmo
