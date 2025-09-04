//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:04/09/25
//Numero de ejercicio :25
#include <iostream>
using namespace std;

int main() {
    int numero;
    char respuesta;

    do {
        cout << "Ingrese un numero: ";
        cin >> numero;
        cout << "Tabla de multiplicar del " << numero << ":\n";
        for (int i = 1; i <= 10; i++) {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }
        cout << "¿Desea calcular otra tabla? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 's' || respuesta == 'S'); 
    cout << "Programa terminado." << endl;
    return 0;
}