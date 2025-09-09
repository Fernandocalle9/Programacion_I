//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:09/09/25
//Numero de ejercicio :4
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int secreto, intento, entrada;
    int minimo = 0, maximo = 50;

    srand(time(0));
    secreto = rand() % 51;

    cout << "Estoy pensando un numero entre 0 y 50" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "Intento " << i << endl;
        cout << "? ";
        cin >> entrada;

        if (entrada == secreto) {
            cout << "Felicitaciones... Adivinaste el numero" << endl;
            return 0;
        } else if (entrada < secreto) {
            minimo = entrada;
        } else {
            maximo = entrada;
        }

        cout << "El numero esta entre " << minimo << " y " << maximo << endl;
    }

    cout << "Lo siento, no adivinaste el numero. Era: " << secreto << endl;

    return 0;
}
