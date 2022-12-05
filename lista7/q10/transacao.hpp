#ifndef TRANSACAO
#define TRANSACAO

#include <iostream>
#include <string>
using namespace std;

class Transacao {

public:
  Transacao(string, double, string);
  Transacao();

 
  string getData(){return data_transacao;}
  double getValue(){return value_transacao;}
  string getDescription(){return descricao_transacao;}
  void setData(string d){data_transacao = d;}
  void setValue(double v){value_transacao = v;}
  void setDescription(string des){descricao_transacao = des;}
private:
  string data_transacao;
  double value_transacao;
  string descricao_transacao;
};

#endif