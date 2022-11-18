#include <iostream>
#include <string>
#include "Cupom.h"

using namespace std;

int main() {
    string id, descricao;
    float preco;
    int quantidade;

    cout << "Digite o id: ";
    cin >> id;

    cout << "Digite a descrição: ";
	cin.ignore(); // limpa o buffer
    getline(cin, descricao);

    cout << "Digite o preço: ";
    cin >> preco;

    cout << "Digite a quantidade: ";
    cin >> quantidade;

    Cupom cupom(id, descricao, preco, quantidade);
    cupom.mostrarCupom();
    
    return 0;
}