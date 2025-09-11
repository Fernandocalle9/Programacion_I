//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:11/09/25
//Numero de ejercicio :9
#include <iostream>
using namespace std;

// Función que calcula tiempo extra o faltante
void calcularTiempo(int minutosTrabajados) {
    int jornada = 8 * 60; // 8 horas en minutos
    int diferencia = minutosTrabajados - jornada;

    if (diferencia > 0) {
        cout << "Trabajaste " << diferencia << " minuto(s) extra." << endl;
    } else if (diferencia < 0) {
        cout << "Debes " << -diferencia << " minuto(s) a la empresa." << endl;
    } else {
        cout << "Has trabajado exactamente la jornada laboral." << endl;
    }
}

int main() {
    int minutos;

    cout << "Ingrese el tiempo trabajado en minutos: ";
    cin >> minutos;

    calcularTiempo(minutos);

    return 0;
}
