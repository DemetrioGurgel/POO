#include <iostream>
#include <string>
#include <vector>

#include "Ator.h"

using namespace std;

Ator::Ator(string n, string t) : Pessoa(n) {
    setTempoCarreira(t);
}

void Ator::imprimir() {
    // Imprime o nome do ator e o tempo de carreira.
    Pessoa::imprimir();
    cout << "Tempo de carreira: " << getTempoCarreira() << endl;
}