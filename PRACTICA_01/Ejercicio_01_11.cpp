//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:28/08725
//Numero de ejercicio :11
#include <iostream>
using namespace std;
int main() 
{
    int mes;
    cout << "Ingrese un numero del 1 al 12: ";
    cin >> mes;

    switch(mes) { // esta funcion sirve para que se pueda tomar decisiones cuando una variable puede tener muchos valores posibles
        case 1: cout << "Enero"; break;
        case 2: cout << "Febrero"; break;
        case 3: cout << "Marzo"; break;
        case 4: cout << "Abril"; break;
        case 5: cout << "Mayo"; break;
        case 6: cout << "Junio"; break;
        case 7: cout << "Julio"; break;
        case 8: cout << "Agosto"; break;
        case 9: cout << "Septiembre"; break;
        case 10: cout << "Octubre"; break;
        case 11: cout << "Noviembre"; break;
        case 12: cout << "Diciembre"; break;
        default: cout << "Mes invalido"; //Sirve para imprimir cualquier opcion fuera de los casos
    }

    return 0;
}