#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x, sumaCosh = 0;
    int n;

    cout << "Ingrese x: ";
    cin >> x;
    cout << "Ingrese n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        double numerador = 1, denominador = 1;
        int exp = 2 * i;

        // Calculamos potencia y factorial en un solo paso
        for (int j = 1; j <= exp; j++) {
            numerador *= x;   // Multiplica x repetidamente
            denominador *= j; // Multiplica 1*2*3... hasta llegar al exponente
        }

        sumaCosh += (numerador / denominador);
    }

    cout << fixed << setprecision(2);
    cout << "\nResultado: " << sumaCosh << endl;

    return 0;
}

