#Enrique Arellano Valmaña
#00624255
#Ing Animacion Digital

import random

PA = "Y"

print("Ingrese su nombre, usuario.")
nombre = input()
    
while PA == "Y":

    puntos = 0
    cont = 0
    cueva = random.randint(0, 1)
    print(cueva)

    print("Ingrese el numero de caminos que querrá atravesar")
    caminos = int(input())
    final = 100 * caminos

    print(f"Bienvenido {nombre}, haz llegado a la comarca draconiana, tu deber será adentrarte en varias cuevas para lograr conseguir muchos tesoros. Buena suerte {nombre}.")

    print("Para jugar, presione 0 o 1 para elegir la cueva la cual recorrerá a través de este temible mundo.")
    eleccion = int(input())

    while cont < caminos:
       if cueva == eleccion:
           cont = cont + 1
           puntos = puntos + 100
           cueva = random.randint(0, 1)
           print(cueva)
           print(f"Muy bien {nombre}, superaste esta cueva!, ganaste 100 puntos, ahora tienes {puntos} puntos!")
           if cont < caminos:
                print("Elija de nuevo para continuar con su viaje.")
                eleccion = int(input())
       else:
            cont = cont + caminos
            print("Que desafortunado, te haz encontrado al dragon y te ha engullido :/")


    if final == puntos:
        print(f"Muchísimas felicidades {nombre}, haz logrado superar todas las cuevas y conseguido {puntos}! Te haz encontrado con el mayor tesoro de la historia. Gracias por jugar.")
    else:
        print(f"Que triste, haz perdido. Tu puntaje final fue de {puntos} puntos")
    print("Desea volver a jugar? (Y/N)")
    PA = input()
    
print("Hasta pronto!")
    