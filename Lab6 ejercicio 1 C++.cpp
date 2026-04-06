#include <iostream>

using namespace std;

int main() {
    int opcion;

    cout << "Seleccione tipo de usuario:\n";
    cout << "1. Administrador\n";
    cout << "2. Cliente\n";
    cout << "3. Invitado\n";
    cout << "Ingrese opcion: ";
    cin >> opcion;

    // Se agrega la estructura switch para evaluar la opción ingresada
    switch (opcion) {
        case 1:
            cout << "Acceso total al sistema" << endl;
            break;

        case 2:
            cout << "Acceso limitado a compras" << endl;
            break;

        case 3:
            cout << "Acceso solo a visualizacion" << endl;
            break;

        default:
            cout << "Opcion invalida" << endl;
            break;
    }

    return 0; // Se completa el 'return 0' que estaba cortado en la foto
}
