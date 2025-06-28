#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*
 Pedirle al usuario que ingrese dos palabras. Contar la cantidad de letras que se repiten en ambas. 
 Mostrar por pantalla la cantidad de letras repetidas y cuáles son.
*/

int main() {
    string palabra1, palabra2;

    cout << "Ingresa la primera palabra: ";
    cin >> palabra1;

    cout << "Ingresa la segunda palabra: ";
    cin >> palabra2;

    vector<char> letras1, letras2;

    for (char c : palabra1) {
        if (find(letras1.begin(), letras1.end(), c) == letras1.end()) {
            letras1.push_back(c);
        }
    }

    for (char c : palabra2) {
        if (find(letras2.begin(), letras2.end(), c) == letras2.end()) {
            letras2.push_back(c);
        }
    }

    vector<char> letrasRepetidas;

    for (char c : letras1) {
        if (find(letras2.begin(), letras2.end(), c) != letras2.end()) {
            letrasRepetidas.push_back(c);
        }
    }

    cout << "Cantidad de letras repetidas: " << letrasRepetidas.size() << endl;
    cout << "Letras repetidas: ";
    for (char c : letrasRepetidas) {
        cout << c << " ";
    }
    cout << endl;

    return 0;

}