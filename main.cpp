#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Candidato.h"

using namespace std;

void imprimirLinea() {
    cout << "+--------------+---------+---------+---------+---------+---------+---------+--------+\n";
}

int main() {
    srand(time(0));
    char opcion;
    const int numAnios = 5;
    const string anios[numAnios] = {"2017", "2019", "2021", "2023", "2025"};

    do {
        int numCandidatos;
        cout << "Ingrese el número de candidatos por partido (5 mínimo): ";
        cin >> numCandidatos;
        while (numCandidatos < 5) {
            cout << "Debe ingresar al menos 5 candidatos. Intente de nuevo: ";
            cin >> numCandidatos;
        }

        vector<string> partidos = {"Republicano", "Demócrata", "Independiente"};
        vector<vector<Candidato>> todosLosPartidos;

        cin.ignore();
        for (const string& partido : partidos) {
            vector<Candidato> candidatos;
            cout << "\nPARTIDO: " << partido << endl;
            for (int i = 0; i < numCandidatos; ++i) {
                string nombre;
                cout << "Nombre del candidato " << i + 1 << ": ";
                getline(cin, nombre);
                Candidato c(nombre, numAnios);
                for (int j = 0; j < numAnios; ++j) {
                    int votos = rand() % 1000 + 100;
                    c.asignarVoto(j, votos);
                }
                candidatos.push_back(c);
            }
            todosLosPartidos.push_back(candidatos);
        }

        for (int p = 0; p < partidos.size(); ++p) {
            cout << "\nRESULTADOS - PARTIDO: " << partidos[p] << endl;
            imprimirLinea();
            cout << "| " << setw(12) << "Candidato" << " | ";
            for (int j = 0; j < numAnios; j++) cout << anios[j] << " | ";
            cout << "Total | Promedio |\n";
            imprimirLinea();

            int maxVotos = 0, minVotos = INT_MAX;
            string top, flop;
            double mejorProm = 0;
            string mejorPromNombre;

            for (auto& c : todosLosPartidos[p]) {
                cout << "| " << setw(12) << c.getNombre() << " | ";
                for (int j = 0; j < numAnios; ++j) cout << setw(7) << c.getVotoAnio(j) << " | ";
                int total = c.getTotalVotos();
                double prom = c.getPromedio();
                cout << setw(5) << total << " | " << setw(8) << fixed << setprecision(2) << prom << " |\n";
                imprimirLinea();

                if (total > maxVotos) { maxVotos = total; top = c.getNombre(); }
                if (total < minVotos) { minVotos = total; flop = c.getNombre(); }
                if (prom > mejorProm) { mejorProm = prom; mejorPromNombre = c.getNombre(); }
            }

            cout << "\nCandidato con más votos: " << top << " (" << maxVotos << ")" << endl;
            cout << "Candidato con menos votos: " << flop << " (" << minVotos << ")" << endl;
            cout << "Candidato con mejor promedio: " << mejorPromNombre << " (" << mejorProm << ")" << endl;
        }

        cout << "\nDesea realizar otra simulación? (S/N): ";
        cin >> opcion;
    } while (opcion == 'S' || opcion == 's');

    return 0;
}
