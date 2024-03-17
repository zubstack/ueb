Algoritmo platillo_precio
Escribir "Ingrese el nombre del plato : "
Leer plato
Escribir "Ingrese la cantidad de ingredientes"
Leer p
Dimension productos[p]
Dimension precios[p]
gasto<-0
Para j<-1 Hasta p Hacer
Escribir "Ingrese el nombre del " j " ingrediente " 
Leer productos[j]
Escribir "Ingrese el precio del " j " ingrediente " 
Leer precios[j]
gasto<-gasto+precios[j]
FinPara
Escribir "El costo total de ", plato, " es: ",gasto
FinAlgoritmo


