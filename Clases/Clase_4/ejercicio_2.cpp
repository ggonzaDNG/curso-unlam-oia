#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

/*
 Se le pide al usuario que ingrese una palabra. 
 El programa deberá indicar si la misma es un palíndromo
*/

bool es_palindromo(string& str) { // creo 2 representaciones de la string en vector, uno lo reordeno al reves y verifico si es igual al original
    vector<char> original(str.begin(), str.end());
    vector<char> invertido = original;
    reverse(invertido.begin(), invertido.end());
    return original == invertido;
}

int main() {
    string palabra;
    cout << "Ingresa una palabra: ";
    cin >> palabra;

    if(es_palindromo(palabra)) {
        cout << "Tu palabra es un palíndromo." << endl;
    } else {
        cout << "Tu palabra no es un palíndromo." << endl;
    }

    return 0;
}