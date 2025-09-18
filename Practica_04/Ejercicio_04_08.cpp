//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:18/09/25
//Numero de ejercicio :8
#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
using namespace std;

int main() {
    int n;
    double precio, totalVentas = 0, iva, descuento;

    cout << "Ingrese la cantidad de productos vendidos en el dia: ";
    cin >> n;

    
    srand(time(0));

    for (int i = 1; i <= n; i++) {
       
        precio = 20 + rand() % 31; 

        
        precio = precio * 1.13;

        totalVentas += precio;

        cout << "Producto " << i << " precio con IVA: " << precio << endl;
    }

    
    descuento = 0;
    if (totalVentas > 2500) {
        descuento = totalVentas * 0.05;
        totalVentas -= descuento;
    }

    
    iva = totalVentas / 1.13 * 0.13;

    cout << "-----------------------------------" << endl;
    cout << "Total ventas del dia: " << totalVentas << endl;
    if (descuento > 0) {
        cout << "Descuento aplicado: " << descuento << endl;
    }
    cout << "Pago del IVA al Servicio de Impuestos Nacionales: " << iva << endl;

    return 0;
}
