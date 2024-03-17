Algoritmo CalcularPerimetroRectangulo
	// Declarar variables
	Definir _longitud, ancho, perimetro Como Real
	// Solicitar al usuario ingresar la longitud del rectángulo
	Escribir 'Ingrese la longitud del rectángulo:'
	Leer _longitud
	// Verificar si la longitud es un número positivo
	Si _longitud<=0 Entonces
		Escribir 'Error: La longitud debe ser un número positivo.'
	SiNo
		// Solicitar al usuario ingresar el ancho del rectángulo
		Escribir 'Ingrese el ancho del rectángulo:'
		Leer ancho
		// Verificar si el ancho es un número positivo
		Si ancho<=0 Entonces
			Escribir 'Error: El ancho debe ser un número positivo.'
		SiNo
			// Calcular el perímetro del rectángulo
			perimetro <- 2*(_longitud+ancho)
			// Mostrar el resultado
			Escribir 'El perímetro del rectángulo es: ', perimetro
		FinSi
	FinSi
FinAlgoritmo
