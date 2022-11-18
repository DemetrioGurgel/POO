#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

int main() {
    string cpf, nome;
    cout << "Digite o nome: ";
    getline(cin, nome);
    cout << "Digite o CPF: ";
    getline(cin, cpf);
    Pessoa input(cpf, nome);
    input.print();

    return 0;
}