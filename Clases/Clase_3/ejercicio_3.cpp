#include <iostream>
#include <string>

using namespace std;

// Ejercicio 3

/*
 Escribir un programa que le solicite al usuario el ingreso por consola de una letra mayúscula.
 El programa Deberá escribir por pantalla el nombre de una localidad de Gran Buenos Aires Oeste que comience con esa letra.
 Si no existe una localidad del oeste con esa letra, debe mostrar el mensaje indicando esta situación.

*/

int main() {
    bool encontrado = false;
    
    string localidades[] = {
        "Moron",
        "Tres de Febrero",
        "La Matanza",
        "Merlo",
        "Moreno",
        "Polvorines",
        "San Miguel",
        "Bella Vista",
        "Hurlingham",
        "Leloir",
        "Ituzaingo",
        "Haedo",
        "Ramos Mejía",
        "Ciudadela",
        "Laferre"
    };

    char caracter;

    cout << "Ingrese un caracter y, si existe, se imprimirá ua localidad de GBA Oeste que empiece con ese caracter: " << endl;

    cin >> caracter;

    caracter = toupper(caracter);

    for (auto localidad : localidades) {
       if (caracter == localidad[0]) {
        cout << localidad << endl;
        encontrado = true;
       }
    }
    
    if (!encontrado) {
        cout << "No existen localidades que empiecen con esa letra." << endl;
    }
    
    return 0;
    
}