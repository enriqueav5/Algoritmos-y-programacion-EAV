#Enrique Arellano Valmaña
#00624255
#Ing Animacion Digital

print ("¿Número de hojas del cuaderno?: ")
Num_Hojas = int(input())

if Num_Hojas == 250:
    print("El cuaderno cuesta $16.00.")
elif Num_Hojas == 100:
    print("El cuaderno cuesta $11.00.")
elif Num_Hojas == 80:
    print("El cuaderno cuesta $8.00.")
elif Num_Hojas == 50:
    print("El cuaderno cuesta $4.50.")
else:
    print("Número de hojas incorrecto")