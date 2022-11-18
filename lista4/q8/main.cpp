#include <iostream>
#include "Pessoa.h"
#include <string>

using std::cout, std::endl, std::string;

int main(){
    Pessoa pessoa1= Pessoa("Demetrio", 19, 1.75);
    pessoa1.printPessoa();
}
