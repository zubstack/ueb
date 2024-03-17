Algoritmo FacturaConDescuento
    Definir nombreCliente, nombreProducto Como Caracter
    Definir precio, cantidad, totalCompra, descuento, totalConDescuento Como Real

    Escribir "Ingrese el nombre del cliente: "
    Leer nombreCliente

    Escribir "Ingrese el nombre del producto: "
    Leer nombreProducto

    Escribir "Ingrese el precio del producto: "
    Leer precio

    Escribir "Ingrese la cantidad comprada: "
    Leer cantidad

    totalCompra <- precio * cantidad
	
	Escribir "Sr(a).", nombreCliente," ha comprado ", cantidad," ", nombreProducto,". "
	
    Si totalCompra > 2000 Entonces
        descuento <- 0.15 * totalCompra
        totalConDescuento <- totalCompra - descuento
        Escribir "¡Esta compra tiene descuento del 15%!"
        Escribir "Descuento aplicado: ", descuento
        Escribir "Total con descuento: ", totalConDescuento
    Sino
        Escribir "Total de compra: ", totalCompra
    FinSi
FinAlgoritmo
