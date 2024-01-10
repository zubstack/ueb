Algoritmo CalcularEdad
	// Declarar variables
	Definir ANODENACIMIENTO, ANOACTUAL, edad Como Entero
	// Solicitar al usuario que ingrese el año de nacimiento
	Escribir 'Ingrese el año de nacimiento:'
	Leer ANODENACIMIENTO
	// Solicitar el año actual
	Escribir 'Ingrese el año actual:'
	Leer ANOACTUAL
	// Calcular la edad restando el año de nacimiento al año actual
	edad <- ANOACTUAL-ANODENACIMIENTO
	// Mostrar la edad calculada
	Escribir 'La edad es:', edad, ' años'
FinAlgoritmo
