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

    void mostrarMenuGeneral(); // M�todo para mostrar el men� general
    void mostrarMenuCRUD();    // M�todo para mostrar el men� de Cat�logos
    void mostrarMenuReportes(); // M�todo para mostrar el men� de informes
    void mostrarMenuSeguridad(); // M�todo para mostrar el men� de seguridad
};

#endif
