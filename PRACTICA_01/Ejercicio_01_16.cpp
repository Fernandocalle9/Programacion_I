//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:04/09/25
//Numero de ejercicio :16
#include <iostream>
using namespace std;

int main() {
    int num;
    bool esPrimo = true;

    cout << "Ingrese un numero: ";
    cin >> num;

    if (num <= 1) {
        esPrimo = false; 
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                esPrimo = false;
                break; 
            }
        }
    }

    if (esPrimo) {
        cout << num << " es un numero primo." << endl;
    } else {
        cout << num << " NO es un numero primo." << endl;
    }

    return 0;
}