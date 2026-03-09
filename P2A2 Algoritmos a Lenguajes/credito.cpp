//Nombre del alumno: Enrique Arellano Valmaña
//ID: 00624255
//Carrera: Ing Animación Digital

#include <iostream>
using namespace std;

int main() {
    
    int Plazo;
    string Art;
    
    cout << "Digite el plazo otorgado:";
    cin >> Plazo;
    
    switch(Plazo){
        case 48: 
        Art = "una compuadora";
        break;
        
        case 36: 
        Art = "una television  de 42 pulgadas";
        break;
        
        case 24: 
        Art = "un celular";
        break;
        
        case 12: 
        Art = "una cámara digital";
        break;
        
        case 6: 
        Art = "una impresora";
        break;
        
        default: 
        Art = " ";
    }
    
    if (Art == " "){
        cout << "Error. Plazo no existente";}
    else{
        cout << "Podría llevar " << Art;
    }
    
    
    return 0;
}