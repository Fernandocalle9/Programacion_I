//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:11/09/25
//Numero de ejercicio :4
#include <iostream>
using namespace std;

// Función que calcula el IMC
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

int main() {
    float peso, altura, imc;

    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;

    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    // Llamamos a la función
    imc = calcularIMC(peso, altura);

    cout << "Su IMC es: " << imc << endl;

    // Clasificación simple del IMC
    if (imc < 18.5) {
        cout << "Clasificacion: Bajo peso" << endl;
    } else if (imc < 25) {
        cout << "Clasificacion: Normal" << endl;
    } else if (imc < 30) {
        cout << "Clasificacion: Sobrepeso" << endl;
    } else {
        cout << "Clasificacion: Obesidad" << endl;
    }

    return 0;
}