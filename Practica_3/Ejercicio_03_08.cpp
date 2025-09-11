//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:11/09/25
//Numero de ejercicio :8
#include <iostream>
using namespace std;

// Función que convierte un monto en billetes y monedas
void descomponerDinero(int monto) {
    int billetes200, billetes100, billetes50, billetes20, billetes10, monedas5, monedas1;

    billetes200 = monto / 200;
    monto = monto % 200;

    billetes100 = monto / 100;
    monto = monto % 100;

    billetes50 = monto / 50;
    monto = monto % 50;

    billetes20 = monto / 20;
    monto = monto % 20;

    billetes10 = monto / 10;
    monto = monto % 10;

    monedas5 = monto / 5;
    monto = monto % 5;

    monedas1 = monto; // lo que queda son monedas de 1 Bs

    // Mostrar el resultado
    if (billetes200 > 0) cout << billetes200 << " billete(s) de 200 Bs" << endl;
    if (billetes100 > 0) cout << billetes100 << " billete(s) de 100 Bs" << endl;
    if (billetes50 > 0)  cout << billetes50  << " billete(s) de 50 Bs" << endl;
    if (billetes20 > 0)  cout << billetes20  << " billete(s) de 20 Bs" << endl;
    if (billetes10 > 0)  cout << billetes10  << " billete(s) de 10 Bs" << endl;
    if (monedas5 > 0)    cout << monedas5    << " moneda(s) de 5 Bs" << endl;
    if (monedas1 > 0)    cout << monedas1    << " moneda(s) de 1 Bs" << endl;
}

int main() {
    int monto;

    cout << "Ingrese el monto en Bs: ";
    cin >> monto;

    descomponerDinero(monto);

    return 0;
}
