#include "conta.hpp"

Conta::Conta(int numConta, string nome, double saldo, int numTransacoes) : numConta(numConta), nome(nome), saldo(saldo), numTransacoes(numTransacoes){
    transacoes = new Transacao[numTransacoes];
    if(numTransacoes>0){
      double tempD;
      string tempS;
      cout<< "Conta " << numConta <<endl;
      for(int i = 0; i<numTransacoes; i++){
          cout<<"--------------------------------"<<endl;
        
          cout<<"Data da " << i+1 << "° transação: ";
          cin >> tempS;
          transacoes[i].setData(tempS);
  
          cout<<endl;
  
          cout<<"Valor da " << i+1 << "° transação: ";
          cin >> tempD;
          transacoes[i].setValue(tempD);
          if(transacoes[i].getValue()<0)
          {
            this->retirada(-transacoes[i].getValue());
          }
          else
          {
            this->deposito(transacoes[i].getValue());
          }
  
          cout<<endl;
  
          if(transacoes[i].getValue()<0){
              transacoes[i].setDescription("Debito");
          }else{
              transacoes[i].setDescription("Credito");
          }
        if(i+1==numTransacoes){
          cout<<"--------------------------------"<<endl;
        }
  
      }
    }
}