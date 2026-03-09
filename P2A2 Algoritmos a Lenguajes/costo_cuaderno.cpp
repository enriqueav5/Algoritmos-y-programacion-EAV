//Nombre del alumno: Enrique Arellano Valmaña
//ID: 00624255
//Carrera: Ing Animación Digital

#include <iostream>

using namespace std;

int main (){
    
    double Num_Hojas;
    
    cout << "¿Número de hojas del cuaderno?: ";
    cin >> Num_Hojas;
    
    if (Num_Hojas == 250){
        cout << "El cuaderno cuesta $16.00";}
    else{
        if (Num_Hojas == 100){
            cout << "El cuaderno cuesta $11.00";}
        else{
            if (Num_Hojas == 80){
               cout << "El cuaderno cuesta $8.00";}
            else{
                if (Num_Hojas == 50){
                   cout << "El cuaderno cuesta $4.50";}
                else {
                    cout << "Número de hojas incorrecto.";
                }
            }
        }
    }
    
    
    
    
    
    
    return 0;
}
    