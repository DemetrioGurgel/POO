#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;


class Pessoa
{
public:
    Pessoa(string cpf, string nome);

    void setCpf(string);

    void setNome(string);

    string getCpf(){return cpf;}

    bool getCpfValido(){return cpfValido;}

    string getNome(){return nome;}

    void print();

private:
    string cpf;
    string nome;
    bool cpfValido;
};

#endif

