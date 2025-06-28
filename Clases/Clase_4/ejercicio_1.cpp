#include <iostream>
#include <vector>

using namespace std;

// Ejercicio 1

/*
 Programa que pregunte la cantidad de estudiantes en un aula, su edad e imprimir la mayor y menor edad
*/

int main() {
    int cantidad_estudiantes, edadaux, edadaux2, edadaux3;

    vector <int> edad_estudiantes = {};

    cout << "Ingrese la cantidad de estudiantes: "; cin >> cantidad_estudiantes;

    for (int i = 0; i < cantidad_estudiantes; i++) {
        cout << "Ingrese su edad: "; cin >> edadaux;
        edad_estudiantes.push_back(edadaux);
    }

    edadaux2 = edad_estudiantes[0];
    for (int j = 0; j <= cantidad_estudiantes-1; j++) {
        if (edad_estudiantes[j] > edadaux2) {
            edadaux2 = edad_estudiantes[j];
        }
    }

    edadaux3 = edad_estudiantes[0];
    for (int k = 0; k <= cantidad_estudiantes-1; k++){
        if (edad_estudiantes[k] < edadaux3) {
            edadaux3 = edad_estudiantes[k];
        }
    }

    cout << "El estudiante de mayor edad es: " << edadaux2 << endl;
    cout << "El estudiante de menor edad es: " << edadaux3;

    return 0;

}