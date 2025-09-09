//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:09/09/25
//Numero de ejercicio :1
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n, dado, pares = 0;

    cout << "Cuantas veces quieres lanzar el dado: ";
    cin >> n;

    srand(time(0));

    for (int i = 0; i < n; i++) {
        dado = rand() % 6 + 1;
        if (dado % 2 == 0) {
            pares++;
        }
    }
}
