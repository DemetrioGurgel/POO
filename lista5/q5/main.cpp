#include <iostream>
using std::cout, std::endl;
using std::cin;

#include "Array.h"

int main() {
  Array a1(2); 
  Array a2(2);    
  
  cout << "Entre com 2 elementos: ";
    
  cin >> a1;    
  
  cout << a1;   
  
  cout << "Entre com 2 elementos: ";
    
  cin >> a2;    
  
  cout << a2;  
  
  cout << (a1 + a2);

  cout << (a1 += a2);

  return 0;
}