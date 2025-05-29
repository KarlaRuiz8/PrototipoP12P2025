#include "Menu.h"
#include "CatalogoX.h"
#include <iostream>
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
        cout << " 1. Cat�logos\n";
        cout << " 2. Informes\n";
        cout << " 3. Seguridad\n";
        cout << " 4. Salir\n";
        cout << "------------------------------------\n";
        cout << "Ingrese una opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                CatalogoX catalogo(nombreUsuario);
                catalogo.menuCRUD(); // Muestra el men� de CRUD
                break;
            }
            case 2: mostrarMenuReportes(); break; // Muestra el men� de reportes
            case 3: mostrarMenuSeguridad(); break; // Muestra el men� de seguridad
            case 4: cout << "Saliendo del sistema...\n"; break; // Mensaje de despedida
            default: cout << "Opci�n inv�lida. Intente de nuevo.\n"; // Mensaje de opci�n no v�lida
        }
    } while (opcion != 4); // Repetir hasta que el usuario elija salir
}
        system("pause"); // Pausa antes de volver a mostrar el men�
    } while (opcion != 4); // Contin�a hasta que se elija salir
}
