#include <iostream>

using namespace std;

// Ejercicio 5

/*
 Escribir un programa que le pida al usuario el ingreso de números enteros (se piden de a uno). 
 El programa finaliza cuando el usuario ingresa un 0. 
 La idea es que luego del ingreso de cada número se muestre por pantalla la suma total acumulada de los números que ingresó previamente.
*/

int main() {
    int numero = 0, suma = 0, aux;
    bool first_time = true;

    while (true) {
    cout << "Ingrese un número: "; cin >> numero;

    if (numero == 0 && !first_time) { break; }; 

    cout << "La suma da: " << numero + suma << endl;
    aux = numero + suma;
    suma = aux;
    
    if (first_time) { first_time = false; };
    }

    return 0;
}