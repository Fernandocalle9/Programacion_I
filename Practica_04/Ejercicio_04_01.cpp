//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:18/09/25
//Numero de ejercicio :1
#include <iostream>
using namespace std;


void IntercambiarValores(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    cout << "Ingrese el primer numero: ";
    cin >> x;
    cout << "Ingrese el segundo numero: ";
    cin >> y;

    cout << "Antes de intercambiar: x = " << x << ", y = " << y << endl;

    
    IntercambiarValores(x, y);

    cout << "Despues de intercambiar: x = " << x << ", y = " << y << endl;

    return 0;
}
