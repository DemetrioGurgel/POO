#ifndef CONTA_H
#define CONTA_H

#include <string>
using std::string;

class ContaBanco
{
  public:

    ContaBanco(double &entrada);

    void creditar(double &credito);

    void debitar(double &debito);

    double getSaldo();

    void displayMessage();

  private:
    double saldo;
};


#endif