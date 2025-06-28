#include <iostream>
#include <vector>

using namespace std;

/*
 Pedirle al usuario que escriba una palabra. 
 El programa deberá indicar cuántas vocales tiene (puede ser mayúscula o minúscula).
*/

int cantidad_de_vocales(string& str) {
    int cantidad_vocales;
    vector<char> copia(str.begin(), str.end());
    for (int i = 0; i<=copia.size(); i++) {
        if (copia[i] == 'a' || copia[i] == 'A' || 
            copia[i] == 'e' || copia[i] == 'E' || 
            copia[i] == 'i' || copia[i] == 'I' || 
            copia[i] == 'o' || copia[i] == 'O' ||
            copia[i] == 'u' || copia[i] == 'U' ) {
            cantidad_vocales++;
        }
    }

    return cantidad_vocales;
}


int main() {
    string palabra;

    cout << "Ingresa una palabra: ";
    cin >> palabra;
    int vocales = cantidad_de_vocales(palabra);
    cout << "Tu palabra tiene la siguiente cantidad de vocales: " << vocales << endl;

    return 0;

}