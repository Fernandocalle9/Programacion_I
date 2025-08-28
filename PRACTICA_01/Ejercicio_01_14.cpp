//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:28/08725
//Numero de ejercicio :14
#include <iostream>
using namespace std;

int main() 
{
    int N;

    cout << "Ingrese un numero N: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}