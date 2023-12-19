Algoritmo CalcularPerimetroRectangulo
	// Declarar variables
	Definir _longitud, ancho, perimetro Como Real
	// Solicitar al usuario ingresar la longitud del rect�ngulo
	Escribir 'Ingrese la longitud del rect�ngulo:'
	Leer _longitud
	// Verificar si la longitud es un n�mero positivo
	Si _longitud<=0 Entonces
		Escribir 'Error: La longitud debe ser un n�mero positivo.'
	SiNo
		// Solicitar al usuario ingresar el ancho del rect�ngulo
		Escribir 'Ingrese el ancho del rect�ngulo:'
		Leer ancho
		// Verificar si el ancho es un n�mero positivo
		Si ancho<=0 Entonces
			Escribir 'Error: El ancho debe ser un n�mero positivo.'
		SiNo
			// Calcular el per�metro del rect�ngulo
			perimetro <- 2*(_longitud+ancho)
			// Mostrar el resultado
			Escribir 'El per�metro del rect�ngulo es: ', perimetro
		FinSi
	FinSi
FinAlgoritmo
