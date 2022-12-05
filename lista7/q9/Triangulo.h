#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Triangulo : public FormaBidimensional
{
public:
  Triangulo() : FormaBidimensional(3) {}

  virtual void desenhar() {
    cout << "  .   " << endl;
    cout << " / \\ " << endl;
    cout << "/   \\" << endl;
    cout << "~~~~~ " << endl;
  }

  virtual double calcularArea() {
    base = 10;
    altura = 5;
    return (base * altura) / 2;
  }

  virtual double calcularPerimetro() {
    base = 10;
    return base * 3;
  }

protected:
  double base;
  double altura;
};

#endif