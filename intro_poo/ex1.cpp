#include <iostream>
//using std::cout, std::endl;

using namespace std;

//definição da Classe Carro
class Carro
{

public:

  void displayMessage()
  {
    cout << "Olá, eu sou um carro." << endl;
  }

};

int main() {
  Carro meuCarro;

  meuCarro.displayMessage();
}