//Enrique Arellano Valmaña
//00624255
//Ing Animacion Digital


#include <iostream>
#include <cmath>

using namespace std;

int main (){
    
    double NUM1, NUM2, Raiz_Cuad, Raiz_Cub;
    
    cout << "Digite Numero 1: ";
    cin >> NUM1; 
    cout << "Digite Numero 2: ";
    cin >> NUM2;
    
    Raiz_Cuad = pow((NUM1 * NUM2 / 2), (1.0/2.0));
    Raiz_Cub = pow(((pow(NUM1, 2) + pow(NUM2, 3)) / 4 * 3), (1.0/3.0));
    
    cout << "La raiz cuadrada es: " << Raiz_Cuad << endl;
    cout << "La raiz cubica es: " << Raiz_Cub << endl;
    
    return 0;
}
   