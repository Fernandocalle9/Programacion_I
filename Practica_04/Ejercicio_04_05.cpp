//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:18/09/25
//Numero de ejercicio :5
#include <iostream>
using namespace std;


double CalcularSalario(double horas, double tarifa, double &bonificacion) {
    double salario;

    if (horas <= 8) {
        salario = horas * tarifa;
        bonificacion = 0;
    } else {
        salario = 8 * tarifa;                 
        double horasExtra = horas - 8;        
        bonificacion = horasExtra * tarifa * 1.5; 
        salario = salario + bonificacion;  
    }

    return salario;
}

int main() {
    double horasTrabajadas, tarifaHora, bonificacion;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;

    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifaHora;

   
    double salario = CalcularSalario(horasTrabajadas, tarifaHora, bonificacion);

    cout << "Salario total: " << salario << endl;

    if (bonificacion > 0) {
        cout << "Bonificacion por horas extra: " << bonificacion << endl;
    }

    return 0;
}
