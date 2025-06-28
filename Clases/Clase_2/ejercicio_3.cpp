#include <iostream>

using namespace std;

// Ejercicio 3

/*
 Escribir un programa que le pida al usuario el ingreso de 3 letras.
 Mostrar por pantalla cualquier palabra (inventada) que se forme usando esas 3 letras.
*/

int main() {
    char letra1, letra2, letra3;

    cout << "Ingrese la primera letra: ";
    cin >> letra1;
    cout << "Ingrese la segunda letra: ";
    cin >> letra2;
    cout << "Ingrese la tercera letra: ";
    cin >> letra3;

    cout << letra1 << letra2 << letra3 << endl;
    cout << letra1 << letra3 << letra2 << endl;
    cout << letra2 << letra1 << letra3 << endl;
    cout << letra2 << letra3 << letra1 << endl;
    cout << letra3 << letra1 << letra2 << endl;
    cout << letra3 << letra2 << letra1 << endl;

    return 0;

}