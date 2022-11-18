#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>
using std::string;

class Empregado
{ 
	public:
		Empregado(string, string, double);
	
		void setNome(string);
	
		string getNome();
	
		void setSobrenome(string);
	
		string getSobrenome();
	
		void setSalario(double);
	
		double getSalario();

    	void aumentoSalario();
	
		void displayMessage();

	private:
		string nome;

		string sobrenome;

		double salario;
};

#endif