//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:09/09/25
//Numero de ejercicio :6
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int N, num, primos = 0;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;

    srand(time(0));

    for (int i = 0; i < N; i++) {
        num = rand() % 10000 + 1;
        cout << num << " ";
        if (esPrimo(num)) primos++;
    }

    cout << "\nCantidad de numeros primos: " << primos << endl;

    return 0;
}
