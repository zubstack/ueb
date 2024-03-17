Algoritmo DecidirLlevarParaguas
	// Declarar variables
	Definir pronosticoLluvia Como Cadena
	// Solicitar al usuario ingresar el pronóstico del clima (lluvia o no)
	Escribir 'Ingrese el pronóstico del clima (lluvia o no):'
	Leer pronosticoLluvia
	// Evaluar si el pronóstico es lluvia
	Si pronosticoLluvia=='lluvia' Entonces
		Escribir 'Deberías llevar un paraguas.'
	SiNo
		// Si no hay lluvia, evaluar si el usuario está dispuesto a llevar un paraguas "por si acaso"
		Escribir '¿Estás dispuesto/a a llevar un paraguas por si acaso? (true/false):'
		Leer decisionParaguas
		// Evaluar la decisión del usuario
		Si decisionParaguas==true Entonces
			Escribir 'Es una buena idea llevar un paraguas por si acaso.'
		SiNo
			Escribir 'No es necesario llevar un paraguas en este momento.'
		FinSi
	FinSi
FinAlgoritmo
