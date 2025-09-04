//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:04/09/25
//Numero de ejercicio :18
#include <iostream>
using namespace std;

int main() {
    int contador = 0;  
    int numero = 2;    

    cout << "Los primeros 100 numeros primos son:\n";

    while (contador < 100) {  
        int esPrimo = 1;  
        for (int i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                esPrimo = 0; 
            }
        }

        if (esPrimo == 1) {
            cout << numero << " ";
            contador++;  
        }

        numero++;  
    }

    cout << endl;
    return 0;
}