#include "Seguridad.h"
#include <iostream>
#include <fstream>
using namespace std;

bool Seguridad::login(string& usuario, string& carnet) {
    string u, p;
    cout << "Usuario: ";
    cin >> usuario; // Lee el usuario
    cout << "Contraseña: ";
    cin >> p; // Lee la contraseña

    ifstream file("usuarios.dat");
    string archivo_usuario, archivo_password, archivo_carnet;

    while (file >> archivo_usuario >> archivo_password >> archivo_carnet) {
        if (usuario == archivo_usuario && p == archivo_password) {
            carnet = archivo_carnet; // Asigna el carnet
            file.close();
            return true; // Login exitoso
        }
    }

    file.close();
    return false; // Login fallido
}
