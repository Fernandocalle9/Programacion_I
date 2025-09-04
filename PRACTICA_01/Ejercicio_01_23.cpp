//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:04/09/25
//Numero de ejercicio :23
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    int signo = 1;
    if (numero < 0) {
        signo = -1;
        numero = -numero; 
    }
    cout << "El numero invertido es: ";
    while (numero > 0) {
        int digito = numero % 10;
        cout << digito;
        numero = numero / 10;
    }
    if (signo == 1 && numero == 0) {
        cout << 0;
    }

    cout << endl;
    return 0;
}