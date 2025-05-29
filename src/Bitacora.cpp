#include "Bitacora.h"
#include <iostream>
#include <fstream>

void Bitacora::registrarAcceso(const string& usuario) {
    ofstream archivo("bitacora.txt", ios::app);
    if (archivo.is_open()) {
        archivo << "Acceso de usuario: " << usuario << endl;
        archivo.close();
    } else {
        cout << "Error al abrir el archivo de bitácora.\n";
    }
}
