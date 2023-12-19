Algoritmo CajeroAutomatico
	Definir precio, cantidadEntregada, vuelto Como Real
	// Definir las denominaciones de billetes en un arreglo
	Definir Denominaciones Como Entero
	Dimensionar Denominaciones(5)
	Denominaciones[1] <- 100
	Denominaciones[2] <- 50
	Denominaciones[3] <- 25
	Denominaciones[4] <- 5
	Denominaciones[5] <- 1
	Escribir 'Ingrese el precio del art�culo: '
	Leer precio
	Escribir 'Ingrese la cantidad entregada por el cliente: '
	Leer cantidadEntregada
	// Verificar si el precio del art�culo es mayor que la cantidad entregada
	Si precio>cantidadEntregada Entonces
		Escribir 'Error de l�gica: el valor del art�culo no puede ser mayor a la cantidad entregada por el cliente.'
		// Continuar con el c�lculo del vuelto solo si la verificaci�n es correcta
	SiNo
		vuelto <- cantidadEntregada-precio
		// Bucle para calcular la cantidad de cada tipo de billete
		Para i<-1 Hasta 5 Hacer
			// Calcular la cantidad de billetes de la denominaci�n actual
			billetes <- vuelto/Denominaciones[i]
			vuelto <- vuelto MOD Denominaciones[i]
			// Mostrar la cantidad de billetes si es mayor que cero
			Si billetes>0 Entonces
				Escribir trunc(billetes), ' de ', Denominaciones[i], ' d�lares'
			FinSi
		FinPara
	FinSi
FinAlgoritmo
