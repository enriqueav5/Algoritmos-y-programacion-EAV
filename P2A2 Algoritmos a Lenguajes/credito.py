#Enrique Arellano Valmaña
#00624255
#Ing Animacion Digital

print ("Digite el plazo otorgado: ")

Plazo = int(input())

match Plazo:
    case 48:
        Art = ("una computadora.")
        
    case 36:
        Art = ("una televisión de 42 pulgadas.")
        
    case 24:
        Art = ("un celular.")
        
    case 12:
        Art = ("una cámara digital.")
        
    case 6:
        Art = ("una impresora.")
        
    case _:
        Art = (" ")
        
if (Art == " "):
    print ("Error. Plazo no existente")
else:
    print ("Podría llevar ", Art)