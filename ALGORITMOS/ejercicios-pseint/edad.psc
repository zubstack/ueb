Algoritmo CalcularEdad
	// Declarar variables
	Definir ANODENACIMIENTO, ANOACTUAL, edad Como Entero
	// Solicitar al usuario que ingrese el a�o de nacimiento
	Escribir 'Ingrese el a�o de nacimiento:'
	Leer ANODENACIMIENTO
	// Solicitar el a�o actual
	Escribir 'Ingrese el a�o actual:'
	Leer ANOACTUAL
	// Calcular la edad restando el a�o de nacimiento al a�o actual
	edad <- ANOACTUAL-ANODENACIMIENTO
	// Mostrar la edad calculada
	Escribir 'La edad es:', edad, ' a�os'
FinAlgoritmo
