#include <iostream>
using std::cout, std::endl;

#include <string>
using std::string;

//definição da Classe Carro
class Carro
{

public:
  
  void displayMessage(const string &marca)
  {
    std::cout << "Olá, eu sou um carro da marca " << marca << endl;
  }
  
};

int main() {
  Carro meuCarro;
  meuCarro.displayMessage("Renault");
  
  Carro carroVizinho;
  carroVizinho.displayMessage("Toyota");
}