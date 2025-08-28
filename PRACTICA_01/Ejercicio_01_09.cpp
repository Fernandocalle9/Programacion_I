//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:28/08725
//Numero de ejercicio :9
#include <iostream>
using namespace std;
int main ()
{
int edad;
cout<<"ingrese tu edad";
cin>> edad;
if (edad<18)
cout<<"menor de edad"<<endl;
 else if (edad<65)
 cout<<"es adulto"<<endl;
 else 
 cout<< " es adulto mayor"<<endl;


    return 0;
}