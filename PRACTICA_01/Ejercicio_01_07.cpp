//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:28/08725
//Numero de ejercicio :7
#include <iostream>
using namespace std;

int main() 
{
    char letra;

    cout << "Ingrese un caracter: ";
    cin >> letra;

    // Comprobamos si es una letra
    if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z')) {
        // Convertimos a minúscula manualmente si es mayúscula
        if (letra >= 'A' && letra <= 'Z') {
            letra = letra + 32;
        }

        // Verificamos si es vocal
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            cout << "Es una vocal." << endl;
        } else {
            cout << "Es una consonante." << endl;
        }
    } else {
        cout << "Es un caracter especial." << endl;
    }
    return 0;
}