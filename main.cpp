#include "Seguridad.h"
#include "Menu.h"
#include "Usuario.h"
#include <iostream>
using namespace std;

int main() {
    int opcion;
    do {
        cout << "\n=== Sistema de Gesti�n Corporativa ===\n";
        cout << "1. Iniciar sesi�n\n";
        cout << "2. Registrar nuevo usuario\n";
        cout << "3. Salir\n";
        cout << "Opci�n: ";
        cin >> opcion;

        string usuario, carnet;

        switch (opcion) {
            case 1:
                if (Seguridad::login(usuario, carnet)) {
                    Menu m(usuario, carnet); // Crear el men�
                    m.mostrarMenuGeneral();  // Mostrar el men�
                } else {
                    cout << "Login fallido. Verifica tus credenciales.\n"; // Mensaje de error
                }
                break;
            case 2: {
                Usuario nuevoUsuario; // Crear un nuevo usuario
                nuevoUsuario.registrar(); // Llamar al m�todo de registro
                break;
            }
            case 3:
                cout << "�Hasta luego!\n"; // Mensaje de despedida
                break;
            default:
                cout << "Opci�n inv�lida. Por favor, elija una opci�n v�lida.\n"; // Mensaje de opci�n no v�lida
        }
    } while (opcion != 3); // Repetir hasta que el usuario elija salir

    return 0; // Fin del programa
}
