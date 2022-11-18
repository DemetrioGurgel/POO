#include <iostream>
#include "IntegerSet.h"
using std::cout, std::endl;
int main() {

    IntegerSet a;
    cout << "a: ";
    a<<1<<2<<4<<6<<7<<8;
    a.print();
    IntegerSet b;
    cout<<endl<<"b: ";
    b<<1<<3<<5<<7<<9;
    b.print();
    IntegerSet c;
    cout << endl << "Union: ";
    c = a|b;
    c.print();
    cout << endl;
    IntegerSet d;
    cout << "Intersection: ";
    d = a&b;
    d.print();
    cout << endl;
    

    return 0;
}
