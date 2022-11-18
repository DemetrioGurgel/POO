#include <iostream>
#include "Pessoa.h"
#include <string>

using std::cout, std::endl, std::string;

Pessoa::Pessoa(const string nome, const int idade, const float altura)
{
    setNome(nome);
    setIdade(idade);
    setAltura(altura);
}

Pessoa Pessoa::setNome(string nome)
{
    this-> nome = nome;
    return *this;
}

Pessoa Pessoa::setIdade(int idade)
{
    this-> idade = idade;
    return *this;
}

Pessoa Pessoa::setAltura(float altura)
{
    this-> altura = altura;
    return *this;
}

string Pessoa::getNome() const
{
    return this-> nome;
}

int Pessoa::getIdade() const
{
    return this-> idade;
}

float Pessoa::getAltura() const
{
    return this-> altura;
}

void Pessoa::printPessoa() const
{
    cout << "Nome: " << getNome() << endl;
    cout << "Idade: " << getIdade() << endl;
    cout << "Altura: " << getAltura() << endl;
}
