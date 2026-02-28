//Enrique Arellano Valmaña
//00624255
//Ing Animacion Digital


#include <iostream>

using namespace std;

int main (){
    
    double NUM1, NUM2, Doble, Triple;
    
    cout << "Ingrese un numero: ";
    cin >> NUM1; 
    cout << "Ingrese otro numero: ";
    cin >> NUM2;
    
    Doble = (NUM1 + NUM2) * 2 ;
    Triple = (NUM1 - NUM2) * 3;
    
    cout << "El doble de la suma es: " << Doble << endl;
    cout << "El triple de la resta es: " << Triple << endl;
    
    return 0;
}
   