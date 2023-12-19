Algoritmo DecidirRopaDiaria
    // Declarar variables
    Definir temperatura Como Real
    Definir estacionDelAnio Como Caracter
    Definir estaLloviendo Como Logico

    // Solicitar al usuario ingresar la temperatura
    Escribir "Ingrese la temperatura actual (en grados Celsius):"
    Leer temperatura

    // Solicitar al usuario ingresar la estaci�n del a�o
    Escribir "Ingrese la estaci�n del a�o (verano, invierno):"
    Leer estacionDelAnio

    // Solicitar al usuario ingresar si est� lloviendo
    Escribir "�Est� lloviendo? (verdadero/falso):"
    Leer estaLloviendo

    // Evaluar las condiciones basadas en la estaci�n del a�o
    Segun estacionDelAnio Hacer
        Caso "verano":
            Si temperatura >= 25 Entonces
                Escribir "Hace calor en verano. Puedes vestir ropa ligera."
            Sino
                Escribir "Aunque es verano, hace fresco. Considera llevar algo ligero."
            FinSi
	
        Caso "invierno":
            Si temperatura < 5 Entonces
                Escribir "Es invierno y hace fr�o. Usa abrigo, bufanda y guantes."
            Sino
                Escribir "En invierno, es recomendable vestir capas para mantenerte abrigado."
            FinSi
       
	De Otro Modo:
		
            Escribir "Estaci�n del a�o no reconocida. Por favor, ingresa una estaci�n v�lida."
    FinSegun

    // Evaluar si est� lloviendo
    Si estaLloviendo Entonces
        Escribir "Tambi�n es recomendable llevar un paraguas o una impermeable."
    FinSi
FinAlgoritmo
