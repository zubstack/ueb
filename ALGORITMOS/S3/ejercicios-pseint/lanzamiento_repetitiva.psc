Algoritmo LanzamientoProyectil
	// Declarar variables
	Definir velocidadInicial, anguloLanzamiento, gravedad, tiempo, altura, distancia Como Real
	// Solicitar al usuario ingresar la velocidad inicial del proyectil
	Escribir 'Ingrese la velocidad inicial del proyectil (en metros por segundo):'
	Leer velocidadInicial
	// Solicitar al usuario ingresar el �ngulo de lanzamiento
	Escribir 'Ingrese el �ngulo de lanzamiento del proyectil (en grados):'
	Leer anguloLanzamiento
	// Inicializar constantes
	gravedad <- 9.8
	// Calcular componentes horizontal y vertical de la velocidad inicial
	Definir velocidadHorizontal, velocidadVertical Como Real // Aceleraci�n debido a la gravedad en la Tierra
	velocidadHorizontal <- velocidadInicial*Cos(anguloLanzamiento)
	velocidadVertical <- velocidadInicial*Sen(anguloLanzamiento)
	// Inicializar variables de tiempo, altura y distancia
	tiempo <- 0
	altura <- 0
	distancia <- 0
	// Simular el lanzamiento del proyectil en intervalos de tiempo
	Mientras altura>=0 Hacer
		// Calcular nueva posici�n del proyectil en el tiempo actual
		altura <- (velocidadVertical*tiempo)-(0.5*gravedad*tiempo^2)
		distancia <- velocidadHorizontal*tiempo
		// Mostrar posici�n actual del proyectil
		Escribir 'Tiempo:', tiempo, ' segundos - Altura:', altura, ' metros - Distancia:', distancia, ' metros'
		// Verificar si el proyectil ha alcanzado el suelo
		Si altura<0 Entonces
			Escribir 'El proyectil ha alcanzado el suelo.'
		FinSi
		// Verificar si el proyectil ha alcanzado una altura m�xima
		Si velocidadVertical<=0 Entonces
			Escribir 'El proyectil ha alcanzado la altura m�xima.'
		FinSi
		// Incrementar el tiempo en intervalos peque�os
		tiempo <- tiempo+0.1
	FinMientras
FinAlgoritmo
