#include <iostream>
using std::cout, std::endl, std::cin;

#include <string>
using std::string;

#include "ContaBanco.h"


int main()
{
    double entrada;
    double credito;
    double debito;

    cout << "Digite o valor inicial a ser creditado em sua conta:" << endl;

    cin >> entrada;
    ContaBanco minhaConta(entrada);
    minhaConta.displayMessage();

    cout << "Digite o valor para a ser depositado em sua conta: " << endl;
    cin >> credito;
    minhaConta.creditar(credito);
    minhaConta.displayMessage();

    cout << "Digite o valor que deseja sacar da sua conta: " << endl;
    cin >> debito;
    minhaConta.debitar(debito);
    minhaConta.displayMessage();

    return 0;
}