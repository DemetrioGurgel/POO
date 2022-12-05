#include "transacao.hpp"

Transacao::Transacao(string date, double value, string description) : data_transacao(date),value_transacao(value) 
{
  if(value_transacao<0){
    descricao_transacao = "debito";
  }
  else {
    descricao_transacao = "credito";
  }
}

Transacao::Transacao() : data_transacao(""),value_transacao(0), descricao_transacao("") 
{
  //
}