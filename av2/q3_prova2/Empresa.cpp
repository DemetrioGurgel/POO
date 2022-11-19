#include <iostream>
#include <string>
using namespace std;

#include "Empresa.h"

Empresa::Empresa() : PessoaJuridica()
{
}

Empresa::Empresa(string nome, string cnpj, string razaoSocial) : PessoaJuridica(nome, cnpj, razaoSocial)
{
}  

void Empresa::addFuncionario(Funcionario *f)
{
    funcionarios.push_back(f);
}

void Empresa::addCliente(Cliente *c)
{
    clientes.push_back(c);
}

void Empresa::listarFuncionarios()
{
    for (int i = 0; i < funcionarios.size(); i++)
    {
        cout << *funcionarios[i] << endl;
    }
}

ostream &operator<<(ostream &output, const Empresa &e)
{
    output << "Empresa: " << e.nome << endl;
    output << "CNPJ: " << e.cnpj << endl;
    output << "Razao Social: " << e.razaoSocial << endl;
    output << "Funcionarios: " << endl;
    for (int i = 0; i < e.funcionarios.size(); i++)
    {
        output << *e.funcionarios[i] << endl;
    }
    output << "Clientes: " << endl;
    for (int i = 0; i < e.clientes.size(); i++)
    {
        output << *e.clientes[i] << endl;
    }
    return output;
}