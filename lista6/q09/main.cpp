#include <iostream>
#include <string>
#include "PessoaFisica.h"
#include "Funcionario.h"
using namespace std;

int main()
{
    Funcionario f1("Demetrio", "123.456.789-10", "1234", 3541.21, 20, 22);
    cout << f1;
    cout << "-----------------------------------------------------------------------"<< endl;
    Funcionario f2("Victor", "987.654.321-00", "4321", 5164.80, 40, 42);
    cout << f2;

    return 0;
}