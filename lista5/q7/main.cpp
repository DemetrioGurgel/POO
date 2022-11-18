#include <iostream>
#include "Complex.h"
using std::cout, std::endl;

int main(){
    Complex x(5.5, 4.2), y(2.5, 1.8), z;
    cout << "x: ";
    x.print();
    cout << endl;
    cout << "" << endl;
    cout << "y: ";
    y.print();
    cout << endl;
    cout << "" << endl;
    z = x + y;
    cout << "x + y: ";
    z.print();
    cout << endl;
    cout << "" << endl;
    z = x - y;
    cout << "x - y: ";
    z.print();
    cout << endl;
    cout << "" << endl;
    z += x;
    cout << "+= x: ";
    z.print();
    cout << endl;
    cout << "" << endl;
    z -= y;
    cout << "-= y: ";
    z.print();
    cout << endl;
    cout << endl;
    cout << "++z: ";
    ++z;
    z.print();
    cout << endl;
    cout << endl;
    cout << "--z: ";
    --z;
    z.print();
    cout << endl;
    return 0;
};