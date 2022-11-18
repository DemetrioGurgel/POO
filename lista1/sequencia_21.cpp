#include<iostream>

using std::cout, std::cin, std::endl;

int retorna()
{
    static int num = 0;
    int n = num;
    num +=1;

    return n;
}

int main(void)
{ 
    int entrada;
    cin >> entrada;

    while(entrada != -1){
        cout << retorna() << endl;
        cin >> entrada;
    }
}