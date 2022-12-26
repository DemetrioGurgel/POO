#ifndef ATOR_H
#define ATOR_H

#include "Pessoa.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Ator : public Pessoa {
public:
    Ator(string n, string t); // Construtor.
    void setTempoCarreira(string t) { TempoCarreira = t; } // Define o tempo de carreira.
    string getTempoCarreira() { return TempoCarreira; } // Retorna o tempo de carreira.
    void imprimir(); // Imprime os dados do ator.

protected:
    string TempoCarreira;
};

#endif