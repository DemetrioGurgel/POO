#include <iostream>
#include <string>
using namespace std;

#include "Cliente.h"

Cliente::Cliente() : PessoaFisica()
{
    setEndereco("");
    setTelefone("");
}

Cliente::Cliente(string nome, string cpf, string endereco, string telefone) : PessoaFisica(nome, cpf)
{
    setEndereco(endereco);
    setTelefone(telefone);
}

void Cliente::setEndereco(string endereco)
{
    this->endereco = endereco;
}

void Cliente::setTelefone(string telefone)
{
    this->telefone = telefone;
}

ostream &operator<<(ostream &output, const Cliente &c)
{
    output << "Nome: " << c.getNome() << endl;
    output << "CPF: " << c.getCpf() << endl;
    output << "Endereco: " << c.getEndereco() << endl;
    output << "Telefone: " << c.getTelefone() << endl;
    return output;
}

