// Enrique Arellano Valmaña
// 00624255
// Ing Animación Digital
// Se desea obtener una tabla con las depreciaciones acumuladas y los valores reales de cada año, de un
// automóvil comprado por 20.000 euros en el año 2005, durante los seis años siguientes suponiendo un
// valor de recuperación o rescate de 2.000. Realizar el análisis del problema, conociendo la fórmula de la
// depreciación anual constante D para cada año de vida útil.
Algoritmo DF_02
	Definir coste, valorRescate, valorActual, depreciacion, acumulada Como Real
	Definir vidaUtil, anio Como Entero
	Escribir 'Ingresa el costo: '
	Leer coste
	Escribir 'Ingresa la vida útil'
	Leer vidaUtil
	Escribir 'Ingresa el valor de rescate: '
	Leer valorRescate
	Escribir 'Ingresar el año: '
	Leer anio
	valorActual <- coste
	depreciacion <- (coste-valorRescate)/vidaUtil
	acumulada <- 0
	Mientras anio<vidaUtil Hacer
		acumulada <- acumulada+depreciacion
		valorActual <- valorActual+depreciacion
		anio <- anio+1
		Escribir 'El valor acumulado es: $', acumulada
		Escribir 'El valor actual es: $', valorActual
	FinMientras
FinAlgoritmo
