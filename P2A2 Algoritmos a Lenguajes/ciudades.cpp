//Nombre del alumno: Enrique Arellano Valmaña
//ID: 00624255
//Carrera: Ing Animación Digital

#include <iostream>
using namespace std;

int main() {
    
    int Val, Num_Min, indicativo, Tarifa;
    string Ciudad;
    
    cout << "Digite el indicativo: ";
    cin >> indicativo;
    cout << "Digite # de minutos: ";
    cin >> Num_Min;
    
    switch (indicativo){
        case 1:
        Val = Num_Min * 50;
        Ciudad = "Bogotá";
        Tarifa = 50;
        break;
        
        case 2:
        Val = Num_Min * 70;
        Ciudad = "Cali";
        Tarifa = 70;
        break;
        
        case 4:
        Val = Num_Min * 100;
        Ciudad = "Medellín";
        Tarifa = 100;
        break;
        
        case 5:
        Val = Num_Min * 160,
        Ciudad = "Barranquilla";
        Tarifa = 50;
        break;
        
        case 6:
        Val = Num_Min * 180;
        Ciudad = "Pereira";
        Tarifa = 50;
        break;
        
        case 7:
        Val = Num_Min * 190;
        Ciudad = "Cúcuta";
        Tarifa = 190;
        break;
        
        default:
        Val = 0;
        Ciudad = "Ninguna";
        Tarifa = 0;
        break;
        
    }
    
    cout << "Ciudad a la que marca: " << Ciudad << endl;
    cout << "Tarifa: $" << Tarifa << endl;
    cout << "Valor llamdada: $" << Val << endl;
    
    
    return 0;
}