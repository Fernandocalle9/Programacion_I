//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:28/08725
//Numero de ejercicio :10
#include <iostream>
using namespace std;
int main ()
{

    int nota;
    cout << "Ingrese la nota (0-100): ";
    cin >> nota;

    if (nota >= 51) {
        if (nota < 60)
            cout << "Calificacion = C\n";
        else if (nota < 70)
            cout << "Calificacion = C+\n";
        else if (nota < 80)
            cout << "Calificacion = B\n";
        else if (nota < 90)
            cout << "Calificacion = B+\n";
        else if (nota < 95)
            cout << "Calificacion = A\n";
        else
            cout << "Calificacion = A+\n";
    } else {
        cout << "Reprobado\n";
    }
    return 0;
}