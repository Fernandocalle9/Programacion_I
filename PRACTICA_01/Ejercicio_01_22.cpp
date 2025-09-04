//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:04/09/25
//Numero de ejercicio :22
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num2 != 0 && num1 % num2 == 0) {
        cout << num1 << " es multiplo de " << num2 << endl;
    } 
    else if (num1 != 0 && num2 % num1 == 0) {
        cout << num2 << " es multiplo de " << num1 << endl;
    } 
    else {
        cout << "Ninguno es multiplo del otro." << endl;
    }

    return 0;
}