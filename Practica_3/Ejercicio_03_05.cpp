//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:11/09/25
//Numero de ejercicio :5
#include <iostream>
#include <cstdlib>  // para rand() y srand()
#include <ctime>    // para time()
using namespace std;

// Función para generar un número aleatorio en un rango
int numeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Función que calcula el promedio ponderado
double promedioPonderado() {
    int calificaciones[4];
    int pesos[4] = {10, 20, 30, 40};
    int sumaPesos = 0;
    double sumaProductos = 0;

    // Generar calificaciones aleatorias y mostrar
    for (int i = 0; i < 4; i++) {
        calificaciones[i] = numeroAleatorio(1, 100);
        cout << "Calificacion " << i+1 << ": " << calificaciones[i] << " Peso: " << pesos[i] << endl;
        sumaProductos += calificaciones[i] * pesos[i];
        sumaPesos += pesos[i];
    }

    return sumaProductos / sumaPesos;
}

int main() {
    srand(time(0)); // inicializar aleatorios

    double promedio = promedioPonderado();

    cout << "\nPromedio ponderado: " << promedio << endl;

    return 0;
}
