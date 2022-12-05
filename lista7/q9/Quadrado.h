#ifndef QUADRADO_H
#define QUADRADO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Quadrado : public FormaBidimensional
{
public:
  Quadrado() : FormaBidimensional(4) {}

  virtual void desenhar() {
    cout << "-----" << endl;
    cout << "|   |" << endl;
    cout << "-----" << endl;
  }

  virtual double calcularArea() {
    lado = 10;
    return lado * lado;
  }

  virtual double calcularPerimetro() {
    return lado * 4;
  }

protected:
  double lado;
};

#endif