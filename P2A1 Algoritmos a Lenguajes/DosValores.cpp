//Enrique Arellanbo Valmaña
//00624255
//Ing Animacion Digital

#include <iostream>

using namespace std;

int main (){
    //Tipos de datos reales en C++ float/double
    double NUM1, NUM2, MULT;
    
    cout << "Ingrese numero 1: ";
    cin >> NUM1; 
    cout << "Ingrese numero 2: ";
    cin >> NUM2;
    
    MULT = NUM1 * NUM2;
    
    cout << MULT ;
    cout << NUM1 << " multiplicado por " << NUM2 << " es igual a: " << MULT << endl;
    cout << NUM1 << " X " << NUM2 << " = " << MULT << endl;
    
    return 0;