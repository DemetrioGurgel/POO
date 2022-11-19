#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>
using namespace std;

#include "PessoaFisica.h"

class Funcionario : public PessoaFisica
{
    friend ostream &operator<<(ostream &, const Funcionario &);
    public:
        Funcionario();
        Funcionario(string nome, string cpf, string matricula, double salario);
        string getMatricula()const{return matricula;}
        void setMatricula(string matricula);
        double getSalario()const{return salario;}
        void setSalario(double salario);
    private:
        string matricula;
        double salario;
};

#endif

