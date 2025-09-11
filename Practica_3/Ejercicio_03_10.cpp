//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:11/09/25
//Numero de ejercicio :10
#include <iostream>
using namespace std;

// Función que calcula la tarifa del taxi
double calcularTarifa(double kmRecorridos) {
    double tarifaBase = 10.0;
    double precioPorKm = 2.0;
    double total = tarifaBase + (kmRecorridos * precioPorKm);

    // Aplicar descuento si la distancia es mayor a 10 km
    if (kmRecorridos > 10) {
        total = total * 0.9; // 10% de descuento
    }

    return total;
}

int main() {
    double km, tarifa;

    cout << "Ingrese la distancia recorrida en km: ";
    cin >> km;

    tarifa = calcularTarifa(km);

    cout << "El precio del viaje es: " << tarifa << " Bs" << endl;

    return 0;
}
