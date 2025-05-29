#ifndef MENU_H
#define MENU_H

#include <string>
using namespace std;

class Menu {
private:
    string nombreUsuario; // Almacena el nombre de usuario
    string carnet;        // Almacena el carnet

public:
    // Constructor que acepta nombre de usuario y carnet
    Menu(const string& _nombreUsuario, const string& _carnet);

    void mostrarMenuGeneral();    // Método para mostrar el menú general
    void mostrarMenuReportes();   // Método para mostrar el menú de reportes
    void mostrarMenuSeguridad();   // Método para mostrar el menú de seguridad
};

#endif // MENU_H
