Algoritmo CajeroAutomatico
    Definir precioArticulo, cantidadEntregada, vuelto, billetes100, billetes50, billetes25, billetes5, billetes1 Como Real

    // Entrada de datos
    Escribir "Ingrese el precio del art�culo: "
    Leer precioArticulo
    Escribir "Ingrese la cantidad entregada por el cliente: "
    Leer cantidadEntregada

    // C�lculo del vuelto
    vuelto <- cantidadEntregada - precioArticulo
	Escribir vuelto
	
    // C�lculo de billetes
    billetes100 <- vuelto / 100
    vuelto <- vuelto MOD 100
	Escribir vuelto
	
    billetes50 <- vuelto / 50
    vuelto <- vuelto MOD 50
	Escribir vuelto
	
    billetes25 <- vuelto / 25
    vuelto <- vuelto MOD 25
	Escribir vuelto

    billetes5 <- vuelto / 5
    vuelto <- vuelto MOD 5
	Escribir vuelto
	
    billetes1 <- vuelto

    // Salida de resultados
    Escribir "El vuelto a entregar es:"
    Si billetes100 > 0 Entonces
        Escribir billetes100, " billetes de 100 d�lares"
    FinSi
    Si billetes50 > 0 Entonces
        Escribir billetes50, " billetes de 50 d�lares"
    FinSi
    Si billetes25 > 0 Entonces
        Escribir billetes25, " billetes de 25 d�lares"
    FinSi
    Si billetes5 > 0 Entonces
        Escribir billetes5, " billetes de 5 d�lares"
    FinSi
    Si billetes1 > 0 Entonces
        Escribir billetes1, " billetes de 1 d�lar"
    FinSi
FinAlgoritmo
