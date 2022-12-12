#include <iostream>
#include <stdexcept>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::cerr;

#include "Pilha.h"
#include "error.h"

int main() {
  //Pilha de inteiros
  Pilha<int> pi;
  Pilha<int>pi2;
  int popEli;
  try{
    pi.pop(popEli);

  }catch(cheio &r){
    cerr<<r.what()<<endl;
  }catch(vazia &e){
    cerr<<e.what()<<endl;
  }

  //Pilha de strings
  Pilha<string> ps;
  Pilha<string>ps2;
  string popEls;
  try{
    ps.push("10");
    ps.push("11");
    ps.pop(popEls);

  }catch(cheio &r){
    cerr<<r.what()<<endl;
  }catch(vazia &e){
    cerr<<e.what()<<endl;
  }
  
  return 0;
}
