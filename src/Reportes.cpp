#include "Reportes.h"
#include <iostream>
#include <fstream> // Asegúrate de incluir esta biblioteca
using namespace std;

void Reportes::mostrarReportes() {
    cout << "Mostrando reportes...\n";
    int opcion;
    do {
        cout << "\n-- Reportes --" << endl;
        cout << "1. Ver bitacora" << endl;
        cout << "2. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << "\nContenido de la bitacora:\n";
                ifstream archivo("bitacora.txt");
                if (archivo.is_open()) {
                    string linea;
                    while (getline(archivo, linea)) {
                        cout << linea << endl;
                    }
                    archivo.close();
                } else {
                    cout << "No se pudo abrir la bitacora." << endl;
                }
                break;
            }
            case 2:
                cout << "Saliendo del submenú Reportes..." << endl;
                break;
            default:
                cout << "Opción inválida." << endl;
        }
    } while (opcion != 2);
}
