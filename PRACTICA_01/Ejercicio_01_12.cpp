//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:28/08725
//Numero de ejercicio :12
#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Ingrese un numero entre 1 y 5: ";
        cin >> num;
    } while (num < 1 || num > 5);

    cout << "Numero valido ingresado: " << num << endl;
    return 0;
}