#ifndef APP_H
#define APP_H

#include <iostream>
#include <string>

using namespace std;

class App
{
public:
    App(string nome, string versao): nome(nome), versao(versao){} // Construtor
    void setNome(string){this->nome = nome;} //Seta o nome
    void setVersao(string){this->versao = versao;} //Seta a versao
    string getNome(){return nome;} //Retorna o nome
    string getVersao(){return versao;} //Retorna a versao
    virtual void run() = 0; //Funcao virtual pura run para ser implementada nas classes filhas
protected:
    string nome;
    string versao;
};

#endif