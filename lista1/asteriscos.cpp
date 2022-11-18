#include <iostream>
using namespace std;
 
void asteriscoInverso2(int n)
{
    int a = 2 * n - 2;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n-i; j++)
            cout << " ";

        a = a - 2;
        for (int j = 0; j < i; j++) {
            // Printing stars
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    asteriscoInverso2(n);
    return 0;
}