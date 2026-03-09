#Enrique Arellano Valmaña
#00624255
#Ing Animacion Digital

print ("Digite el indicativo: ")
Indicativo = int(input())

print ("Digite el número de minutos: $")
Num_Min = int(input())

match Indicativo:
    case 1:
        Val = Num_Min * 50
        Ciudad = "Bogotá"
        Tarifa = 50
        
    case 2:
        Val = Num_Min * 70
        Ciudad = "Cali"
        Tarifa = 70
        
    case 4:
        Val = Num_Min * 100
        Ciudad = "Medellín"
        Tarifa = 100
        
    case 5:
        Val = Num_Min * 160
        Ciudad = "Barranquilla"
        Tarifa = 160
        
    case 6:
        Val = Num_Min * 180
        Ciudad = "Pereira"
        Tarifa = 180
        
    case 7:
        Val = Num_Min * 190
        Ciudad = "Cúcuta"
        Tarifa = 190
        
    case _:
        print ("Indicativo no existe.")
        Val = 0
        Ciudad = "Ninguna"
        Tarifa = 0
        
print ("Ciudad a la que marca: ", Ciudad)
print ("Tarifa: $", Tarifa)
print ("Valor llamada: $", Val)






