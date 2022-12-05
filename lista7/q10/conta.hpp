#ifndef CONTA
#define CONTA

#include "transacao.hpp"
#include <string>
using namespace std;
class Conta{

public:
  Conta(int numConta, string nome, double saldo, int numTransacoes);
  virtual void deposito(double valor){
    saldo += valor;
    cout << endl << "Deposito de R$" << valor << ",00 concluido";
  }
  virtual void retirada(double valor){
    if(saldo>0){
      if(saldo-valor>=0){
        saldo -= valor;
      }
      else{
        saldo = 0;
      }
    }
    cout << endl << "Retirada de R$" << valor << ",00 concluido";
  };
  virtual void extrato() = 0;
  
protected:
  int numConta;
  string nome;
  double saldo;
  Transacao *transacoes;
  int numTransacoes;
};

#endif