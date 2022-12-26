#ifndef SERIE_H
#define SERIE_H

#include <iostream>
#include <string>
#include <vector>

#include "Producao.h"

using namespace std;

class Serie : public Producao {
public:
    Serie(string n, vector<Ator> a, vector<Diretor> d, int NumEp, string tipo); // Construtor da classe.
    int getNumEp() { return NumEp;} // Retorna o numero de episodios da serie.
    void setNumEp(int n) { NumEp = n;} // Define o numero de episodios da serie.
    virtual void play(); // Imprime os dados da serie.

protected:
    int NumEp; // Numero de episodios da serie.
};

#endif