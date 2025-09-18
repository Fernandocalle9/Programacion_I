//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:18/09/25
//Numero de ejercicio :6
#include <iostream>
using namespace std;


int SumarDigitosDistintosDeCero(int numero) {
    int suma = 0;
    while (numero > 0) {
        int digito = numero % 10; 
        if (digito != 0) {
            suma = suma + digito; 
        }
        numero = numero / 10; 
    }
    return suma;
}


int EsPrimo(int numero) {
    if (numero <= 1) {
        return 0; 
    }
    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    int suma = SumarDigitosDistintosDeCero(numero);
    cout << "Suma de digitos distintos de cero: " << suma << endl;

    if (EsPrimo(suma)) {
        cout << "La suma es un numero primo!" << endl;
    } else {
        cout << "La suma NO es un numero primo." << endl;
    }

    return 0;
}
