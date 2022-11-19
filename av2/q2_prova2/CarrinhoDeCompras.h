#ifndef CARRINHODECOMPRAS_H
#define CARRINHODECOMPRAS_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CarrinhoDeCompras{
    friend ostream &operator<<(ostream &, const CarrinhoDeCompras &);
    friend ostream &operator<<(ostream &, const CarrinhoDeCompras *);
    public:
        CarrinhoDeCompras();
        CarrinhoDeCompras(string nome);
        void addProduto(string produto);
        void listarProdutos();
        void removerProduto(string produto);
        void limparCarrinho();
        string getNome()const{return nome;}
        void setNome(string nome){this->nome = nome;}
    private:
        string nome;
        vector<string> produtos;
};

#endif