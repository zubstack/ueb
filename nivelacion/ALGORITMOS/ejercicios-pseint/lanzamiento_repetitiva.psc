Algoritmo LanzamientoProyectil
	// Declarar variables
	Definir velocidadInicial, anguloLanzamiento, gravedad, tiempo, altura, distancia Como Real
	// Solicitar al usuario ingresar la velocidad inicial del proyectil
	Escribir 'Ingrese la velocidad inicial del proyectil (en metros por segundo):'
	Leer velocidadInicial
	// Solicitar al usuario ingresar el ángulo de lanzamiento
	Escribir 'Ingrese el ángulo de lanzamiento del proyectil (en grados):'
	Leer anguloLanzamiento
	// Inicializar constantes
	gravedad <- 9.8
	// Calcular componentes horizontal y vertical de la velocidad inicial
	Definir velocidadHorizontal, velocidadVertical Como Real // Aceleración debido a la gravedad en la Tierra
	velocidadHorizontal <- velocidadInicial*Cos(anguloLanzamiento)
	velocidadVertical <- velocidadInicial*Sen(anguloLanzamiento)
	// Inicializar variables de tiempo, altura y distancia
	tiempo <- 0
	altura <- 0
	distancia <- 0
	// Simular el lanzamiento del proyectil en intervalos de tiempo
	Mientras altura>=0 Hacer
		// Calcular nueva posición del proyectil en el tiempo actual
		altura <- (velocidadVertical*tiempo)-(0.5*gravedad*tiempo^2)
		distancia <- velocidadHorizontal*tiempo
		// Mostrar posición actual del proyectil
		Escribir 'Tiempo:', tiempo, ' segundos - Altura:', altura, ' metros - Distancia:', distancia, ' metros'
		// Verificar si el proyectil ha alcanzado el suelo
		Si altura<0 Entonces
			Escribir 'El proyectil ha alcanzado el suelo.'
		FinSi
		// Verificar si el proyectil ha alcanzado una altura máxima
		Si velocidadVertical<=0 Entonces
			Escribir 'El proyectil ha alcanzado la altura máxima.'
		FinSi
		// Incrementar el tiempo en intervalos pequeños
		tiempo <- tiempo+0.1
	FinMientras
FinAlgoritmo
