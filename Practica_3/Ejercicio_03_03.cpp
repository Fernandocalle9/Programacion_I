//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:11/09/25
//Numero de ejercicio :3
#include <iostream>
using namespace std;

// Función que determina si un número es capicúa
void esCapicua(int numero) {
    int original = numero;
    int invertido = 0;

    while (numero > 0) {
        int digito = numero % 10;          // Tomamos el último dígito
        invertido = invertido * 10 + digito; // Formamos el número invertido
        numero = numero / 10;              // Quitamos el último dígito
    }

    if (original == invertido) {
        cout << original << " es CAPICUA" << endl;
    } else {
        cout << original << " NO es CAPICUA" << endl;
    }
}

int main() {
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    esCapicua(num); // Llamamos a la función

    return 0;
}
