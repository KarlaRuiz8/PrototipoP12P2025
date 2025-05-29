#include "Usuario.h"
#include <iostream>
#include <fstream>
using namespace std;

// Constructor por defecto
Usuario::Usuario() : usuario(""), contrasena(""), carnet("") {}

// Constructor con parámetros
Usuario::Usuario(const string& u, const string& p, const string& c)
    : usuario(u), contrasena(p), carnet(c) {}

void Usuario::registrar() {
    string usuario, password, carnet;
    cout << "Nuevo usuario: ";
    cin >> usuario; // Lee el nuevo usuario
    cout << "Contraseña: ";
    cin >> password; // Lee la contraseña
    cout << "Carnet: ";
    cin >> carnet; // Lee el carnet

    ofstream file("usuarios.dat", ios::app); // Abre el archivo en modo append
    if (file.is_open()) {
        file << usuario << " " << password << " " << carnet << endl; // Escribe el usuario, contraseña y carnet
        file.close();
        cout << "Usuario registrado correctamente.\n";
    } else {
        cout << "Error al abrir el archivo para registrar.\n"; // Manejo de errores
    }
}

string Usuario::getUsuario() const {
    return usuario;
}

string Usuario::getContrasena() const {
    return contrasena;
}
