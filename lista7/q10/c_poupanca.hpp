#ifndef POUPANCA
#define POUPANCA
#include "conta.hpp"
class C_poupanca : public Conta{
  public:
    C_poupanca(int numConta, string nome, double saldo, int numTransacoes, string dataJuros);
    virtual void extrato();
  private:
    string dataJuros;
};
#endif