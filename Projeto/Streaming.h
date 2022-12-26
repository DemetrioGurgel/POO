#ifndef STREAMING_H
#define STREAMING_H

#include <iostream>
#include <string>
#include <vector>

#include "App.h"
#include "Producao.h"

using namespace std;

class Streaming : public App
{
    friend ostream &operator<<(ostream &out, Streaming &s); //imprime as producoes

public:
    Streaming(string nome, string versao); //construtor
    Streaming &operator << (Producao &p); //Adiciona producao
    Streaming &operator >> (Producao &p); //Remove producao
    virtual void run(); //executa o App
    
protected:
    vector<Producao*> producoes; //vetor de producoes
};

#endif 