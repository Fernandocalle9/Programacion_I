//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:09/09/25
//Numero de ejercicio :5
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int N, num, suma = 0, mayor = 0, menor = 1000;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;

    srand(time(0));

    for (int i = 0; i < N; i++) {
        num = rand() % 1000 + 1;
        suma += num;
        if (num > mayor) mayor = num;
        if (num < menor) menor = num;
    }

    double promedio = (double)suma / N;

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor valor: " << mayor << endl;
    cout << "Menor valor: " << menor << endl;

    return 0;
}
