#ifndef FILME_H
#define FILME_H

#include <iostream>
#include <string>
#include <vector>

#include "Producao.h"

using namespace std;

class Filme : public Producao {
public:
    Filme(string n, vector<Ator> a, vector<Diretor> d, double duracao, string tipo); // Construtor da classe.
    double getDuracao() {return duracao;} // Retorna a duração do filme.
    void setDuracao(double d) {duracao = d;} // Define a duração do filme.
    virtual void play(); // Imprime os dados do filme.

protected:
    double duracao;
};
    
#endif