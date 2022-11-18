#include <iostream>
using std::cout, std::endl, std::cin;

#include "ContaBanco.h"

ContaBanco::ContaBanco(double &entrada)
{   
	if(entrada >= 0)
	{
			saldo = entrada;

	}else
    {

			saldo = 0;

	}
}

void ContaBanco::creditar(double &credito)
{   
	double aux = credito;
	saldo += aux;

}

void ContaBanco::debitar(double &debito)
{
	while(debito > saldo)
	{

		cout << "Voce não possui saldo suficiente para esta operação! Tente novamente:" << endl;
		displayMessage();
		cin >> debito;
	}

	saldo -= debito;
}

double ContaBanco::getSaldo()
{
	return saldo;
}

void ContaBanco::displayMessage()
{
	std::cout<<"Seu saldo atual é de R$ " << getSaldo() << endl;
}