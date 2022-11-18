#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;

class Pessoa
{
    public:
    Pessoa(string nome = "", int idade = 0, float altura = 0.0);
    Pessoa setNome(const string);
    Pessoa setIdade(const int);
    Pessoa setAltura(const float);
    string getNome() const;
    int getIdade() const;
    float getAltura() const;
    void printPessoa() const;

    private:
    string nome;
    int idade;
    double altura;
};

#endif