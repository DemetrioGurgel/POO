#include <iostream>
#include "empregado.h"
using namespace std;

int main() {
    string nome, sobrenome, nome2, sobrenome2;
    double salario, salario2;

    cout << "Digite o nome do empregado: ";
    cin >> nome;

    cout << "Digite o sobrenome do empregado: ";
    cin >> sobrenome;
    
    cout << "Digite o salário do empregado: ";
    cin >> salario;
	
		cout << "Digite o nome do segundo empregado: ";
    cin >> nome2;

    cout << "Digite o sobrenome do segundo empregado: ";
    cin >> sobrenome2;
    
    cout << "Digite o salário do segundo empregado: ";
    cin >> salario2;
	
    Empregado empregadoTeste1(nome, sobrenome, salario);
    empregadoTeste1.displayMessage();
	
		Empregado empregadoTeste2(nome2, sobrenome2, salario2);
    empregadoTeste2.displayMessage();

  return 0;
}