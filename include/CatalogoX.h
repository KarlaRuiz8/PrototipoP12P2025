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

    void menuCRUD();      // M�todo para mostrar el men� CRUD
    void alta();          // M�todo para alta
    void baja();          // M�todo para baja
    void modificacion();  // M�todo para modificaci�n
    void consulta();      // M�todo para consulta
};

#endif
