#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
public:
    Pessoa(string n ); 
    string getNome() { return nome; } // Retorna o nome da pessoa.
    void setNome(string n) { nome = n; } // Define o nome da pessoa.
    void imprimir(); // Imprime os dados da pessoa.
    
protected:
    string nome;
};

#endif