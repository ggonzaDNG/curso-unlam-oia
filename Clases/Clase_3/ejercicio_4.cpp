#include <iostream>

using namespace std;

// Ejercicio 4

/*
 Escribir un programa que le pida al usuario el ingreso de un número entero positivo (1<=numero<=50).
 Mostrar por pantalla la tabla de multiplicar del 1 al 10 inclusive de ese número.
 Por ejemplo: si el usuario ingresa 5, por pantalla se visualizará: 5, 10, 15, 20, 25, 30, 35, 40, 45, 50.
*/

int main() {
    int numero;

    cout << "Ingresa un número entre 1 y 50: "; cin >> numero;

    if (numero<=50 && numero>=1) {
        for (int i = 1; i <= 10; i++) {
            int tabla = numero*i;
            cout << tabla << endl;
        }
    } else {
        cout << "El número ingresado está fuera del rango.";
    }

    return 0;
    
}