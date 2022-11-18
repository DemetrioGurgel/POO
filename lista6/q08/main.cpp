#include "Pessoa.h"
#include <iostream>
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
using namespace std;

int main()
{
    Pessoa p1("Demetrio");
    Pessoa p2("Victor");
    
    cout << p1 << p2 << endl;

    PessoaFisica pf1("Demetrio", "123.456.789-10");
    PessoaFisica pf2("Victor", "987.654.321-00");

    cout << pf1 << pf2 << endl;

    PessoaJuridica pj1("Demetrio", "08.965.289-0008/51", "Demetrio LTDA");
    PessoaJuridica pj2("Victor", "08.965.289-0008/51", "Victor LTDA");

    cout << pj1 << pj2 << endl;
    return 0;
}