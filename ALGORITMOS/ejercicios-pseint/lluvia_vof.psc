Algoritmo DecidirLlevarParaguas
	// Declarar variables
	Definir pronosticoLluvia Como Cadena
	// Solicitar al usuario ingresar el pron�stico del clima (lluvia o no)
	Escribir 'Ingrese el pron�stico del clima (lluvia o no):'
	Leer pronosticoLluvia
	// Evaluar si el pron�stico es lluvia
	Si pronosticoLluvia=='lluvia' Entonces
		Escribir 'Deber�as llevar un paraguas.'
	SiNo
		// Si no hay lluvia, evaluar si el usuario est� dispuesto a llevar un paraguas "por si acaso"
		Escribir '�Est�s dispuesto/a a llevar un paraguas por si acaso? (true/false):'
		Leer decisionParaguas
		// Evaluar la decisi�n del usuario
		Si decisionParaguas==true Entonces
			Escribir 'Es una buena idea llevar un paraguas por si acaso.'
		SiNo
			Escribir 'No es necesario llevar un paraguas en este momento.'
		FinSi
	FinSi
FinAlgoritmo
