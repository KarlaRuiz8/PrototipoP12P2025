#include "CatalogoX.h"
#include "Bitacora.h"
#include <iostream>
#include <fstream>
using namespace std;

// Constructor que inicializa usuarioActual
CatalogoX::CatalogoX(const string& usuario) {
    usuarioActual = usuario;
}

void CatalogoX::menuCRUD() {
    int op;
    do {
        cout << "\n--- Menú CatálogoX ---\n1. Alta\n2. Baja\n3. Modificación\n4. Consulta\n5. Regresar\nOpción: ";
        cin >> op;
        switch (op) {
            case 1: alta(); break;          // Asegúrate de que este método esté implementado
            case 2: baja(); break;          // Asegúrate de que este método esté implementado
            case 3: modificacion(); break;  // Asegúrate de que este método esté implementado
            case 4: consulta(); break;      // Asegúrate de que este método esté implementado
            default: cout << "Opción inválida.\n"; // Mensaje de opción no válida
        }
    } while (op != 5);
}

void CatalogoX::alta() {
    // Implementación del método alta
    cout << "Método alta llamado.\n"; // Solo para verificar que se llama correctamente
}

void CatalogoX::baja() {
    // Implementación del método baja
    cout << "Método baja llamado.\n"; // Solo para verificar que se llama correctamente
}

void CatalogoX::modificacion() {
    // Implementación del método modificación
    cout << "Método modificación llamado.\n"; // Solo para verificar que se llama correctamente
}

void CatalogoX::consulta() {
    // Implementación del método consulta
    cout << "Método consulta llamado.\n"; // Solo para verificar que se llama correctamente
}
