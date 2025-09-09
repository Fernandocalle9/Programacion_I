//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:09/09/25
//Numero de ejercicio :3
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int numero, factorial = 1;

    srand(time(0));
    numero = rand() % 10 + 1;

    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    cout << "Numero: " << numero << endl;
    cout << "Factorial: " << factorial << endl;

    return 0;
}
