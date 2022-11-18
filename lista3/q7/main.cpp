#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

int main() {

  time_t now = time(0);

  tm *ltm = localtime(&now);

  Time s(ltm -> tm_hour, ltm -> tm_min , ltm -> tm_sec);

  s.printUniversal();


  return 0;
}