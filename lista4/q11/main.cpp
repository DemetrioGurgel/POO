#include <iostream>
#include "ArrayList.h"

using std::cout;
using std::endl;

int main() {
    ArrayList al(10);

    al.add(1).add(2).add(3).add(4).add(5);;
    cout << "busca indice 2: " << al.busca(2) << endl;
    al.print();

    al.removeEL(4);
    cout << "Remove 4" << endl;
    al.print();

    return 0;
}