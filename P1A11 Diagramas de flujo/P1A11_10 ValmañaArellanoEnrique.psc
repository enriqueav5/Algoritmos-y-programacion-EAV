// Enrique Arellano Valmaña
// 00624255
// Ing Animación Digital
// Escribir un algoritmo que acepte tres números enteros e imprima el mayor de ellos.
Algoritmo DF_10
	Definir A, B, C Como Entero
	Escribir 'Ingresa tu 1er número'
	Leer A
	Escribir 'Ingresa tu 2do número'
	Leer B
	Escribir 'Ingresa tu 3er número'
	Leer C
	Si A<B Entonces
		Si B<C Entonces
			Escribir C
		SiNo
			Escribir B
		FinSi
	SiNo
		Si A<C Entonces
			Escribir C
		SiNo
			Escribir A
		FinSi
	FinSi
FinAlgoritmo
