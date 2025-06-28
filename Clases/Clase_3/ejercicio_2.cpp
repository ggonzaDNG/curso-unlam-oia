#include <iostream>

using namespace std;

// Ejercicio 2

/*
 Escribir un programa que simule una "calculadora reducida".
 El usuario deberá ingresar dos números y la operación que desea realizar (suma= +, resta = -, multiplicación = *, división = / ).
 Debemos mostrar el resultado por pantalla.
*/

int main() {
    int num1, num2;
    char operacion;

    cout << "Ingrese el primer numero: "; cin >> num1;
    cout << "Ingrese el segundo numero: "; cin >> num2;
    cout << "Ingrese la operacion que desea realizar (+, -, *, /): "; cin >> operacion;

    switch (operacion) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "No se puede dividir por 0." << endl;
                break;
            }
            cout << num1 / num2 << endl;
            break;
        default:
            cout << "Operacion no reconocida." << endl;
            break;
    }

    return 0;
    
}