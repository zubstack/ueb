Algoritmo SeleccionarActividadDiariaConCondicionales
	// Declarar variables
	Definir diaDeLaSemana Como Cadena
	Definir actividad Como Cadena
	// Solicitar al usuario ingresar el d�a de la semana
	Escribir 'Ingrese el d�a de la semana (lunes, martes, mi�rcoles, jueves, viernes, s�bado, domingo):'
	Leer diaDeLaSemana
	// Utilizar condicionales para seleccionar una actividad
	Si diaDeLaSemana='lunes' O diaDeLaSemana='martes' O diaDeLaSemana='mi�rcoles' O diaDeLaSemana='jueves' O diaDeLaSemana='viernes' Entonces
		actividad <- 'Trabajar o estudiar durante el d�a.'
	SiNo
		Si diaDeLaSemana='s�bado' Entonces
			actividad <- 'Disfrutar del fin de semana: salir con amigos, hacer deporte, etc.'
		SiNo
			Si diaDeLaSemana='domingo' Entonces
				actividad <- 'Relajarse y prepararse para la pr�xima semana.'
			SiNo
				actividad <- 'D�a no reconocido. Por favor, ingresa un d�a v�lido.'
			FinSi
		FinSi
	FinSi
	// Mostrar la actividad seleccionada
	Escribir 'Para el d�a ', diaDeLaSemana, ', la recomendaci�n es:', actividad
FinAlgoritmo
