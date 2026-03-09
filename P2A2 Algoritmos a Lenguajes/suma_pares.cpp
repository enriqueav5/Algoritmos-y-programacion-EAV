//Nombre del alumno: Enrique Arellano Valmaña
//ID: 00624255
//Carrera: Ing Animación Digital

#include <iostream>
using namespace std;

int main() {
    int Num1, Num2, Suma;

    cout << "Ingrese el primer número: ";
    cin >> Num1;

    if (Num1 % 2 == 0) {
        if (Num1 > 0) {
            cout << "Ingrese el segundo número: ";
            cin >> Num2;
            
            if (Num2 % 2 == 0) {
                if (Num2 > 0) {
                    Suma = Num1 + Num2;
                    cout << "La suma es: " << Suma;
                } else {
                    cout << "El segundo número no es positivo.";
                }
            } else {
                cout << "El segundo número no es par.";
            }
        } else {
            cout << "El primer número no es positivo.";
        }
    } else {
        cout << "El primer número no es par.";
    }

    return 0;
}