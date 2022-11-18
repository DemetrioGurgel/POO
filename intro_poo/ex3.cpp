#include <iostream>
using std::cout, std::endl;

#include <string>
using std::string;

//definição da Classe Carro
class Carro
{

public:

  void setMarca(const string &nome)
  {
    marca = nome;
  }

  string getMarca()
  {
    return marca;
  }

  void displayMessage()
  {
    std::cout << "Olá, eu sou um carro da marca " << getMarca() << endl;
  }

private:
  string marca;
};

int main() {
  Carro meuCarro;

  Carro outroCarro;
  outroCarro.setMarca("Volvo");
  outroCarro.displayMessage();

  outroCarro.setMarca("Chevrolet");
  outroCarro.setMarca("Audi");

  //meuCarro.marca = "umamarca";

  //modificando atributo marca por meio de método set
  meuCarro.setMarca("Renault");

  //acessando atributo marca por meio de método get
  cout << "Marca do meu carro é " << meuCarro.getMarca() << endl;

  meuCarro.displayMessage();

  return 0;
}