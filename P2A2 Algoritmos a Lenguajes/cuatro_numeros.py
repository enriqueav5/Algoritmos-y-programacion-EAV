#Enrique Arellano Valmaña
#00624255
#Ing Animacion Digital

print ("Digite número 1:")
Num1 = int(input())
print ("Digite número 2:")
Num2 = int(input())
print ("Digite número 3:")
Num3 = int(input())
print ("Digite número 4:")
Num4 = int(input())


if Num1 > Num2 and Num1 > Num3 and Num1 > Num4:
    May = Num1
elif Num2 > Num1 and Num2 > Num3 and Num2 > Num4:
    May = Num2
elif Num3 > Num1 and Num3 > Num2 and Num3 > Num4:
    May = Num3
else:
    May = 4
    
print ("El número mayor es el: ", May)
    