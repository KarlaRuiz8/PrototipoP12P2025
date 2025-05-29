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
        cout << "\n--- Men� Cat�logoX ---\n1. Alta\n2. Baja\n3. Modificaci�n\n4. Consulta\n5. Regresar\nOpci�n: ";
        cin >> op;
        switch (op) {
            case 1: alta(); break;          // Aseg�rate de que este m�todo est� implementado
            case 2: baja(); break;          // Aseg�rate de que este m�todo est� implementado
            case 3: modificacion(); break;  // Aseg�rate de que este m�todo est� implementado
            case 4: consulta(); break;      // Aseg�rate de que este m�todo est� implementado
            default: cout << "Opci�n inv�lida.\n"; // Mensaje de opci�n no v�lida
        }
    } while (op != 5);
}

void CatalogoX::alta() {
    // Implementaci�n del m�todo alta
    cout << "M�todo alta llamado.\n"; // Solo para verificar que se llama correctamente
}

void CatalogoX::baja() {
    // Implementaci�n del m�todo baja
    cout << "M�todo baja llamado.\n"; // Solo para verificar que se llama correctamente
}

void CatalogoX::modificacion() {
    // Implementaci�n del m�todo modificaci�n
    cout << "M�todo modificaci�n llamado.\n"; // Solo para verificar que se llama correctamente
}

void CatalogoX::consulta() {
    // Implementaci�n del m�todo consulta
    cout << "M�todo consulta llamado.\n"; // Solo para verificar que se llama correctamente
}
