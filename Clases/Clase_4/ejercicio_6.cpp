#include <iostream>
#include <vector>

using namespace std;

/*
 Punto 5 de tarea en el Discord.
 https://discord.com/channels/1364627497425178654/1371467746184925297/1378785111478370374
*/

int main() {
    vector<int> numeros;
    int numero;

    cout << "Ingresa números enteros positivos uno por uno.\n";
    cout << "Para finalizar la carga, ingresa un número negativo.\n";

    while ((int)numeros.size() < 40) {
        cout << "Número " << numeros.size() + 1 << ": ";
        cin >> numero;

        if (numero < 0) {
            break;
        }
        if (numero == 0) {
            cout << "Por favor, ingresa un número entero positivo.\n";
            continue;
        numeros.push_back(numero);
    }

    if (numeros.empty()) {
        cout << "No ingresó ningún número positivo. Fin del programa.\n";
        return 0;
    }

    int cantidad = numeros.size();

    cout << "\nNúmeros ingresados: " << cantidad << endl;

    if (cantidad < 10) {
        cout << "Mostrando todos los números:\n";
        for (int n : numeros) {
            cout << n << " ";
        }
    } else if (cantidad <= 19) {
        cout << "Mostrando números divisibles por 2:\n";
        for (int n : numeros) {
            if (n % 2 == 0) cout << n << " ";
        }
    } else if (cantidad <= 29) {
        cout << "Mostrando números divisibles por 3:\n";
        for (int n : numeros) {
            if (n % 3 == 0) cout << n << " ";
        }
    } else if (cantidad <= 39) {
        cout << "Mostrando números divisibles por 4:\n";
        for (int n : numeros) {
            if (n % 4 == 0) cout << n << " ";
        }
    } else {
        cout << "Mostrando números en posiciones impares:\n";
        for (int i = 1; i < cantidad; i += 2) {
            cout << numeros[i] << " ";
        }
    }
    cout << endl;

    }

    return 0;

}