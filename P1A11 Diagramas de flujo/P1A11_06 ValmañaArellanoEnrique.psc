// Enrique Arellano Valmaña
// 00624255
// Ing Animación Digital
// Dada una secuencia de números, contar e imprimir el número de ceros de la secuencia
Algoritmo DF_06
	Definir numbers, total Como Entero
	Definir decision Como Cadena
	total <- 0
	Escribir '¿Desea añadir números? (si/no)'
	Leer decision
	Mientras decision='si' Hacer
		Escribir 'Ingrese su número:'
		Leer numbers
		Si numbers=0 Entonces
			total <- total+1
		FinSi
		Escribir '¿Desea añadir más números? (si/no)'
		Leer decision
	FinMientras
	Escribir total
FinAlgoritmo
