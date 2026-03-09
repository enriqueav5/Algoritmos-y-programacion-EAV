#Enrique Arellano Valmaña
#00624255
#Ing Animacion Digital

print ("Digite el número obtenido: ")
Num = int(input())

print ("Digite el valor de la compra: $")
Val_Compra = int(input())

match Num:
    case 0 | 1:
        Total_Pag = Val_Compra * 0.95
        
    case 2 | 3:
        Total_Pag = Val_Compra * 0.87
        
    case 4 |5:
        Total_Pag = Val_Compra * 0.78
        
    case 6 | 7:
        Total_Pag = Val_Compra * 0.7
        
    case 8 | 9:
        Total_Pag = Val_Compra * 0.5
        
    case _:
        print ("Error. Número no existe.")
        Total_Pag = Val_Compra
        
print ("Valor total a pagar: $ ", Total_Pag)