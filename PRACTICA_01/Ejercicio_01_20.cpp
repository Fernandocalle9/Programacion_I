//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:04/09/25
//Numero de ejercicio :20
#include <iostream>
using namespace std;

int main() {
    int numero;
    int contador = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numero;
    if (numero == 0) {
        contador = 1;
    } else {
        if (numero < 0) {
            numero = -numero;
        }
        while (numero > 0) {
            numero = numero / 10;
            contador++;
        }
    }

    cout << "El numero tiene " << contador << " digitos." << endl;

    return 0;
}