#include "c_limite.hpp"
#include "c_corrente.hpp"
#include "c_poupanca.hpp"

int main() {
  Conta *contas[] = {new C_corrente(2, "Felipe", 1500, 2),new C_limite(1, "carlos", 110, 0, -150), new C_poupanca(3, "Larissa", 850, 0, "26/02")};
  for(int i=0;i<3;i++){
    if(i==1){contas[i]->retirada(300);}
    else if(i==2){contas[i]->deposito(1500);}
    contas[i]->extrato();
  }
}