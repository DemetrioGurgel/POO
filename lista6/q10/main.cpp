#include <iostream> 
#include <string>
#include "Cliente.h"
using namespace std;

int main()
{
    Cliente c1("Demetrio", "123.456.789-10", "Rua principal", "1234-5678");
    cout << c1;
    Cliente c2("Victor", "987.654.321-00", "Rua secundaria", "8765-4321");
    cout << c2;
    return 0;
}