#ifndef CATALOGOX_H
#define CATALOGOX_H

#include <string>
using namespace std;

class CatalogoX {
private:
    string usuarioActual; // Almacena el usuario actual

public:
    // Constructor que acepta un nombre de usuario
    CatalogoX(const string& usuario);

    void menuCRUD();      // Método para mostrar el menú CRUD
    void alta();          // Método para alta
    void baja();          // Método para baja
    void modificacion();  // Método para modificación
    void consulta();      // Método para consulta
};

#endif
