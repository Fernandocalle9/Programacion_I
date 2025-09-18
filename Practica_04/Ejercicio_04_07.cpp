//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:18/09/25
//Numero de ejercicio :7
#include <iostream>
using namespace std;


int CalcularMCD(int m, int n) {
    while (n != 0) {
        int residuo = m % n;
        m = n;
        n = residuo;
    }
    return m;
}


int CalcularMCM(int m, int n) {
    int mcd = CalcularMCD(m, n);
    return (m * n) / mcd;
}

int main() {
    int m, n;

    cout << "Ingrese el primer numero (m): ";
    cin >> m;
    cout << "Ingrese el segundo numero (n): ";
    cin >> n;

    int mcd = CalcularMCD(m, n);
    int mcm = CalcularMCM(m, n);

    cout << "El Maximo Comun Divisor (MCD) es: " << mcd << endl;
    cout << "El Minimo Comun Multiplo (MCM) es: " << mcm << endl;

    return 0;
}
