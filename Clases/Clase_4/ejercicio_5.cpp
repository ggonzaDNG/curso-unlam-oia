#include <iostream>
#include <vector>

using namespace std;

/*
 El usuario deberá ingresar 10 números enteros positivos por teclado. 
 Luego se le pedirá que ingrese un número adicional (entero positivo también). 
 El programa deberá mostrar por pantalla la cantidad de veces que se encuentra el último número entre los 10 anteriores.
*/

int main() {
    vector<int> numeros;
    int numero;

    cout << "Ingresa 10 números enteros positivos:\n";

    for (int i = 0; i < 10; i++) {
            cout << "Número " << i + 1 << ": ";
            cin >> numero;
        numeros.push_back(numero);
    }

    cout << "Ingresa un número entero positivo adicional: ";
    cin >> numero;

    int contador = 0;
    for (int i = 0; i < 10; i++) {
        if (numeros[i] == numero) {
            contador++;
        }
    }

    cout << "El número " << numero << " aparece " << contador << " veces.";

    return 0;

}
