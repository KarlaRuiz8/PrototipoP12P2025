#ifndef USUARIO_H
#define USUARIO_H

#include <string>
using namespace std;

class Usuario {
private:
    string usuario;
    string contrasena;
    string carnet;

public:
    Usuario(); // Constructor por defecto
    Usuario(const string& u, const string& p, const string& c); // Constructor con par�metros
    void registrar(); // M�todo para registrar un nuevo usuario
    string getUsuario() const; // M�todo para obtener el nombre de usuario
    string getContrasena() const; // M�todo para obtener la contrase�a
};

#endif
