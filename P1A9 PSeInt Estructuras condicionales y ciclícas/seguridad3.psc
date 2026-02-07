// Enrique Arellano Valmaña
// 00624255
// Ing Animación Digital
Algoritmo seguridad3
	secreto <- 123456
	Escribir 'Ingrese el código: '
	Leer code
	Mientras code<>secreto Hacer
		Escribir 'Código incorrecto. Vuelva a intentar:'
		Leer code
	FinMientras
	Escribir 'Acceso autorizado.'
FinAlgoritmo
