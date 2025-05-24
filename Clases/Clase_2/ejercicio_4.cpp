#include <iostream>

using namespace std;

// Ejercicio 4

/*
 Juan y María están jugando al "Piedra, Papel o Tijera" (si no conocen el juego lo pueden Googlear 🙃).
 Asumiendo que 'X' = piedra; 'P' = papel y 'T' = tijera,
 escribir un programa que indique quién fue el ganador (pueden hacer el ingreso de datos como quieran).
*/


int main() {
    char juan, maria;

    cout << "Piedra (X), Papel (P) o Tijera (T)" << endl;
    cout << "Juan, ingresa tu jugada: "; cin >> juan;
    cout << "Maria, ingresa tu jugada: "; cin >> maria;

    toupper(juan);
    toupper(maria);

    if (juan == maria) {
        cout << "Empate" << endl;
    } else if (
        (juan == 'X' && maria == 'T') || (juan == 'T' && maria == 'P') || (juan == 'P' && maria == 'X')
    ) {
        cout << "Gana Juan" << endl;
    } else {
        cout << "Gana Maria" << endl;
    }
    
    return 0;
}