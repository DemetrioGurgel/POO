#include "c_limite.hpp"

C_limite::C_limite(int numConta, string nome, double saldo, int numTransacoes, double limite) : Conta(numConta,nome,saldo,numTransacoes){
  if(limite>0){
    cout << "Limite deve ser menor ou igual a 0" << endl << "Ajustando limite automaticamente para 0." <<endl <<endl;
      this->limite = 0;
  }
  else{
    this->limite = limite;
  }
};

void C_limite::extrato(){
    cout << endl << endl << endl;
    cout<<endl<<"EXTRATO DE CONTA CORRENTE COM LIMITE"<<endl<<endl;
    cout<<"--------------------------------" << endl;
    cout << "Numero da conta: " << this->numConta << endl;
    cout << "Nome do cliente: " << this->nome << endl;
    cout << "Limite da conta: " << this->limite << endl;
      for(int i = 0; i<this->numTransacoes; i++){
          if(i>0){cout<<endl;}
          cout<<"--------------------------------";
          cout<<endl;
        
          cout<<"Data da " << i+1 << "° transação: ";
          cout << this->transacoes[i].getData();
  
          cout<<endl;
  
          cout<<"Valor da " << i+1 << "° transação: ";
          cout << this->transacoes[i].getValue();
  
          cout<<endl;

          cout<<"Descrição da " << i+1 << "° transação: ";
          cout << this->transacoes[i].getDescription();

        if(i+1 == this->numTransacoes){
          cout << endl;
          cout<<"--------------------------------";
        }
          
        
    }
    cout << endl;
    cout << "Saldo disponivel: " << this->saldo << endl;
    cout<<"--------------------------------";
  } 