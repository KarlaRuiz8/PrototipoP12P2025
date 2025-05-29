#include "Login.h"
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

Login::Login() {
    cargarUsuarios();
}

void Login::cargarUsuarios() {
    ifstream archivo("usuarios.dat");
    if (archivo.is_open()) {
        Usuario temp;
        while (archivo.read(reinterpret_cast<char*>(&temp), sizeof(Usuario))) {
            usuarios.push_back(temp);
        }
        archivo.close();
    } else {
        cout << "Error al abrir el archivo de usuarios.\n"; // Manejo de errores
    }
}

bool Login::autenticar(string user, string pass, Usuario &usuarioAutenticado) {
    for (const Usuario &u : usuarios) {
        if (u.getUsuario() == user && u.getContrasena() == pass) {
            usuarioAutenticado = u; // Asignar el usuario autenticado
            return true;
        }
    }
    return false;
}
