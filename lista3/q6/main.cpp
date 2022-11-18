#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

//o uso de métodos inline não alteram a lógica do programa

int main() {
  Time t(11,50,59);
  Time a(11,59,59);
  Time b(23,59,59);

  t.printUniversal();
  a.printUniversal();
  b.printUniversal();

  return 0;
}
