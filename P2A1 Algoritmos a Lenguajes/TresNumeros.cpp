//Enrique Arellano Valmaña
//00624255
//Ing Animacion Digital


#include <iostream>

using namespace std;

int main (){
    
    double NUM1, NUM2, NUM3, Sum, pdto;
    
    cout << "Ingrese numero 1: ";
    cin >> NUM1; 
    cout << "Ingrese numero 2: ";
    cin >> NUM2;
    cout << "Ingrese numero 3: ";
    cin >> NUM3;
    
    Sum = NUM1 + NUM2 + NUM3;
    pdto = NUM1 * NUM2 * NUM3;
    
    cout << "Suma de los 3 numeros: " << Sum << endl;
    cout << "Producto de los 3 numeros: " << pdto << endl;
    
    return 0;
}
   