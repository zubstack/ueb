Algoritmo DecidirRopaDiaria
    // Declarar variables
    Definir temperatura Como Real
    Definir estacionDelAnio Como Caracter
    Definir estaLloviendo Como Logico

    // Solicitar al usuario ingresar la temperatura
    Escribir "Ingrese la temperatura actual (en grados Celsius):"
    Leer temperatura

    // Solicitar al usuario ingresar la estación del año
    Escribir "Ingrese la estación del año (verano, invierno):"
    Leer estacionDelAnio

    // Solicitar al usuario ingresar si está lloviendo
    Escribir "¿Está lloviendo? (verdadero/falso):"
    Leer estaLloviendo

    // Evaluar las condiciones basadas en la estación del año
    Segun estacionDelAnio Hacer
        Caso "verano":
            Si temperatura >= 25 Entonces
                Escribir "Hace calor en verano. Puedes vestir ropa ligera."
            Sino
                Escribir "Aunque es verano, hace fresco. Considera llevar algo ligero."
            FinSi
	
        Caso "invierno":
            Si temperatura < 5 Entonces
                Escribir "Es invierno y hace frío. Usa abrigo, bufanda y guantes."
            Sino
                Escribir "En invierno, es recomendable vestir capas para mantenerte abrigado."
            FinSi
       
	De Otro Modo:
		
            Escribir "Estación del año no reconocida. Por favor, ingresa una estación válida."
    FinSegun

    // Evaluar si está lloviendo
    Si estaLloviendo Entonces
        Escribir "También es recomendable llevar un paraguas o una impermeable."
    FinSi
FinAlgoritmo
