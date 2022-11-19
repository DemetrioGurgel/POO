#include <iostream>
#include <string>
#include <vector>
#include "CarrinhoDeCompras.h"

using namespace std;

int main(){
    CarrinhoDeCompras *c = new CarrinhoDeCompras("Carrinho 1");
    c->addProduto("Arroz");
    c->addProduto("Feijão");
    c->addProduto("Carne");
    c->addProduto("Frango");
    c->addProduto("Macarrão");
    cout << "Lista Completa:" << endl << c << endl;

    c->removerProduto("Arroz");

    cout << "Lista removendo elementos: "<< endl << c << endl;
}