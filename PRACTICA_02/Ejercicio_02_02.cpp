//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:09/09/25
//Numero de ejercicio :2
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n, cara = 0, cruz = 0;

    cout << "Cuantas veces quieres lanzar la moneda: ";
    cin >> n;

    srand(time(0));

    for (int i = 0; i < n; i++) {
        int moneda = rand() % 2;
        if (moneda == 0) {
            cara++;
        } else {
            cruz++;
        }
    }

    cout << "Porcentaje de cara: " << (cara * 100.0 / n) << "%" << endl;
    cout << "Porcentaje de cruz: " << (cruz * 100.0 / n) << "%" << endl;

    return 0;
}
