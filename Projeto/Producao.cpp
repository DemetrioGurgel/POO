#include <iostream>
#include <string>
#include <vector>

#include "Producao.h"

using namespace std;

Producao::Producao(string n, vector<Ator> a, vector<Diretor> d, string t) {
    // Define o nome e o tipo da produção.
    setNome(n);
    tipo = t;
    // Copia os atores e diretores para o vetor.
    for (int i = 0; i < a.size(); i++) {
        atores.push_back(a[i]);
    }
    for (int i = 0; i < d.size(); i++) {
        diretores.push_back(d[i]);
    }
}

void Producao::removerAtor(Ator a) {
    // Percorre o vetor de atores e remove o ator passado como parâmetro.
    for (int i = 0; i < atores.size(); i++) {
        if (a.getNome() == atores[i].getNome()) 
        {
            atores.erase(atores.begin() + i);
        }
    }
}

void Producao::removerDiretor(Diretor d) {
    // Percorre o vetor de diretores e remove o diretor passado como parâmetro.
    for (int i = 0; i < diretores.size(); i++) {
        if (d.getNome() == diretores[i].getNome()) 
        {
            diretores.erase(diretores.begin() + i);
        }
    }
}
