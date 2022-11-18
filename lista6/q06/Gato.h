#ifndef GATO_H
#define GATO_H

#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"

class Gato : public Animal
{
public:
    Gato(string="Mia", string="Sphynx");
    string mia();
};

#endif