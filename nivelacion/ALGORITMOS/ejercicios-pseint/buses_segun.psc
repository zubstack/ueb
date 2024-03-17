Algoritmo CostoViaje

    Definir tipoBus Como Caracter
    Definir  numPasajeros, kmRecorrer,costoPorKm, costoMinimo, excedentePersonas, costoExcedente, costoTotal Como Real

    Escribir "Ingrese el tipo de autobús (A, B o C): "
    Leer tipoBus

    Escribir "Ingrese el número de pasajeros: "
    Leer numPasajeros

    Escribir "Ingrese los kilómetros a recorrer: "
    Leer kmRecorrer

    // Determinar el costo por kilómetro según el tipo de autobús
    Segun tipoBus Hacer
        Caso "A":
            costoPorKm = 2
        Caso "B":
            costoPorKm = 2.5
        Caso "C":
            costoPorKm = 3
        Otro:
            Escribir "Tipo de autobús no válido. Finalizando programa."
           
    FinSegun

    // Calcular el costo mínimo
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
