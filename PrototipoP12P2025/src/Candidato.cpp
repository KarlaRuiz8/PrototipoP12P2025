#include "Candidato.h"

Candidato::Candidato(const std::string& nombre, int numAnios) {
    this->nombre = nombre;
    votosPorAnio.resize(numAnios, 0);
}

std::string Candidato::getNombre() const {
    return nombre;
}

void Candidato::asignarVoto(int anioIndex, int cantidad) {
    votosPorAnio[anioIndex] = cantidad;
}

int Candidato::getTotalVotos() const {
    int total = 0;
    for (int voto : votosPorAnio)
        total += voto;
    return total;
}

double Candidato::getPromedio() const {
    return getTotalVotos() / static_cast<double>(votosPorAnio.size());
}

int Candidato::getVotoAnio(int anioIndex) const {
    return votosPorAnio[anioIndex];
}
