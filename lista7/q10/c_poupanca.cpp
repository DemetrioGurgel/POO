#include "c_poupanca.hpp"

C_poupanca::C_poupanca(int numConta, string nome, double saldo, int numTransacoes, string dataJuros) : Conta(numConta, nome, saldo, numTransacoes), dataJuros(dataJuros){};

void C_poupanca::extrato(){
    cout << endl << endl << endl;
    cout<<endl<<"EXTRATO DE POUPANÇA"<<endl<<endl;
    cout<<"--------------------------------" << endl;
    cout << "Numero da conta: " << this->numConta << endl;
    cout << "Nome do cliente: " << this->nome << endl;
    cout << "Dia do aniversario da conta: " << this->dataJuros << endl;
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
          cout<<"--------------------------------" <<endl;
        }
          
        
    }
    cout << endl;
    cout << "Saldo disponivel: " << this->saldo << endl;
    cout<<"--------------------------------"<<endl;
  } 