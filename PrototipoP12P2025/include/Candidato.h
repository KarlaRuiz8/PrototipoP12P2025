#ifndef CANDIDATO_H
#define CANDIDATO_H

#include <string>
#include <vector>

class Candidato {
private:
    std::string nombre;
    std::vector<int> votosPorAnio;

public:
    Candidato(const std::string& nombre, int numAnios);

    std::string getNombre() const;
    void asignarVoto(int anioIndex, int cantidad);
    int getTotalVotos() const;
    double getPromedio() const;
    int getVotoAnio(int anioIndex) const;
};

#endif
