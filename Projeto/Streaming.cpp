#include <iostream>
#include <string>
#include <vector>

#include "Streaming.h"
#include "Producao.h"
#include "Filme.h"
#include "Serie.h"

using namespace std;

Streaming::Streaming(string nome, string versao): App(nome, versao)
{
}

Streaming &Streaming::operator << (Producao &p)
{
    // Adiciona producao
    producoes.push_back(&p);
    return *this;
}

Streaming &Streaming::operator >> (Producao &p)
{
    // Remove producao
    for (int i = 0; i < producoes.size(); i++)
    {
        if (producoes[i] == &p)
        {
            producoes.erase(producoes.begin() + i);
        }
    }
    return *this;
}

ostream &operator << (ostream &out, Streaming &s)
{
    // Imprime as producoes
    out << endl << "Streaming: " << s.nome << endl;
    out << "Versao: " << s.versao << endl;
    out << endl << "Producoes: " << endl;
    for(int i = 0; i < s.producoes.size(); i++)
    {
        out << i << " - " << s.producoes[i]->getNome() << endl;
    }
    return out;
}

void Streaming::run()
{
    // Executa uma producao
    cout << *this;
    cout << endl << "Selecione uma producao para assistir através do número correspondente: " << endl;
    int escolha;
    while(true){
    cin >> escolha;
    if (std::cin.fail()){
        // Limpar o estado de falha de entrada
        std::cin.clear();
        // Descartar o caractere inválido da entrada
        std::cin.ignore();
        cout << "ERRO: Opcao inválida, digite um numero inteiro! " << endl;
        }
    else{
        break;}
    }

        if (escolha > producoes.size()-1 || escolha < 0)
        {
            cout << "ERRO: Opcao invalida!" << endl;
            return;
        }
        cout << endl << "Você está assistindo: " << producoes[escolha]->getNome() << endl;
        cout << endl;
        producoes[escolha]->play();
    
}