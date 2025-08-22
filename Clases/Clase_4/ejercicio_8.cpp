#include <iostream>
#include <vector>

using namespace std;

/*
 Pedirle al usuario que indique cuántos números desea ingresar.
 Luego leer de teclado esa cantidad de números.
 Al finalizar la lectura, el programa deberá mostrar por pantalla la cantidad de números consecutivos encontrados en dos posiciones continuas.
*/


int main() {
    int cantidad;

    cout << "¿Cuántos números deseas ingresar? ";
    cin >> cantidad;

    vector<int> numeros(cantidad);

    cout << "Ingresa " << cantidad << " números:\n";
    for (int i = 0; i < cantidad; i++) {
        cin >> numeros[i];
    }

    int consecutivos = 0;

    for (int i = 0; i < cantidad - 1; i++) {
        if (numeros[i + 1] == numeros[i] + 1) {
            consecutivos++;
        }
    }

    cout << "Cantidad de números consecutivos en posiciones contiguas: " << consecutivos << endl;

    return 0;
}