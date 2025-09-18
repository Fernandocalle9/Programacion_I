//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:18/09/25
//Numero de ejercicio :9
#include <iostream>
using namespace std;


double CalcularComision(double totalVendido) {
    return totalVendido * 0.10;
}

double CalcularSueldoTotal(double sueldoBasico, double comision) {
    return sueldoBasico + comision;
}

int main() {
    int n; 
    double sueldoBasico, totalVendido;

    cout << "Ingrese la cantidad de vendedoras: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "---- Vendedora " << i << " ----" << endl;

        cout << "Ingrese el sueldo basico de la vendedora: ";
        cin >> sueldoBasico;

        cout << "Ingrese el total vendido por la vendedora en el mes: ";
        cin >> totalVendido;

        double comision = CalcularComision(totalVendido);

        
        double sueldoTotal = CalcularSueldoTotal(sueldoBasico, comision);

        cout << "Comision por ventas: " << comision << endl;
        cout << "Sueldo total a pagar: " << sueldoTotal << endl;
        cout << "-----------------------------" << endl;
    }

    return 0;
}
