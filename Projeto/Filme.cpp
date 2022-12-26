#include <iostream>
#include <string>
#include <vector>

#include "Filme.h"

using namespace std;

Filme::Filme(string n, vector<Ator> a, vector<Diretor> d, double duracao, string t) : Producao(n, a, d, t) {
    // Define a duração do filme.
    setDuracao(duracao);
}

void Filme::play() {
    // Imprime os dados do filme.
    cout << endl << "Filme: " << getNome() << endl;
    cout << "Atores: " << endl;
    for (int i = 0; i < atores.size(); i++) {
        atores[i].imprimir();
    }
    cout << "Diretores: " << endl;
    for (int i = 0; i < diretores.size(); i++) {
        diretores[i].imprimir();
    }
    cout << "Duração: " << getDuracao() << endl;
}
