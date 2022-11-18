#include <iostream>
#include <string>
#include <vector>
#include "Empresa.h"

using namespace std;

Empresa::Empresa(string nome, string cnpj, string razaoSocial) : PessoaJuridica(nome, cnpj, razaoSocial)
{
    setFuncionarios();
    setClientes();
}

void Empresa::setFuncionarios()
{
    Funcionario f1("Joao", "123.456.789-10", "123", 1000, 20, 25);
    Funcionario f2("Maria", "987.654.321-00", "456", 2000, 40, 42);

    addFuncionario(f1);
    addFuncionario(f2);
}


void Empresa::setClientes()
{
    Cliente c1("Demetrio", "123.456.789-10", "Rua principal", "1111-1111");
    Cliente c2("Victor", "987.654.321-00", "Rua secundaria", "2222-2222");
    addCliente(c1);
    addCliente(c2);

}

void Empresa::addFuncionario(Funcionario &f)
{
    funcionarios.push_back(f);
}

void Empresa::addCliente(Cliente &c)
{
    clientes.push_back(c);
}

void Empresa::imprimeFuncionarios()
{
    for (int i = 0; i < funcionarios.size(); i++)
    {
        cout << funcionarios[i] << endl;
    }
}

void Empresa::imprimeClientes()
{
    for (int i = 0; i < clientes.size(); i++)
    {
        cout << clientes[i] << endl;
    }
}

double Empresa::calculaFolhaPagamento()
{
    double total = 0;
    for (int i = 0; i < funcionarios.size(); i++)
    {
        total += funcionarios[i].calcularSalario();
    }
    return total;
}
