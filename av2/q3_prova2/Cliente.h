#ifndef CLIENTE_H
#define CLIENTE_H

#include "PessoaFisica.h"
#include <iostream>
#include <string>
using namespace std;


class Cliente : public PessoaFisica
{
    friend ostream &operator<<(ostream &, const Cliente &);
    public:
        Cliente();
        Cliente(string nome, string cpf, string endereco, string telefone);
        string getEndereco()const{return endereco;}
        void setEndereco(string endereco);
        string getTelefone()const{return telefone;}
        void setTelefone(string telefone);
    private:
        string endereco;
        string telefone;
};

#endif