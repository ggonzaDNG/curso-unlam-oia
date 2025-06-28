#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    struct persona {
        string nombre;
        string apellido;
        char letra_fav;
        int edad;
        int meses;
        int dias;
    }

    ifstream infile("/persona.txt");
    for (string linea; getline(infile, linea)) {
        cout << linea;
    }
    
    return 0;

}