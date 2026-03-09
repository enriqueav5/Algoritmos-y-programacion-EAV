//Nombre del alumno: Enrique Arellano Valmaña
//ID: 00624255
//Carrera: Ing Animación Digital

#include <iostream>

using namespace std;

int main (){
    
    double Num1, Num2, Num3, Num4, May;
    
    cout << "Digite número 1:";
    cin >> Num1;
    cout << "Digite número 2:";
    cin >> Num2;
    cout << "Digite número 3:";
    cin >> Num3;
    cout << "Digite número 4:";
    cin >> Num4;
    
    if (Num1 > Num2 and Num1 > 3 and Num1 > Num4){
        May = Num1;}
    else{
        if (Num2 > Num1 and Num2 > Num3 and Num2 > Num4){
            May = Num2;}
        else{
            if (Num3 > Num1 and Num3 > Num2 and Num3 > Num4){
                May = Num3;}
            else{
                May = Num4;
            }
        }
    }
    
    cout << "El número mayor es el: " << May;




    return 0;
}