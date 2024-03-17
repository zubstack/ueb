Algoritmo CostoViaje

    Definir tipoBus Como Caracter
    Definir  numPasajeros, kmRecorrer,costoPorKm, costoMinimo, excedentePersonas, costoExcedente, costoTotal Como Real

    Escribir "Ingrese el tipo de autob�s (A, B o C): "
    Leer tipoBus

    Escribir "Ingrese el n�mero de pasajeros: "
    Leer numPasajeros

    Escribir "Ingrese los kil�metros a recorrer: "
    Leer kmRecorrer

    // Determinar el costo por kil�metro seg�n el tipo de autob�s
    Segun tipoBus Hacer
        Caso "A":
            costoPorKm = 2
        Caso "B":
            costoPorKm = 2.5
        Caso "C":
            costoPorKm = 3
        Otro:
            Escribir "Tipo de autob�s no v�lido. Finalizando programa."
           
    FinSegun

    // Calcular el costo m�nimo
    costoMinimo = costoPorKm * 20

    // Calcular el excedente de personas y el costo del excedente
    excedentePersonas = numPasajeros - 20
    Si excedentePersonas > 0 Entonces
        costoExcedente = costoPorKm * excedentePersonas
        costoTotal = costoMinimo + costoExcedente
    Sino
        costoTotal = costoMinimo
    FinSi

    // Mostrar el resultado
    Escribir "El costo total del viaje es: ", costoTotal, " dolares"

FinAlgoritmo
