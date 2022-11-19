#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "PessoaJuridica.h"
#include "Funcionario.h"
#include "Cliente.h"


class Empresa : public PessoaJuridica
{
    friend ostream &operator<<(ostream &, const Empresa &);
    public:
        Empresa();
        Empresa(string nome, string cnpj, string razaoSocial);
        void addFuncionario(Funcionario *f);
        void addCliente(Cliente *c);
        void listarFuncionarios();

    private:
        vector<Funcionario *> funcionarios;
        vector<Cliente *> clientes;
};

#endif