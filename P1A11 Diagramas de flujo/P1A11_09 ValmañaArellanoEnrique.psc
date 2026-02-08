// Enrique Arellano Valmaña
// 00624255
// Ing Animación Digital
// Escribir un algoritmo que calcule el producto de los n primeros números naturales.
Algoritmo DF_09
	Definir N, p Como Real
	Escribir 'Ingresa un numero que quieras saber el producto de los primeros numeros naturales'
	Leer N
	Si N=0 Entonces
		Escribir 'Factorial de 0 igual a 1'
	SiNo
		Si N>0 Entonces
			p <- 1
			Repetir
				p <- p*N
				N <- N-1
			Hasta Que N=1
			Escribir 'Factorial=', p
		SiNo
			Escribir 'Número negativo'
			Escribir 'Prueba con positivos'
		FinSi
	FinSi
FinAlgoritmo
