#Enrique Arellano Valmaña
#00624255
#Ing Animacion Digital

conEst = 0
sumNotPro = 0
ideEstMay = ""
nomEstMay = ""
apeEstMay = ""
proEstMay = 0
seg = "S"

while seg != "N":

    print ("Identificacion del estudiante: ")
    ideEst = input()
    print ("Apellidos del estudiante: ")
    apeEst = input()
    print ("Nombres del estudiante: ")
    nomEst = input()
    
    conMat = 0
    sumNotDef = 0
    
    opc = "S"
    while opc != "N":
        codMat = input("Código de la materia: ")
        not1 = float(input("Nota 1 30% : "))
        not2 = float(input("Nota 2 30% : "))
        not3 = float(input("Nota 3 40% : "))
        
        notDef = (not1 * 0.30) + (not2 * 0.30) + (not3 * 0.40)
        conMat = conMat + 1
        sumNotDef = sumNotDef + notDef
        
        print("Nota definitiva: ", round(notDef, 2))
        
        opc = input("¿Ingresa una nueva materia [S/N]? ")

    
    proEst = sumNotDef / conMat
    sumNotPro = sumNotPro + proEst
    conEst = conEst + 1
    
    if proEst > proEstMay:
        ideEstMay = ideEst
        apeEstMay = apeEst
        nomEstMay = nomEst
        proEstMay = proEst
        
    print("Promedio del estudiante: ", round(proEst, 2))

    seg = input("¿Desea ingresar un nuevo estudiante [S/N]? ")

proGru = sumNotPro / conEst
print("")
print("Número de estudiantes: ", conEst)
print("Promedio del grupo: ", round(proGru, 2))
print("")
print("Estudiante con mejor promedio:")
print(ideEstMay, " ", apeEstMay, " ", nomEstMay, " ", round(proEstMay, 2))