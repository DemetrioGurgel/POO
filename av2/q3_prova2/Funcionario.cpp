#include <iostream>
#include <string>
using namespace std;

#include "Funcionario.h"

Funcionario::Funcionario()
{
    matricula = " ";
    salario = 0;
}

Funcionario::Funcionario(string nome, string cpf, string matricula, double salario) : PessoaFisica(nome, cpf)
{
    setMatricula(matricula);
    setSalario(salario);
}

ostream &operator<<(ostream &output, const Funcionario &f)
{
    output << "Nome: " << f.nome << endl;
    output << "CPF: " << f.cpf << endl;
    output << "Matrícula: " << f.matricula << endl;
    output << "Salário: " << f.salario << endl;
    return output;
}

void Funcionario::setMatricula(string matricula)
{
    this->matricula = matricula;
}

void Funcionario::setSalario(double salario)
{
    this->salario = salario;
}
