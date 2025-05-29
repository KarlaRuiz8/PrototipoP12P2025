#include "Menu.h"
#include "CatalogoX.h"
#include <iostream>
#include <limits> // Incluye para manejar límites
using namespace std;

// Constructor que inicializa nombreUsuario y carnet
Menu::Menu(const string& _nombreUsuario, const string& _carnet) {
    nombreUsuario = _nombreUsuario;
    carnet = _carnet;
}

void Menu::mostrarMenuGeneral() {
    cout << "Bienvenido " << nombreUsuario << " (Carnet: " << carnet << ")\n";
    int opcion;


    do {
        cout << "====================================\n";
        cout << " Sistema Corporativo - Usuario: " << nombreUsuario << " | Carnet: " << carnet << endl;
        cout << "====================================\n";
        cout << " 1. Catálogos\n";
        cout << " 2. Informes\n";
        cout << " 3. Seguridad\n";
        cout << " 4. Salir\n";
        cout << "------------------------------------\n";
        cout << "Ingrese una opción: ";

        cin >> opcion;

        // Verifica si la entrada es válida
        if (cin.fail()) {
            cin.clear(); // Limpia el estado de error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora la línea
            cout << "Opción inválida. Intente de nuevo.\n";
            continue; // Reinicia el bucle
        }

        switch (opcion) {
            case 1: {
                CatalogoX catalogo(nombreUsuario);
                catalogo.menuCRUD(); // Muestra el menú de CRUD
                break;
            }
            case 2: cout << "Saliendo del sistema...\n"; break; // Mensaje de despedida
            default: cout << "Opción inválida. Intente de nuevo.\n"; // Mensaje de opción no válida
        }
        system("pause"); // Pausa antes de volver a mostrar el menú
    } while (opcion != 4); // Continúa hasta que se elija salir
}
