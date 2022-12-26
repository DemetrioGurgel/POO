#ifndef DIRETOR_H
#define DIRETOR_H

#include "Pessoa.h"

class Diretor : public Pessoa {
public:
    Diretor(string n, int NumProducoes); // Construtor da classe.
    void setQtdProducoes(int NumProducoes) { QtdProducoes = NumProducoes; } // Define a quantidade de produções do diretor.
    int getQtdProducoes() { return QtdProducoes; } // Retorna a quantidade de produções do diretor.
    void imprimir(); // Imprime os dados do diretor.

protected:
    int QtdProducoes;
};

#endif