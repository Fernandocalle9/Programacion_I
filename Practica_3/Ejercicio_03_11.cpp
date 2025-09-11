//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:11/09/25
//Numero de ejercicio :11
#include <iostream>
using namespace std;

// Función que simula el retiro de dinero
double retirarDinero(double saldo, double cantidad) {
    if (cantidad > saldo) {
        cout << "Error: Saldo insuficiente." << endl;
    } else if ( (int)cantidad % 10 != 0 ) {
        cout << "Error: La cantidad a retirar debe ser múltiplo de 10." << endl;
    } else {
        saldo -= cantidad;
        cout << "Retiro exitoso. Nuevo saldo: " << saldo << " Bs" << endl;
    }
    return saldo;
}

int main() {
    double saldo = 1000.0; // saldo inicial
    double cantidad;

    cout << "Ingrese la cantidad a retirar: ";
    cin >> cantidad;

    saldo = retirarDinero(saldo, cantidad);

    return 0;
}
