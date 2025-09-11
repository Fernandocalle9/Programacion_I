//Materia:Programacion I Paralelo 4
//Autor:Fernando Antonio Calle Quispe 
//Carnet:12573205 L.P.
//Carrera del estudiante: Ingenieria Mecatronica
// Fecha de creacion:11/09/25
//Numero de ejercicio :7
#include <iostream>
#include <cstdlib>  // para rand() y srand()
#include <ctime>    // para time()
using namespace std;

// Función para generar un número aleatorio en un rango
int numeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Función principal del ejercicio
void generarAlumnos(int N) {
    int edad, sumaEdades = 0, mayores18 = 0;
    int altura, sumaAlturas = 0, masAltos175 = 0;

    for (int i = 1; i <= N; i++) {
        edad = numeroAleatorio(1, 35);
        altura = numeroAleatorio(120, 200);

        cout << "Alumno " << i << ": Edad = " << edad << " anios, Altura = " << altura << " cm" << endl;

        sumaEdades += edad;
        sumaAlturas += altura;

        if (edad > 18) {
            mayores18++;
        }
        if (altura > 175) {
            masAltos175++;
        }
    }

    cout << "\nEdad media: " << (float)sumaEdades / N << " anios" << endl;
    cout << "Altura media: " << (float)sumaAlturas / N << " cm" << endl;
    cout << "Cantidad de alumnos mayores de 18: " << mayores18 << endl;
    cout << "Cantidad de alumnos con altura > 175 cm: " << masAltos175 << endl;
}

int main() {
    srand(time(0)); // inicializar números aleatorios con la hora del sistema

    int N;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> N;

    generarAlumnos(N);

    return 0;
}
