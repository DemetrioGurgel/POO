#include <iostream>

using std::cout, std::cin, std::endl;

void swap(int *el1, int *el2) {
    int temp; 

    temp = *el1;
    *el1 = *el2;
    *el2 = temp;
}
int main() {
    int a=10,
        b=20;
    void swap(int *, int *);

    cout << "a = " << a << " b = " << b << endl;
    swap(&a, &b);
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}
