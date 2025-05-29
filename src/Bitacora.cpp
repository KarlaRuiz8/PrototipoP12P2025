#include "Bitacora.h"
#include <fstream>
#include <ctime>
using namespace std;

void Bitacora::registrar(const string& usuario, const string& accion, int codigo) {
    ofstream file("bitacora.txt", ios::app); // Abre el archivo en modo append
    time_t now = time(0);
    file << usuario << " | " << accion << " | C�digo: " << codigo << " | Fecha: " << ctime(&now);
    file.close();
}
