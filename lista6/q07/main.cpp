#include <iostream>
#include <string>
using namespace std;
#include "Imovel.h"
#include "ImovelNovo.h"
#include "ImovelVelho.h"

int main()
{
    cout << "Valor original:" << endl;
    Imovel imovel1("Campina Grande", 100000);
    cout << "Endereco: " << imovel1.getEndereco() << endl;
    cout << "Preco: R$" << imovel1.getPreco() << endl;
    cout << "---------------------------------" << endl;

    cout << "Valor com acrescimo:" << endl;
    ImovelNovo imovel2("Campina Grande", 100000);
    cout << "Endereco: " << imovel2.getEndereco() << endl;
    cout << "Preco: R$" << imovel2.getPreco() << endl;
    cout << "---------------------------------" << endl;

    cout << "Valor com desconto:" << endl;
    ImovelVelho imovel3("Campina Grande", 100000);
    cout << "Endereco: " << imovel3.getEndereco() << endl;
    cout << "Preco: R$" << imovel3.getPreco() << endl;

    return 0;
}