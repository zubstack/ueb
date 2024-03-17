Algoritmo ListaDeCompras
	// Declarar variables
	Definir listaCompras Como Cadena
	Definir articulo Como Cadena
	Definir repeticion Como Logico 
	Definir opcion Como Entero
	// Inicializar la lista de compras como vac�a
	listaCompras <- ''
	// Inicializar indicador de repeticion
	repeticion <- Verdadero
	// Men� principal
	Mientras repeticion = Verdadero Hacer
		Escribir '1. Agregar art�culo a la lista'
		Escribir '2. Mostrar lista de compras'
		Escribir '3. Salir'
		Escribir 'Seleccione una opci�n:'
		Leer opcion
		// Realizar acciones seg�n la opci�n seleccionada
		Seg�n opcion Hacer
			1:
				// Agregar un art�culo a la lista
				Escribir 'Ingrese el nombre del art�culo:'
				Leer articulo
				listaCompras <- listaCompras+articulo+', '
			2:
				// Mostrar la lista de compras
				Si listaCompras<>'' Entonces
					Escribir 'Lista de compras:'
					Escribir listaCompras
				SiNo
					Escribir 'La lista de compras est� vac�a.'
				FinSi
			3:
				// Salir del programa
				Escribir 'Saliendo del programa.'
				repeticion <- Falso
				
			Defecto:
				Escribir 'Opci�n no v�lida. Por favor, seleccione una opci�n v�lida.'
		FinSeg�n
	FinMientras
FinAlgoritmo
