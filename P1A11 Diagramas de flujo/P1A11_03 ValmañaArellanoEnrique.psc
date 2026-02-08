// Enrique Arellano Valmaña
// 00624255
// Ing Animación Digital
// Calcular la media de una serie de números positivos, suponiendo que los datos se leen desde un
// terminal. Un valor de cero ?como entrada? indicará que se ha alcanzado el final de la serie de números
// positivos.
Algoritmo DF_03
	Definir C, S, dato, media Como Entero
	C <- 0
	S <- 0
	Repetir
		Escribir 'Ingresa un dato: '
		Leer dato
		Si dato<>0 Entonces
			C <- C+1
			S <- S+dato // Variable tipo contador
		FinSi // Variable tipo acumulador
	Mientras Que dato<>0
	media <- trunc(S/C)
	Escribir 'La media es: ', media
FinAlgoritmo
