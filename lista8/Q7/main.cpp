#include <iostream>
#include <stdexcept>

#include "error.h"

using std::cerr;
using std::runtime_error;

bool teste(){
  if(true){
    throw terceiro();
  }
  
};

int main() {
  try{
    teste();
  }catch(runtime_error &e){
    cerr<<e.what();
  }
}