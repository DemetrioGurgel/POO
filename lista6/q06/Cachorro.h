#ifndef CACHORRO_H
#define CACHORRO_H

#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"

class Cachorro : public Animal
{
public:
    Cachorro(string="Doguinho", string="Vira-Lata");
    string late();

};


#endif

