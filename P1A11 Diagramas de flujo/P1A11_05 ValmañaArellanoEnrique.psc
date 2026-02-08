// Enrique Arellano Valmaña
// 00624255
// Ing Animación Digital
// Se desea realizar el algoritmo que resuelva el siguiente problema: Cálculo de los salarios mensuales de
// los empleados de una empresa, sabiendo que éstos se calculan en base a las horas semanales trabajadas
// y de acuerdo a un precio especificado por horas. Si se pasan de cuarenta horas semanales, las horas
// extraordinarias se pagarán a razón de 1.5 veces la hora ordinaria.
Algoritmo DF_05
	Definir horas Como Entero
	Definir precio_hora, salario_mensual, salario_pagado Como Real
	Definir nombre, datos Como Cadena
	datos <- 'si'
	Mientras datos=='si' Hacer
		Escribir 'Ingresa el nombre del trabajador'
		Leer nombre
		Escribir 'Ingresa las horas trabajadas'
		Leer horas
		Escribir 'Ingresa el pago por horas'
		Leer precio_hora
		Si horas<=40 Entonces
			salario_mensual <- horas*precio_hora
		SiNo
			salario_mensual <- 40+1.5*precio_hora*(horas-40)
		FinSi
		Escribir 'el salario mensual del trabajador ', nombre, 'es de $', salario_mensual
		Escribir '¿Desea añadir más datos? Escriba si o no'
		Leer datos
	FinMientras
FinAlgoritmo
