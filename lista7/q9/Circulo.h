#ifndef CIRCULO_H
#define CIRCULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Circulo : public FormaBidimensional
{
public:
  Circulo() : FormaBidimensional(99999) {}

  virtual void desenhar() {
    cout << "  _ " << endl;
    cout << "/   \\" << endl;
    cout << "\\   /" << endl;
    cout << "  ~ " << endl;
  }

  virtual double calcularArea() {
    raio = 10;
    return 3.14 * raio * raio;
  }
  

  virtual double calcularPerimetro() {
    raio = 10;
    return 2 * 3.14 * raio;
  }
  

protected:
  double raio;
};


#endif