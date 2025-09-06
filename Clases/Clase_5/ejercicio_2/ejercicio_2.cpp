#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

/*
 Escribir un programa que le pregunte al usuario por teclado cuántas personas P desea ingresar (1<=P<=500 --> esto quiere decir que mínimamente se ingresa 1 persona y como máximo 500). 
 Luego se leerán P líneas donde cada una contendrá el nombre y el apellido de esa persona separadas por un espacio (1 única palabra para el nombre y 1 única palabra para el apellido). 
 Deberán calcular quién es la persona que tiene el nombre más largo en cuánto a cantidad de letras y generar el archivo "ejercicio2.txt" con el apellido de esa persona. 
 En caso de empate, deberán mostrar todos los apellidos que cumplan con la condición.
*/

int main() {
    int P, maxLongitud = 0;    

    cout << "Ingresar la cantidad de personas (1 <= P <= 500): ";
    cin >> P;
    vector<string> nombres(P), apellidos(P);

    for (int i = 0; i < P; i++) {
        cout << "Ingresar nombre y apellido de la persona " << i + 1 << ": ";
        cin >> nombres[i] >> apellidos[i];
        int longitud = nombres[i].size();
        if (longitud > maxLongitud) {
            maxLongitud = longitud;
        }
    }

    ofstream archivo("ejercicio2.txt");

    cout << "\nApellido(s) de la(s) persona(s) con el nombre más largo:\n";
    for (int i = 0; i < P; i++) {
        if (nombres[i].size() == maxLongitud) { // itero en todos los nombres que tengan la misma cantidad de caracteres, si hay match se guarda e imprime el apellido
            archivo << apellidos[i] << endl;
            cout << apellidos[i] << endl; // tambien imprimo
        }
    }

    archivo.close();

    return 0;
}
