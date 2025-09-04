//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:04/09/25
//Numero de ejercicio :24
#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
    
        cout << "\n--- MENU ---\n";
        cout << "1. Opcion 1\n";
        cout << "2. Opcion 2\n";
        cout << "3. Opcion 3\n";
        cout << "0. Salir\n";
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "Has seleccionado la Opcion 1.\n";
                break;
            case 2:
                cout << "Has seleccionado la Opcion 2.\n";
                break;
            case 3:
                cout << "Has seleccionado la Opcion 3.\n";
                break;
            case 0:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
        }

    } while (opcion != 0); 

    return 0;
}