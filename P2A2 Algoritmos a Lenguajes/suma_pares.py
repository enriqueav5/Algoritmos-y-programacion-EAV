#Enrique Arellano Valmaña
#00624255
#Ing Animacion Digital

print ("Ingrese el primer número: ")

Num1 = int(input())

if Num1 % 2 == 0:
    if Num1 > 0:
        print ("Ingrese el segundo número: ")
        
        Num2 = int(input())
        
        if Num2 % 2 == 0:
            if Num2 > 0:
                Suma = Num1 + Num2
                print("La suma es: ", Suma)
                
            else:
                print("El segundo número no es positivo.")
                
        else:
            print("El segundo número no es par.")
            
                
    else:
        print("El primer número no es positivo.")
        
                
else:
    print("El primer número no es par.")   