#Cadena --> secuencia de caracteres

nombre = input("Ingresa tu nombre: ")
apellidos = input("ingresa tus apellidos: ")

print(f"Hola {nombre} {apellidos}, mucho gusto!")

lugar = input("Ingresa el lugar de origen: ")
tiempo = int(input("¿Cuántos años has vivido ahí? "))

#concatenación
descripcion = "No conozco " + lugar + " sería bonito visitarlo porque has vivido " + str(tiempo) + " años"
texto2 = f"No conozco {lugar} seria bonito visitarlo porque has vivido {tiempo } años"

print("Nombre: ", nombre)
print("Apellido: ", apellidos)
print(descripcion)

print(nombre[0])
print(nombre[1])
print(nombre[2])

tamanio = len(nombre)
print("Tamaño del nombre: ", tamanio)
print(nombre[tamanio-1]) #nombre[len(nombre)-1]
print(nombre[0:3]) # primeros 3 caracteres
# nombre[:3]
print(nombre [3:len(nombre)]) # a partir de 4to caracter hasta el final
# nombre [3:]
print(nombre[2:5])

#for (int 1 = 0; i < lugar.length(); i++)
for i in range(0, len(nombre)):
    print(nombre[i])
    
print()

for i in nombre:
    print(i, end="-")
    
print()

for i in range(len(nombre)-1,-1, -1):
    print(nombre[i], end=",")
    