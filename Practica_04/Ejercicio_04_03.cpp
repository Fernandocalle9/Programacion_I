//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:18/09/25
//Numero de ejercicio :3
#include <iostream>
using namespace std;


void ModificarValores(int valor, int &referencia) {
    valor = valor * 2;       
    referencia = referencia + 10;  

    
    cout << "Dentro de la funcion: valor = " << valor << ", referencia = " << referencia << endl;
}

int main() {
    int a, b;

    cout << "Ingrese un numero para valor: ";
    cin >> a;
    cout << "Ingrese un numero para referencia: ";
    cin >> b;

    cout << "Antes de llamar a la funcion: a = " << a << ", b = " << b << endl;

    ModificarValores(a, b);

    cout << "Despues de llamar a la funcion: a = " << a << ", b = " << b << endl;

    return 0;
}
