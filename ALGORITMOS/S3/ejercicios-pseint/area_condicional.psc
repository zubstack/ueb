Algoritmo CalcularAreaTriangulo
	// Declarar variables
	Definir baseStr, alturaStr Como Cadena
	Definir base, altura Como Entero
	Definir area Como Real
	// Solicitar al usuario que ingrese la base del tri�ngulo
	Escribir 'Ingrese la longitud de la base del tri�ngulo:'
	Leer baseStr
	// Solicitar al usuario que ingrese la altura del tri�ngulo
	Escribir 'Ingrese la altura del tri�ngulo:'
	Leer alturaStr
	// Convertir las cadenas ingresadas a enteros
	base <- convertirANumero(baseStr)
	altura <- convertirANumero(alturaStr)
	// Verificar si base y altura son n�meros mayores a 0
	Si (base>0 Y altura>0) Entonces
		// Calcular el �rea del tri�ngulo
		area <- (base*altura)/2
		// Mostrar el resultado
		Escribir 'El �rea del tri�ngulo es: ', area
	SiNo
		// Mostrar mensaje de error si alg�n valor no es un n�mero v�lido
		Escribir 'Error: Ingrese valores num�ricos v�lidos para la base y la altura.'
	FinSi
FinAlgoritmo
