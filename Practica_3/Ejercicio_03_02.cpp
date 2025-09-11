//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:11/09/25
//Numero de ejercicio :2
#include <iostream>
using namespace std;

// Función que convierte Celsius a Fahrenheit
float convertirCelsiusAFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius, fahrenheit;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    // Llamamos a la función
    fahrenheit = convertirCelsiusAFahrenheit(celsius);

    cout << celsius << " grados celsius equivalen a " << fahrenheit << " grados Fahrenheit" << endl;

    return 0;
}