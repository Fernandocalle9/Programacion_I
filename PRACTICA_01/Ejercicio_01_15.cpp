//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:28/08725
//Numero de ejercicio :15
#include <iostream>
using namespace std;

int main()
 {
    int N;
    float nota, suma = 0;

    cout << "Ingrese cuantas notas va a ingresar: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        suma += nota;
    }

    float promedio = suma / N;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}