Algoritmo CalculoFactorial
    Definir Numero, Factorial, i Como Entero
    
    Escribir "Ingrese un número para calcular el factorial:"
    Leer Numero
    
    // Inicializar la variable Factorial
    Factorial = 1
    
    // Bucle Mientras para calcular el factorial
    i = 1
    Mientras (i <= Numero) Hacer
        Factorial = Factorial * i
        i = i + 1
    FinMientras
    
    Escribir "El factorial de ", Numero, " es: ", Factorial
    
FinAlgoritmo
