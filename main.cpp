#include "Seguridad.h"
#include "Menu.h"
#include "Usuario.h"
#include <iostream>
using namespace std;

int main() {
    int opcion;
    do {
        cout << "\n=== Sistema de Gestión Corporativa ===\n";
        cout << "1. Iniciar sesión\n";
        cout << "2. Registrar nuevo usuario\n";
        cout << "3. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        string usuario, carnet;

        switch (opcion) {
            case 1:
                if (Seguridad::login(usuario, carnet)) {
                    Menu m(usuario, carnet); // Crear el menú
                    m.mostrarMenuGeneral();  // Mostrar el menú
                } else {
                    cout << "Login fallido. Verifica tus credenciales.\n"; // Mensaje de error
                }
                break;
            case 2: {
                Usuario nuevoUsuario; // Crear un nuevo usuario
                nuevoUsuario.registrar(); // Llamar al método de registro
                break;
            }
            case 3:
                cout << "¡Hasta luego!\n"; // Mensaje de despedida
                break;
            default:
                cout << "Opción inválida. Por favor, elija una opción válida.\n"; // Mensaje de opción no válida
        }
    } while (opcion != 3); // Repetir hasta que el usuario elija salir

    return 0; // Fin del programa
}
