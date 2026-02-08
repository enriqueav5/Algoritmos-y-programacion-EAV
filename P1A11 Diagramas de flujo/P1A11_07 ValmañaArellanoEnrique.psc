// Enrique Arellano Valmaña
// 00624255
// Ing Animación Digital
// Dados tres números, determinar si la suma de cualquier pareja de ellos es igual al tercer número. Si se
// cumple esta condición, escribir "Iguales" y, en caso contrario, escribir "Distintas".
Algoritmo DF_07
	Definir NumberA, NumberB, NumberC Como Entero
	Escribir 'Ingresa tu primer valor'
	Leer NumberA
	Escribir 'Ingresa tu segundo valor'
	Leer NumberB
	Escribir 'Ingresa tu tercer valor'
	Leer NumberC
	Si NumberA+NumberB=NumberC Entonces
		Escribir 'Iguales'
	SiNo
		Si NumberA+NumberC=NumberB Entonces
			Escribir 'Iguales'
		SiNo
			Si NumberB+NumberC=NumberA Entonces
				Escribir 'Iguales'
			SiNo
				Escribir 'Distintas'
			FinSi
		FinSi
	FinSi
FinAlgoritmo
