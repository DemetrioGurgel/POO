#ifndef PRODUCAO_H
#define PRODUCAO_H

#include <string>
#include <iostream>
#include <vector>

#include "Ator.h"
#include "Diretor.h"
#include "Pessoa.h"

using namespace std;

class Producao {
public:
    Producao(string n, vector<Ator> a, vector<Diretor> d, string t); // Construtor da classe.
    string getNome() {return nome;} // Retorna o nome da producao.
    void setNome(string n) {nome = n;} // Define o nome da producao.
    void addAtor(Ator a) {atores.push_back(a);} // Adiciona um ator a producao.
    void addDiretor(Diretor d) {diretores.push_back(d);} // Adiciona um diretor a producao.
    void removerAtor(Ator a); // Remove um ator da producao.
    void removerDiretor(Diretor d); // Remove um diretor da producao.
    virtual void play() = 0; // Imprime os dados da producao.

protected:
    string nome; // Nome da producao.
    vector<Ator> atores; // Vetor de atores da producao.
    vector<Diretor> diretores; // Vetor de diretores da producao.
    string tipo; // Tipo da producao.
};

#endif