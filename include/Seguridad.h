#ifndef SEGURIDAD_H
#define SEGURIDAD_H

#include <string>
using namespace std;

class Seguridad {
public:
    static bool login(string& usuario, string& carnet); // Método para iniciar sesión
};

#endif
