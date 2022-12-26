#ifndef SMARTTV_H
#define SMARTTV_H

#include <iostream>
#include <string>
#include <vector>

#include "App.h"

using namespace std;

class SmartTV 
{
    friend SmartTV &operator << (SmartTV &s, App &a );//adiciona app
    friend SmartTV &operator >> (SmartTV &s, App &a);//remove app
    
public:
    SmartTV(string marca, string modelo, string versao_so); //construtor
    void run(string opcao);//executa o app
    void ligar(){ligada = true;} //liga a TV
    virtual void desligar(); //desliga a TV
    SmartTV instalarApp(App &); //instala um app

protected:
    vector<App*> apps; //vetor de apps
    string marca; //marca da TV
    string modelo; //modelo da TV
    string versao_so; //versao do sistema operacional
    bool ligada; //indica se a TV esta ligada ou nao
};

#endif