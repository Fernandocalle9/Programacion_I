//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:28/08725
//Numero de ejercicio :13
#include <iostream>
using namespace std;

int main() 
{
    int N, suma = 0;

    cout << "Ingrese un numero N: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        suma += i;
    }

    cout << "La suma desde 1 hasta " << N << " es: " << suma << endl;
    return 0;
}