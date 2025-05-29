#ifndef LOGIN_H
#define LOGIN_H

#include "Usuario.h"
#include <vector>

class Login {
private:
    std::vector<Usuario> usuarios; // Almacena los usuarios

public:
    Login(); // Constructor
    void cargarUsuarios(); // Método para cargar usuarios
    bool autenticar(std::string user, std::string pass, Usuario &usuarioAutenticado); // Autenticación
};

#endif
