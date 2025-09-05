#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

/*
 Escribir un programa que lea del archivo "ejercicio1in.txt" tres números enteros. 
 El programa debe generar un archivo "ejercicio1out.txt" con los tres números ordenados de menor a mayor.
*/

int main() {
    int num;

    ifstream file("ejercicio1in.txt");
    ofstream fileOut("ejercicio1out.txt");
    string str;
    vector <int> numeros;

    while (file >> str) {
        istringstream iss(str);

        while (iss >> num) {
            numeros.push_back(num);
        }

        sort(numeros.begin(), numeros.end()); // sorteo de menor a mayor
    }

    for (int j : numeros) {
            cout << j << ' '; // imprimo en la consola 
    }
    
    for (int k = 0; k < numeros.size(); k++) {
        fileOut << numeros[k] << ' '; // escribo al archivo de salida
    }

    return 0;

}