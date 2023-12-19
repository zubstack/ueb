Algoritmo CalcularAreaTriangulo
	// Declarar variables
	Definir baseStr, alturaStr Como Cadena
	Definir base, altura Como Entero
	Definir area Como Real
	// Solicitar al usuario que ingrese la base del triángulo
	Escribir 'Ingrese la longitud de la base del triángulo:'
	Leer baseStr
	// Solicitar al usuario que ingrese la altura del triángulo
	Escribir 'Ingrese la altura del triángulo:'
	Leer alturaStr
	// Convertir las cadenas ingresadas a enteros
	base <- convertirANumero(baseStr)
	altura <- convertirANumero(alturaStr)
	// Verificar si base y altura son números mayores a 0
	Si (base>0 Y altura>0) Entonces
		// Calcular el área del triángulo
		area <- (base*altura)/2
		// Mostrar el resultado
		Escribir 'El área del triángulo es: ', area
	SiNo
		// Mostrar mensaje de error si algún valor no es un número válido
		Escribir 'Error: Ingrese valores numéricos válidos para la base y la altura.'
	FinSi
FinAlgoritmo
