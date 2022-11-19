#include "Pessoa.h"
#include <iostream>
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
#include "Funcionario.h"
#include "Cliente.h"
#include "Empresa.h"

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

    Funcionario f1("Demetrio", "123.456.789-10", "1234", 1000);
    Funcionario f2("Victor", "987.654.321-00", "4321", 2000);

    cout << f1 << f2 << endl;

    Cliente c1("Demetrio", "123.456.789-10", "Rua 1", "1234-5678");

    cout << c1 << endl;

    // Empresa e1("Demetrio", "08.965.289-0008/51", "Demetrio LTDA");

    return 0;
}