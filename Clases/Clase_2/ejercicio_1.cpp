#include <iostream>

using namespace std;

// Ejercicio 1

/*
 Pasar a binario los siguientes números decimales: 313, 833, 127 y 95.
*/

int main() {
    int numeros[4] = {313, 833, 127, 95};
    int tamaño = 4; // esto indica el tamaño del array
    
    for (int i = 0; i < tamaño; i++) { // recorro numeros[] para crear la representación binaria de cada numero
        int n = numeros[i]; 
        int bits[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // creo un array con 10 bits, puedo representar hasta 1024

        for (int j = 9; j >= 0; j--) {
            bits[j] = n % 2; // por cada uno de los 10 bits en bits[] hago una división por 2 
                            // y asigno el resto (que al dividir por dos será siempre 0 o 1) al bit que se estaba iterando
            n = n / 2; // divido el numero por 2 hasta que termine de iterar por los 10 bits
        }

        cout << "Número binario de " << numeros[i] << ": ";
        for (int j = 0; j < 10; j++) {
            cout << bits[j]; // itero para imprimir cada bit
        }
        cout << endl;
    }

    return 0;
    
}