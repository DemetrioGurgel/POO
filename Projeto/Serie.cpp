#include <iostream>
#include <string>
#include <vector>

#include "Serie.h"

using namespace std;

Serie::Serie(string n, vector<Ator> a, vector<Diretor> d, int NumEp, string t) : Producao(n, a, d, t) {
    // Define o numero de episodios da serie.
    setNumEp(NumEp);
}

void Serie::play() {
    // Imprime os dados da serie.
    cout << "Serie: " << getNome() << endl;
    cout << "Atores: " << endl;
    for (int i = 0; i < atores.size(); i++) {
        atores[i].imprimir();
    }
    cout << "Diretores: " << endl;
    for (int i = 0; i < diretores.size(); i++) {
        diretores[i].imprimir();
    }
    cout << "Numero de Episodios: " << getNumEp() << endl;
}
