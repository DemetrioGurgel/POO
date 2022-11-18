#include <iostream>
using std::cout, std::endl;

#include <string>
using std::string;

//definição da Classe Carro
class Carro
{

public:

  Carro(string nome, int &val)
  {
    marca = nome;
    idade = val;
  }

  Carro()
  {
    marca = "";
    idade = 0;
  }


  void setMarca(const string &nome, const int &val)
  {
    marca = nome;
    idade = val;
  }

  string getMarca()
  {
    return marca;
  }

  int getIdade()
  {
    return idade;
  }

  void displayMessage()
  {
    std::cout << "Olá, eu sou um carro da marca " << getMarca() << ", de ano " << getIdade() << endl;
  }

private:
  string marca;
  int idade;
};

int main() {
  Carro meuCarro;

  meuCarro.setMarca("Volvo", 2022);
  meuCarro.displayMessage();

  return 0;
}