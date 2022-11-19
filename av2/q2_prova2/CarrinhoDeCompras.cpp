#include <iostream>
#include <string> 
#include <vector>
#include "CarrinhoDeCompras.h"

using namespace std;

CarrinhoDeCompras::CarrinhoDeCompras()
{
    nome = " ";
}

CarrinhoDeCompras::CarrinhoDeCompras(string nome)
{
    this->nome = nome;
}

void CarrinhoDeCompras::addProduto(string produto)
{
    produtos.push_back(produto);
}

void CarrinhoDeCompras::listarProdutos()
{
    for(int i = 0; i < produtos.size(); i++)
    {
        cout << produtos[i] << endl;
    }
}

void CarrinhoDeCompras::removerProduto(string produto)
{
    for(int i = 0; i < produtos.size(); i++)
    {
        if(produtos[i] == produto)
        {
            produtos.erase(produtos.begin() + i);
        }
    }
}

void CarrinhoDeCompras::limparCarrinho()
{
    produtos.clear();
}

ostream &operator<<(ostream &output, const CarrinhoDeCompras &c)
{
    output << "Nome: " << c.nome << endl;
    output << "Produtos: " << endl;
    for(int i = 0; i < c.produtos.size(); i++)
    {
        output << c.produtos[i] << endl;
    }
    return output;
}

ostream &operator<<(ostream &output, const CarrinhoDeCompras *c)
{
    output << "Nome: " << c->nome << endl;
    output << "Produtos: " << endl;
    for(int i = 0; i < c->produtos.size(); i++)
    {
        output << c->produtos[i] << endl;
    }
    return output;
}