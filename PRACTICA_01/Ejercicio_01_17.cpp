//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:04/09/25
//Numero de ejercicio :17
#include <iostream>
using namespace std;
int sumaDivisores(int n) {
    int suma = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma;
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    if (sumaDivisores(num1) == num2 && sumaDivisores(num2) == num1) {
        cout << num1 << " y " << num2 << " son numeros amigos." << endl;
    } else {
        cout << num1 << " y " << num2 << " NO son numeros amigos." << endl;
    }

    return 0;
}