function imprimirPrimerElemento(array) {
  console.log(array[0]);
}

// Ejemplo de función con tiempo lineal O(n)
function imprimirTodosLosElementos(array) {
  for (let i = 0; i < array.length; i++) {
    console.log(array[i]);
  }
}

// Ejemplo de función con tiempo logarítmico O(log n)
function busquedaBinaria(array, elemento) {
  let inicio = 0;
  let fin = array.length - 1;

  while (inicio <= fin) {
    let medio = Math.floor((inicio + fin) / 2);
    if (array[medio] === elemento) {
      return medio; // Elemento encontrado
    } else if (array[medio] < elemento) {
      inicio = medio + 1; // Buscar en la mitad derecha
    } else {
      fin = medio - 1; // Buscar en la mitad izquierda
    }
  }

  return -1; // Elemento no encontrado
}

// Ejemplo de función con tiempo cuadrático O(n^2)
function imprimirParesDelArray(array) {
  for (let i = 0; i < array.length; i++) {
    for (let j = 0; j < array.length; j++) {
      console.log(array[i], array[j]);
    }
  }
}

// Ejemplo de función con tiempo factorial O(n!)
function calcularPermutaciones(cadena) {
  let permutaciones = [];

  function permutar(prefijo, cadena) {
    if (cadena.length === 0) {
      permutaciones.push(prefijo);
    } else {
      for (let i = 0; i < cadena.length; i++) {
        let nuevoPrefijo = prefijo + cadena.charAt(i);
        let nuevaCadena = cadena.substring(0, i) + cadena.substring(i + 1);
        permutar(nuevoPrefijo, nuevaCadena);
      }
    }
  }

  permutar('', cadena);
  return permutaciones;
}
