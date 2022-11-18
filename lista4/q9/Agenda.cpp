#include <iostream>
#include "Agenda.h"
#include "Pessoa.h"
#include <string>

using std::cout, std::endl, std::string;

Agenda::Agenda()
{
    numPessoas = 0;
}

void Agenda::armazenaPessoa(string n, int i, float a)
{
    if(numPessoas < 10)
    {
        pessoas-> setNome(n);
        pessoas-> setIdade(i);
        pessoas-> setAltura(a);

        numPessoas++;
    }
}

void Agenda::armazenaPessoa(const Pessoa &p)
{
    if(numPessoas < 10)
    {
        pessoas[numPessoas] = p;
        numPessoas++;
    }
}

void Agenda::removePessoa(string nome)
{
    int p = buscaPessoa(nome);
    if(p!=999)
    {
        for(p; p<numPessoas; p++)
        {
            pessoas[p] = pessoas[p+1];
            numPessoas--;
        }
    }
}

int Agenda::buscaPessoa(string nome) const
{
    int indice = 999;
    for(int i = 0; i<numPessoas; i++)
    {
        if(pessoas[i].getNome() == nome)
        {
            indice = i;
        }
    }

    return indice;
}

void Agenda::imprimePessoa(int i) const
{
    cout << "Nome: " << pessoas[i].getNome() << endl;
    cout << "Idade: " << pessoas[i].getIdade() << endl;
    cout << "Altura" << pessoas[i].getAltura() << endl;
    cout << endl;
}

void Agenda::imprimePovo() const
{
    for(int i=0; i<numPessoas; i++)
    {
        imprimePessoa(i);
    }
}