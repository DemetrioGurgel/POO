#ifndef LIMITE
#define LIMITE
#include "conta.hpp"
class C_limite : public Conta{

  public:
    C_limite(int numConta, string nome, double saldo, int numTransacoes, double limite);
    virtual void retirada(double valor){
    if(saldo>limite){
      if(saldo-valor>=limite){
        saldo -= valor;
        cout << endl << "Retirada de R$" << valor << ",00 concluido";
      }
      else{
        cout<<endl<<"LOG DE ERRO"<<endl<<endl;
        cout << endl << "Retirada de R$" << valor << ",00 não realizada." << endl <<"Valor acima do limite." << endl <<"Retirando R$" << (-limite)+saldo <<",00.";
        saldo = limite;
      }
    }
  };

  virtual void extrato();
  private:
    double limite;
};
#endif