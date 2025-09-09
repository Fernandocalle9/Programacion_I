//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:09/09/25
//Numero de ejercicio :7
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int N, n1, n2, n3, total = 0;

    cout << "Ingrese el total de ninos: ";
    cin >> N;

    srand(time(0));

    n1 = rand() % (N + 1);
    n2 = rand() % (N - n1 + 1);
    n3 = N - n1 - n2;

    total = (n1 * 6) + (n2 * 3) + (n3 * 2);

    cout << "Ninos de 1 ano: " << n1 << endl;
    cout << "Ninos de 2 anos: " << n2 << endl;
    cout << "Ninos de 3 anos: " << n3 << endl;
    cout << "Consumo total de panales por dia: " << total << endl;

    return 0;
}
