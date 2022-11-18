#include <iostream>
using std::cout, std::endl;

#include <string>
using std::string;

//definição da Classe Carro
class Carro
{

public:

  Carro(string nome)
  {
    marca = nome;
  }

  Carro()
  {
    marca = "";
  }

  void setMarca(string nome)
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
  //Carro meuCarro; //erro, não existe mais o construtor-padrão
  string nome;
  std::cin >> nome;
  Carro meuCarro(nome);
  Carro outroCarro;
  
  meuCarro.displayMessage();

  return 0;
}