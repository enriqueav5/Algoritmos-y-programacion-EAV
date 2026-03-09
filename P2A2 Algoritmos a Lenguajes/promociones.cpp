//Nombre del alumno: Enrique Arellano Valmaña
//ID: 00624255
//Carrera: Ing Animación Digital

#include <iostream>
using namespace std;

int main() {
    
    int Num;
    double Total_Pag, Val_compra;
    
    cout << "Digite el número obtenido ";
    cin >> Num;
    cout << "Digite el valor de la compra: $";
    cin >> Val_compra;
    
    switch(Num){
        case 0:
        case 1:
        Total_Pag = Val_compra * 0.95;
        break;
        
        case 2:
        case 3:
        Total_Pag = Val_compra * 0.87;
        break;
        
        case 4:
        case 5:
        Total_Pag = Val_compra * 0.78;
        break;
        
        case 6:
        case 7:
        Total_Pag = Val_compra * 0.7;
        break;
        
        case 8:
        case 9:
        Total_Pag = Val_compra * 0.5;
        break;
        
        default:
        cout << "Error. El número no existe" << endl;
        Total_Pag = Val_compra;
    }
    
    cout << "Valor total a pagar: $" << Total_Pag;
    
    
    
    
    return 0;
}