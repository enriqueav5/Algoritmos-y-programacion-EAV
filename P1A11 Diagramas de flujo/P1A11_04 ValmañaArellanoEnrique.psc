// Enrique Arellano Valmaña
// 00624255
// Ing Animación Digital
// Suma de los números pares comprendidos entre 2 y 100.
Algoritmo DF_04
	Definir suma, number Como Entero
	suma <- 2
	number <- 4
	Repetir
		suma <- suma+number
		number <- number+2
	Hasta Que number>100
	Escribir suma
FinAlgoritmo
