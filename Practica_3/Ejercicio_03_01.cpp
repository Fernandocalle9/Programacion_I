//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:11/09/25
//Numero de ejercicio :1
#include <iostream>
using namespace std;

// Función que determina y muestra si un número es par o impar
void parOimpar(int numero) {
    if (numero % 2 == 0) {
        cout << numero << " es PAR" << endl;
    } else {
        cout << numero << " es IMPAR" << endl;
    }
}

int main() {
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    // Llamamos a la función
    parOimpar(num);

    return 0;
}
