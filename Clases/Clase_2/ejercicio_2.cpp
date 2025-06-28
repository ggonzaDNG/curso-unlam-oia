#include <iostream>

using namespace std;

// Ejercicio 2

/*
 Escribir un programa que le pida al usuario el ingreso de una edad por pantalla.
 Si la edad es mayor o igual a 16 años mostrar por pantalla que se encuentra habilitado para votar.
 Sino indicar cuántos años le faltan para poder votar.
*/

int main() {
    int edad;
    
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 16) {
        cout << "Usted podrá votar";
    } else if (edad < 16) {
        cout << "Usted podrá votar dentro de " << 16 - edad << " años." << endl;
    }

    return 0;
    
}
