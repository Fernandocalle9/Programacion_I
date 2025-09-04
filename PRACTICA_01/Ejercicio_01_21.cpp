//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:04/09/25
//Numero de ejercicio :21
#include <iostream>
using namespace std;

int main() {
    int a, b, resultado = 0;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    int signo = 1;
    if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
        signo = -1;
    } 
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    for (int i = 0; i < b; i++) {
        resultado += a;
    }
    resultado = resultado * signo;

    cout << "El resultado de la multiplicacion es: " << resultado << endl;

    return 0;
}