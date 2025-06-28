#include <iostream>

using namespace std;

int main() {
    int x, y;

    cout << "Ingresa la coordenada x: "; cin >> x;
    cout << "Ingresa la coordenada y: "; cin >> y;

    if ((0<x && x<732) && y<232) {
        cout << "Gol";
    } else if ((x == 732 || x == 0) && y<=232) { //palos y angulos
        cout << "Palo";
    } else if ((0<x && x<732) && y == 232) { //travesaño
        cout << "Palo";
    } else {
        cout << "Afuera";
    }

    return 0;

}