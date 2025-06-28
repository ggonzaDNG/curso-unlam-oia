#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string invertir_string(string& str) {
    vector<char> copia(str.begin(), str.end());
    reverse(copia.begin(), copia.end());
    string palabra_invertida(copia.begin(), copia.end());
    return palabra_invertida;
}

int main() {
    string palabra;

    cout << "Ingresa una palabra: ";
    cin >> palabra;

    string palabra_invertida = invertir_string(palabra);

    cout << "Tu palabra invertida es: " << palabra_invertida << endl;

    return 0;

}