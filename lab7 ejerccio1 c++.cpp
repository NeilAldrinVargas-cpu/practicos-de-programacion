#include <iostream>

using namespace std;

int main() {
    int n;
    // 1. Inicializar la suma en 0
    float sumatotal = 0;

    cout << "Ingrese la cantidad de terminos a generar: ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor, ingrese un numero mayor a 0." << endl;
        return 0;
    }

    long a = 0, b = 1, temp;
    int denominador = 1;

    cout << "Serie S = ";

    for (int i = 0; i < n; i++) {
        cout << a << "/" << denominador;


        sumatotal +=(float) a / denominador;

        if (i < n - 1) {
            cout << " + ";
        }

        temp = a + b;
        a = b;
        b = temp;


        denominador += 2;
    }

    cout << " ..." << endl;

    // Mostrar el resultado final después de completar el ciclo
    cout << "La suma total es: " << sumatotal << endl;

    return 0;
}
