//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:11/09/25
//Numero de ejercicio :6
#include <iostream>
using namespace std;

// Función que determina si un año es bisiesto (devuelve 1 si lo es, 0 si no)
int esBisiesto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1; // bisiesto
    } else {
        return 0; // no bisiesto
    }
}

// Función que muestra cuántos días tiene un mes
void diasDelMes(int ano, int mes) {
    int dias;

    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias = 31;
            break;
        case 4: case 6: case 9: case 11:
            dias = 30;
            break;
        case 2:
            if (esBisiesto(ano) == 1)
                dias = 29;
            else
                dias = 28;
            break;
        default:
            cout << "Mes invalido!" << endl;
            return; // salimos de la función
    }

    cout << "El mes " << mes << " del anio " << ano << " tiene " << dias << " dias." << endl;
}

int main() {
    int ano, mes;

    cout << "Ingrese un ano: ";
    cin >> ano;
    cout << "Ingrese un mes (1-12): ";
    cin >> mes;

    diasDelMes(ano, mes); // llamamos a la función

    return 0;
}
