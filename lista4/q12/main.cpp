#include <iostream>

#include "ArrayList.h"
using std::cout;
using std::endl;

int main() {
    ArrayList al(10);

    al.add(1).add(2).add(3).add(4).add(5);
    cout << "busca indice 3: " << al.busca(3) << endl;
    al.print();

    al.remove(3);
    cout << "Remove 3" << endl;
    al.print();

    al.removeEL(4);
    cout << "Remove todos os elementos 4" << endl;
    al.print();

    al.somaArray(5);    
    cout << "Soma 5 a todos os elementos" << endl;
    al.print();

    al.subArray(5);
    cout << "Subtrai 5 a todos os elementos" << endl;
    al.print();

    al.multArray(5);
    cout << "Multiplica 5 a todos os elementos" << endl;
    al.print();

    al.divArray(5);
    cout << "Divide 5 a todos os elementos" << endl;
    al.print();

    return 0;
}