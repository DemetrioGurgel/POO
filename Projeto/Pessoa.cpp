#include <iostream>
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(string n) {
    setNome(n);
}

void Pessoa::imprimir() {
    // Imprime o nome da pessoa.
    cout << "Nome: " << getNome() << endl;
}