//Nombre del alumno: Enrique Arellano Valmaña
//ID: 00624255
//Carrera: Ing Animación Digital

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

int main (){
    string ideEst, nomEst, apeEst, ideEstMay, nomEstMay, apeEstMay, codMat;
    int conMat, conEst;
    double not1, not2, not3, notDef, sumNotDef, proEst, sumNotPro, proGru, proEstMay;
    char opc, seg;
    
    conEst = 0;
	sumNotPro = 0;
	ideEstMay = "";
	nomEstMay = "";
	apeEstMay = "";
	proEstMay = 0;
	seg = 'S';
	
	while (seg != 'N') {
        system("clear");
        cout << "Identificación del estudiante: ";
        cin >> ideEst;
        cin.ignore();
        cout << "Apellidos del estudiante: " << endl;
        getline(cin, apeEst);
        cin.ignore();
        cout << "Nombres del estudiante: " << endl;
        getline(cin, nomEst);
        
        conMat = 0;
        sumNotPro = 0;
        
        opc = 'S';
        
        while (opc != 'N'){
            
            cout << "Código de la materia: " << endl;
            cin >> codMat;
            cout << "Nota 1 30%: " << endl;
            cin >> not1;
            cout << "Nota 2 30%: " << endl;
            cin >> not2;
            cout << "Nota 3 40%: " << endl;
            cin >> not3;
            
            notDef = ((not1*30/100)+((not2*30)/100)+ (not3 * 40) / 100);
            conMat = conMat + 1;
            sumNotDef = sumNotDef + notDef;
            
            cout << "Nota definitiva: " << round(notDef * 100) / 100 << endl;
            cout << "¿Ingresa una nueva materia? [S/N]? " << endl;
            cin >> opc;
        } 
        proEst = sumNotDef / conMat;
        sumNotPro = sumNotPro + proEst;
        conEst = conEst + 1;
        
        if (proEst > proEstMay){
            ideEstMay = ideEst;
            apeEstMay = apeEst;
            nomEstMay = nomEst;
            proEstMay = proEst;
        }
        
        cout << " ";
        cout << "Promedio del estudiante: " << round(proEst * 100) / 100 << endl;
        cout << " ";
        cout << "¿Desea ingresar un nuevo estudiante [S/N]? " << endl;
        cin >> seg;
    }

    proGru = sumNotPro / conEst;
    
    cout << " ";
    cout << "Número de estudiantes: " << conEst << endl;
    cout << "Promedio del grupo: " << round(proGru * 100) / 100 << endl;
    cout << " " << endl;
    cout << "Estudiante con mejor promedio" << endl;
    cout << ideEstMay << " " << apeEstMay << " " << nomEstMay << " " << round(proEstMay * 100) / 100 << endl;
    
    
    return 0;
}
    