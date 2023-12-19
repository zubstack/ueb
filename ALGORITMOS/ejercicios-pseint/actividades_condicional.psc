Algoritmo SeleccionarActividadDiariaConCondicionales
	// Declarar variables
	Definir diaDeLaSemana Como Cadena
	Definir actividad Como Cadena
	// Solicitar al usuario ingresar el día de la semana
	Escribir 'Ingrese el día de la semana (lunes, martes, miércoles, jueves, viernes, sábado, domingo):'
	Leer diaDeLaSemana
	// Utilizar condicionales para seleccionar una actividad
	Si diaDeLaSemana='lunes' O diaDeLaSemana='martes' O diaDeLaSemana='miércoles' O diaDeLaSemana='jueves' O diaDeLaSemana='viernes' Entonces
		actividad <- 'Trabajar o estudiar durante el día.'
	SiNo
		Si diaDeLaSemana='sábado' Entonces
			actividad <- 'Disfrutar del fin de semana: salir con amigos, hacer deporte, etc.'
		SiNo
			Si diaDeLaSemana='domingo' Entonces
				actividad <- 'Relajarse y prepararse para la próxima semana.'
			SiNo
				actividad <- 'Día no reconocido. Por favor, ingresa un día válido.'
			FinSi
		FinSi
	FinSi
	// Mostrar la actividad seleccionada
	Escribir 'Para el día ', diaDeLaSemana, ', la recomendación es:', actividad
FinAlgoritmo
