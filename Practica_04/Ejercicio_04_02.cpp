//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:18/09/25
//Numero de ejercicio :2
#include <iostream>
#include <cmath>  // Para usar M_PI (valor de π)
using namespace std;

// Función que calcula el volumen de un cilindro
double CalcularVolumen(double radio, double altura = 10) {
    double volumen = M_PI * radio * radio * altura;  // V = π * r^2 * h
    return volumen;
}

int main() {
    double r, h;

    cout << "Ingrese el radio del cilindro: ";
    cin >> r;

    cout << "Ingrese la altura del cilindro (opcional, si no ingresa se usara 10): ";
    cin >> h;

    
    double volumen1 = CalcularVolumen(r, h);
    cout << "Volumen del cilindro con altura " << h << " = " << volumen1 << endl;

    
    double volumen2 = CalcularVolumen(r);
    cout << "Volumen del cilindro con altura por defecto (10) = " << volumen2 << endl;

    return 0;
}
