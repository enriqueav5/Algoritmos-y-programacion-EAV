//Enrique Arellano Valmaña
//00624255
//Ing Animacion Digital

#include <iostream>
#include <cmath>

using namespace std;

int main (){
    
    double NUM, Cuad, Cubo, Raiz_Cuad, Raiz_Cub;
    
    cout << "Ingrese numero: ";
    cin >> NUM;
    
    Cuad = pow(NUM, 2);
    Cubo = pow(NUM, 3);
    Raiz_Cuad = pow(NUM, 0.5);
    Raiz_Cub = pow(NUM, (1/3));
    
    cout << "Cuadrado del numero: " << Cuad << endl;
    cout << "Cubo del numero: " << Cubo << endl;
    cout << "Raiz cuadrada del numero: " << Raiz_Cuad << endl;
    cout << "Raiz cubica del numero: " << Raiz_Cub << endl;
    
    return 0;
}