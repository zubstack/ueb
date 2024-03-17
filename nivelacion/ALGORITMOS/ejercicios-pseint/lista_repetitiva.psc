Algoritmo ListaDeCompras
	// Declarar variables
	Definir listaCompras Como Cadena
	Definir articulo Como Cadena
	Definir repeticion Como Logico 
	Definir opcion Como Entero
	// Inicializar la lista de compras como vacía
	listaCompras <- ''
	// Inicializar indicador de repeticion
	repeticion <- Verdadero
	// Menú principal
	Mientras repeticion = Verdadero Hacer
		Escribir '1. Agregar artículo a la lista'
		Escribir '2. Mostrar lista de compras'
		Escribir '3. Salir'
		Escribir 'Seleccione una opción:'
		Leer opcion
		// Realizar acciones según la opción seleccionada
		Según opcion Hacer
			1:
				// Agregar un artículo a la lista
				Escribir 'Ingrese el nombre del artículo:'
				Leer articulo
				listaCompras <- listaCompras+articulo+', '
			2:
				// Mostrar la lista de compras
				Si listaCompras<>'' Entonces
					Escribir 'Lista de compras:'
					Escribir listaCompras
				SiNo
					Escribir 'La lista de compras está vacía.'
				FinSi
			3:
				// Salir del programa
				Escribir 'Saliendo del programa.'
				repeticion <- Falso
				
			Defecto:
				Escribir 'Opción no válida. Por favor, seleccione una opción válida.'
		FinSegún
	FinMientras
FinAlgoritmo
