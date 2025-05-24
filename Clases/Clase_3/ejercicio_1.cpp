#include <iostream>

using namespace std;

// Ejercicio 1

/*
 Pedir al user que ingrese un número a y un número b.
 a será siempre menor a b.
 Imprimir todos los números comprendidos entre a y b (ambos incluidos).
 Si en algún momento aparece el 5, romper el bucle y terminar el programa.
*/

int main() {
    int a, b;

    cout << "Ingrese el numero a: "; cin >> a;
    cout << "Ingrese el numero b: "; cin >> b;

    for (int i = a; i <= b; i++) {
        int numero_entre_a_y_b = i; // para que sea más legible
        cout << numero_entre_a_y_b << endl;

        if (numero_entre_a_y_b == 5) {
            break;
        }
    }

    return 0;
}