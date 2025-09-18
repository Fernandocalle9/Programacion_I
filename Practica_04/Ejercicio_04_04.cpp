//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:18/09/25
//Numero de ejercicio :4
#include <iostream>
using namespace std;

// Función para convertir Celsius a Fahrenheit
double ConvertirCelsiusAFahrenheit(double celsius) {
    double fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

// Función para obtener la mayor temperatura
double MayorTemperatura(double temp1, double temp2) {
    if (temp1 > temp2) {
        return temp1;
    } else {
        return temp2;
    }
}

int main() {
    double c1, c2;

    cout << "Ingrese la primera temperatura en Celsius: ";
    cin >> c1;

    cout << "Ingrese la segunda temperatura en Celsius: ";
    cin >> c2;

    
    double f1 = ConvertirCelsiusAFahrenheit(c1);
    double f2 = ConvertirCelsiusAFahrenheit(c2);

    cout << c1 << " Celsius = " << f1 << " Fahrenheit" << endl;
    cout << c2 << " Celsius = " << f2 << " Fahrenheit" << endl;


    double mayor = MayorTemperatura(c1, c2);
    cout << "La mayor temperatura en Celsius es: " << mayor << endl;

    return 0;
}
