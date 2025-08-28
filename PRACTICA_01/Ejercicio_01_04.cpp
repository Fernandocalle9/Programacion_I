//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:28/08725
//Numero de ejercicio :4
#include <iostream>
#include<cmath>
using namespace std;
int main ()
{
 float radio =0;
 cout<<"ingrese el radio de una esfera:";
 cin>>radio;
 float volumen = (4.0/3.0)*3.1416* pow(radio,3); 
cout<<"el volumen de una esfera es:"<<volumen<<endl;
    return 0;
}